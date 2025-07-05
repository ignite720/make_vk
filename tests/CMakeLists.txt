if(MAKE_VK_USE_CATCH2)
    include(FetchContent)
    FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v2.13.10
    )
    FetchContent_MakeAvailable(Catch2)
endif()
find_package(Vulkan REQUIRED COMPONENTS glslangValidator)

function(add_test TARGET SRCS)
    add_executable(${TARGET} EXCLUDE_FROM_ALL)
    target_sources(${TARGET} PRIVATE ${SRCS})
    target_compile_definitions(${TARGET} PRIVATE
        MAKE_VK_USE_CATCH2=$<IF:$<BOOL:${MAKE_VK_USE_CATCH2}>,1,0>
        $<$<BOOL:${MAKE_VK_USE_CATCH2}>:CATCH_CONFIG_MAIN>
    )
    target_link_libraries(${TARGET} PRIVATE
        Vulkan::Vulkan
        $<$<BOOL:${MAKE_VK_USE_CATCH2}>:Catch2::Catch2>
        ${PROJECT_NAME}
    )
endfunction(add_test)

file(GLOB SRCS "*.cpp")
foreach(SRC_FILE ${SRCS})
    get_filename_component(SRC_FILENAME ${SRC_FILE} NAME_WE)
    add_test(${SRC_FILENAME} "${SRC_FILE}")
endforeach()
