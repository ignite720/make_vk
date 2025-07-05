import os
from pathlib import Path
import re

START_INDEX = 2
STRUCT_NAME_WITH_PARENTHESIS_MAX_LEN = 100
STRUCT_TYPE_REPLACEMENT = [
    ("8_BIT", "8BIT"),
    ("16_BIT", "16BIT"),
    ("2_D", "2D"),
    ("3_D", "3D"),
    ("AABBNV", "AABB_NV"),
    ("AV_1", "AV1"),
    ("ASTCHDR", "ASTC_HDR"),
    ("FLOAT_16", "FLOAT16"),
    ("H_264", "H264"),
    ("H_265", "H265"),
    ("INT_8", "INT8"),
    ("INT_64", "INT64"),
    ("RGBA_10_X6", "RGBA10X6"),
    ("VULKAN_11", "VULKAN_1_1"),
    ("VULKAN_12", "VULKAN_1_2"),
    ("VULKAN_13", "VULKAN_1_3"),
    ("VULKAN_14", "VULKAN_1_4"),
]

def extract_struct_name(line):
    pattern = r"typedef\s+struct\s+(\w+)\s*{"
    match = re.search(pattern, line.strip())
    return match.group(1) if match else None

def camel_to_snake_upper(name):
    s = re.sub(r"(\D)(\d+)([A-Z])", r"\1_\2_\3", name)
    s = re.sub(r"(\D)(\d+)$", r"\1_\2", s)

    s = re.sub("(.)([A-Z][a-z]+)", r"\1_\2", s)
    s = re.sub(r"([a-z0-9])([A-Z])", r"\1_\2", s)

    s = s.upper()
    s = re.sub("_+", "_", s)

    for i in STRUCT_TYPE_REPLACEMENT:
        s = s.replace(i[0], i[1])
    return s
    
def generate_output(is_cpp: bool, is_cpp_20: bool):
    input_file_path = (Path(VULKAN_SDK) / "include" / "vulkan" / Path("vulkan_core.h"))
    struct_field_s_type = ".sType = " if not is_cpp or is_cpp_20 else ""
    
    output_lines = []
    output_lines_for_test = list()
    with open(input_file_path, mode="r") as fp:
        lines = fp.readlines()
        for i in range(0, len(lines)):
            line = lines[i].strip()
            if re.search(r"VkStructureType\s+sType;\s*$", line):
                prev_line = lines[i-1]
                struct_name = extract_struct_name(prev_line)
                struct_name_snake_case = camel_to_snake_upper(struct_name)
                struct_name_snake_case_vk_type = f"VK_STRUCTURE_TYPE_{struct_name_snake_case[3:]}"                
                struct_name_snake_case_with_parenthesis = f"{struct_name_snake_case}()"
                
                struct_name_for_fmt = f"{struct_name}" if is_cpp else f"({struct_name})"
                output_line = f"#define MAKE_{struct_name_snake_case_with_parenthesis.ljust(STRUCT_NAME_WITH_PARENTHESIS_MAX_LEN)} {struct_name_for_fmt} {{ {struct_field_s_type}{struct_name_snake_case_vk_type} }}"
                output_lines.append(output_line)

                test_line = f"{struct_name} tmp = MAKE_{struct_name_snake_case_with_parenthesis};\n"
                test_line += f"    CHECK(offsetof({struct_name}, sType) == 0);\n"
                test_line += f"    REQUIRE(tmp.sType == {struct_name_snake_case_vk_type});"
                output_lines_for_test.append(test_line)
    return output_lines, output_lines_for_test

if __name__ == "__main__":
    VULKAN_SDK = os.environ.get("VULKAN_SDK")
    if VULKAN_SDK:
        with open(Path.cwd() / "VK_VERSION", "r") as fp:
            VK_VERSION = fp.readline().strip()

        output_file_path = (Path.cwd() / "include" / "make_vk.h")
        output_test1_file_path = (Path.cwd() / "tests" / "test1.cpp")

        output_lines_c, output_lines_for_test = generate_output(False, False)
        output_lines_cpp, _ = generate_output(True, False)
        output_lines_cpp20, _ = generate_output(True, True)
        
        if True:
            content = ""
            with open(output_file_path, mode="w", encoding="utf-8", newline="\n") as fp:
                content += "#ifndef MAKE_VK_H__\n"
                content += "#define MAKE_VK_H__ 1\n"
                content += "\n"
                content += f"// Entries: {len(output_lines_c)}\n"
                content += "#define MAKE_VK_CPP20 202002L\n"
                content += f"#define MAKE_VK_VERSION \"{VK_VERSION}\"\n"
                content += "\n"
                content += "#include <vulkan/vulkan.h>\n"
                content += "\n"
                content += "#if !defined(__cplusplus)\n"
                content += "\n"
                content += "".join(f"{line}\n" for line in output_lines_c[START_INDEX:])
                content += "\n"
                content += "#else\n"
                content += "\n"
                content += "#if (__cplusplus >= MAKE_VK_CPP20)\n"
                content += "\n"
                content += "".join(f"{line}\n" for line in output_lines_cpp20[START_INDEX:])
                content += "\n"
                content += "#else\n"
                content += "\n"
                content += "".join(f"{line}\n" for line in output_lines_cpp[START_INDEX:])
                content += "\n"
                content += "#endif\n"
                content += "\n"
                content += "#endif\n"
                content += "\n"
                content += "#endif\n"
                fp.write(content)
        if True:
            content = ""
            with open(output_test1_file_path, mode="w", encoding="utf-8", newline="\n") as fp:
                content += "#define VK_ENABLE_BETA_EXTENSIONS\n"
                content += "#include <make_vk.h>\n"
                content += "\n"
                content += "#if MAKE_VK_USE_CATCH2\n"
                content += "#include <catch2/catch.hpp>\n"
                content += "#else\n"
                content += "#include <assert.h>\n"
                content += "#include <stddef.h>\n"
                content += "#include <stdio.h>\n"
                content += "\n"
                content += "#define CHECK(cond) assert(cond)\n"
                content += "#define REQUIRE(cond) assert(cond)\n"
                content += "#define TEST_CASE(x) do { printf(\"%s\\n\", x); } while(false); if (x) \n"
                content += "\n"
                content += "static void s_test1() {\n"
                content += "#endif\n"
                content += "\n"
                content += f"TEST_CASE(\"Test case 0\") {{\n"
                content += f"    REQUIRE(MAKE_VK_VERSION == \"{VK_VERSION}\");\n"
                content += f"}}\n"
                content += f"\n"
                for i, v in enumerate(output_lines_for_test[START_INDEX:]):
                    content += f"TEST_CASE(\"Test case {i+1}\") {{\n"
                    content += f"    {v}\n"
                    content += f"}}\n"
                    content += f"\n"
                content += "#if !MAKE_VK_USE_CATCH2\n"
                content += "}\n"
                content += "\n"
                content += "int main() {\n"
                content += "    s_test1();\n"
                content += "}\n"
                content += "#endif\n"
                fp.write(content)
    else:
        print("Vulkan SDK not found!")