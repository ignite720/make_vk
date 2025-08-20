#define VK_ENABLE_BETA_EXTENSIONS
#include <make_vk.h>

#if MAKE_VK_USE_CATCH2
#include <catch2/catch.hpp>
#else
#include <assert.h>
#include <stddef.h>
#include <stdio.h>

#define CHECK(cond) assert(cond)
#define REQUIRE(cond) assert(cond)
#define TEST_CASE(x) do { printf("%s\n", x); } while(false); if (x) 

static void s_test1() {
#endif

TEST_CASE("Test case 0") {
    REQUIRE(MAKE_VK_VERSION == "1.4.309.0");
}

TEST_CASE("Test case 1") {
    VkBufferMemoryBarrier tmp = MAKE_VK_BUFFER_MEMORY_BARRIER();
    CHECK(offsetof(VkBufferMemoryBarrier, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER);
}

TEST_CASE("Test case 2") {
    VkImageMemoryBarrier tmp = MAKE_VK_IMAGE_MEMORY_BARRIER();
    CHECK(offsetof(VkImageMemoryBarrier, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER);
}

TEST_CASE("Test case 3") {
    VkMemoryBarrier tmp = MAKE_VK_MEMORY_BARRIER();
    CHECK(offsetof(VkMemoryBarrier, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_BARRIER);
}

TEST_CASE("Test case 4") {
    VkApplicationInfo tmp = MAKE_VK_APPLICATION_INFO();
    CHECK(offsetof(VkApplicationInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_APPLICATION_INFO);
}

TEST_CASE("Test case 5") {
    VkInstanceCreateInfo tmp = MAKE_VK_INSTANCE_CREATE_INFO();
    CHECK(offsetof(VkInstanceCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO);
}

TEST_CASE("Test case 6") {
    VkDeviceQueueCreateInfo tmp = MAKE_VK_DEVICE_QUEUE_CREATE_INFO();
    CHECK(offsetof(VkDeviceQueueCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO);
}

TEST_CASE("Test case 7") {
    VkDeviceCreateInfo tmp = MAKE_VK_DEVICE_CREATE_INFO();
    CHECK(offsetof(VkDeviceCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO);
}

TEST_CASE("Test case 8") {
    VkSubmitInfo tmp = MAKE_VK_SUBMIT_INFO();
    CHECK(offsetof(VkSubmitInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBMIT_INFO);
}

TEST_CASE("Test case 9") {
    VkMappedMemoryRange tmp = MAKE_VK_MAPPED_MEMORY_RANGE();
    CHECK(offsetof(VkMappedMemoryRange, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE);
}

TEST_CASE("Test case 10") {
    VkMemoryAllocateInfo tmp = MAKE_VK_MEMORY_ALLOCATE_INFO();
    CHECK(offsetof(VkMemoryAllocateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO);
}

TEST_CASE("Test case 11") {
    VkBindSparseInfo tmp = MAKE_VK_BIND_SPARSE_INFO();
    CHECK(offsetof(VkBindSparseInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_SPARSE_INFO);
}

TEST_CASE("Test case 12") {
    VkFenceCreateInfo tmp = MAKE_VK_FENCE_CREATE_INFO();
    CHECK(offsetof(VkFenceCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_FENCE_CREATE_INFO);
}

TEST_CASE("Test case 13") {
    VkSemaphoreCreateInfo tmp = MAKE_VK_SEMAPHORE_CREATE_INFO();
    CHECK(offsetof(VkSemaphoreCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO);
}

TEST_CASE("Test case 14") {
    VkEventCreateInfo tmp = MAKE_VK_EVENT_CREATE_INFO();
    CHECK(offsetof(VkEventCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EVENT_CREATE_INFO);
}

TEST_CASE("Test case 15") {
    VkQueryPoolCreateInfo tmp = MAKE_VK_QUERY_POOL_CREATE_INFO();
    CHECK(offsetof(VkQueryPoolCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO);
}

TEST_CASE("Test case 16") {
    VkBufferCreateInfo tmp = MAKE_VK_BUFFER_CREATE_INFO();
    CHECK(offsetof(VkBufferCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO);
}

TEST_CASE("Test case 17") {
    VkBufferViewCreateInfo tmp = MAKE_VK_BUFFER_VIEW_CREATE_INFO();
    CHECK(offsetof(VkBufferViewCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO);
}

TEST_CASE("Test case 18") {
    VkImageCreateInfo tmp = MAKE_VK_IMAGE_CREATE_INFO();
    CHECK(offsetof(VkImageCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO);
}

TEST_CASE("Test case 19") {
    VkImageViewCreateInfo tmp = MAKE_VK_IMAGE_VIEW_CREATE_INFO();
    CHECK(offsetof(VkImageViewCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO);
}

TEST_CASE("Test case 20") {
    VkShaderModuleCreateInfo tmp = MAKE_VK_SHADER_MODULE_CREATE_INFO();
    CHECK(offsetof(VkShaderModuleCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO);
}

TEST_CASE("Test case 21") {
    VkPipelineCacheCreateInfo tmp = MAKE_VK_PIPELINE_CACHE_CREATE_INFO();
    CHECK(offsetof(VkPipelineCacheCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO);
}

TEST_CASE("Test case 22") {
    VkPipelineShaderStageCreateInfo tmp = MAKE_VK_PIPELINE_SHADER_STAGE_CREATE_INFO();
    CHECK(offsetof(VkPipelineShaderStageCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO);
}

TEST_CASE("Test case 23") {
    VkComputePipelineCreateInfo tmp = MAKE_VK_COMPUTE_PIPELINE_CREATE_INFO();
    CHECK(offsetof(VkComputePipelineCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO);
}

TEST_CASE("Test case 24") {
    VkPipelineVertexInputStateCreateInfo tmp = MAKE_VK_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineVertexInputStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO);
}

TEST_CASE("Test case 25") {
    VkPipelineInputAssemblyStateCreateInfo tmp = MAKE_VK_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineInputAssemblyStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO);
}

TEST_CASE("Test case 26") {
    VkPipelineTessellationStateCreateInfo tmp = MAKE_VK_PIPELINE_TESSELLATION_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineTessellationStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO);
}

TEST_CASE("Test case 27") {
    VkPipelineViewportStateCreateInfo tmp = MAKE_VK_PIPELINE_VIEWPORT_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineViewportStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO);
}

TEST_CASE("Test case 28") {
    VkPipelineRasterizationStateCreateInfo tmp = MAKE_VK_PIPELINE_RASTERIZATION_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineRasterizationStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO);
}

TEST_CASE("Test case 29") {
    VkPipelineMultisampleStateCreateInfo tmp = MAKE_VK_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineMultisampleStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO);
}

TEST_CASE("Test case 30") {
    VkPipelineDepthStencilStateCreateInfo tmp = MAKE_VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineDepthStencilStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO);
}

TEST_CASE("Test case 31") {
    VkPipelineColorBlendStateCreateInfo tmp = MAKE_VK_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineColorBlendStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO);
}

TEST_CASE("Test case 32") {
    VkPipelineDynamicStateCreateInfo tmp = MAKE_VK_PIPELINE_DYNAMIC_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineDynamicStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO);
}

TEST_CASE("Test case 33") {
    VkGraphicsPipelineCreateInfo tmp = MAKE_VK_GRAPHICS_PIPELINE_CREATE_INFO();
    CHECK(offsetof(VkGraphicsPipelineCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO);
}

TEST_CASE("Test case 34") {
    VkPipelineLayoutCreateInfo tmp = MAKE_VK_PIPELINE_LAYOUT_CREATE_INFO();
    CHECK(offsetof(VkPipelineLayoutCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO);
}

TEST_CASE("Test case 35") {
    VkSamplerCreateInfo tmp = MAKE_VK_SAMPLER_CREATE_INFO();
    CHECK(offsetof(VkSamplerCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO);
}

TEST_CASE("Test case 36") {
    VkCopyDescriptorSet tmp = MAKE_VK_COPY_DESCRIPTOR_SET();
    CHECK(offsetof(VkCopyDescriptorSet, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET);
}

TEST_CASE("Test case 37") {
    VkDescriptorPoolCreateInfo tmp = MAKE_VK_DESCRIPTOR_POOL_CREATE_INFO();
    CHECK(offsetof(VkDescriptorPoolCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO);
}

TEST_CASE("Test case 38") {
    VkDescriptorSetAllocateInfo tmp = MAKE_VK_DESCRIPTOR_SET_ALLOCATE_INFO();
    CHECK(offsetof(VkDescriptorSetAllocateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO);
}

TEST_CASE("Test case 39") {
    VkDescriptorSetLayoutCreateInfo tmp = MAKE_VK_DESCRIPTOR_SET_LAYOUT_CREATE_INFO();
    CHECK(offsetof(VkDescriptorSetLayoutCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO);
}

TEST_CASE("Test case 40") {
    VkWriteDescriptorSet tmp = MAKE_VK_WRITE_DESCRIPTOR_SET();
    CHECK(offsetof(VkWriteDescriptorSet, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET);
}

TEST_CASE("Test case 41") {
    VkFramebufferCreateInfo tmp = MAKE_VK_FRAMEBUFFER_CREATE_INFO();
    CHECK(offsetof(VkFramebufferCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO);
}

TEST_CASE("Test case 42") {
    VkRenderPassCreateInfo tmp = MAKE_VK_RENDER_PASS_CREATE_INFO();
    CHECK(offsetof(VkRenderPassCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO);
}

TEST_CASE("Test case 43") {
    VkCommandPoolCreateInfo tmp = MAKE_VK_COMMAND_POOL_CREATE_INFO();
    CHECK(offsetof(VkCommandPoolCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO);
}

TEST_CASE("Test case 44") {
    VkCommandBufferAllocateInfo tmp = MAKE_VK_COMMAND_BUFFER_ALLOCATE_INFO();
    CHECK(offsetof(VkCommandBufferAllocateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO);
}

TEST_CASE("Test case 45") {
    VkCommandBufferInheritanceInfo tmp = MAKE_VK_COMMAND_BUFFER_INHERITANCE_INFO();
    CHECK(offsetof(VkCommandBufferInheritanceInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO);
}

TEST_CASE("Test case 46") {
    VkCommandBufferBeginInfo tmp = MAKE_VK_COMMAND_BUFFER_BEGIN_INFO();
    CHECK(offsetof(VkCommandBufferBeginInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO);
}

TEST_CASE("Test case 47") {
    VkRenderPassBeginInfo tmp = MAKE_VK_RENDER_PASS_BEGIN_INFO();
    CHECK(offsetof(VkRenderPassBeginInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO);
}

TEST_CASE("Test case 48") {
    VkPhysicalDeviceSubgroupProperties tmp = MAKE_VK_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceSubgroupProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES);
}

TEST_CASE("Test case 49") {
    VkBindBufferMemoryInfo tmp = MAKE_VK_BIND_BUFFER_MEMORY_INFO();
    CHECK(offsetof(VkBindBufferMemoryInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO);
}

TEST_CASE("Test case 50") {
    VkBindImageMemoryInfo tmp = MAKE_VK_BIND_IMAGE_MEMORY_INFO();
    CHECK(offsetof(VkBindImageMemoryInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO);
}

TEST_CASE("Test case 51") {
    VkPhysicalDevice16BitStorageFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES();
    CHECK(offsetof(VkPhysicalDevice16BitStorageFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES);
}

TEST_CASE("Test case 52") {
    VkMemoryDedicatedRequirements tmp = MAKE_VK_MEMORY_DEDICATED_REQUIREMENTS();
    CHECK(offsetof(VkMemoryDedicatedRequirements, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS);
}

TEST_CASE("Test case 53") {
    VkMemoryDedicatedAllocateInfo tmp = MAKE_VK_MEMORY_DEDICATED_ALLOCATE_INFO();
    CHECK(offsetof(VkMemoryDedicatedAllocateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO);
}

TEST_CASE("Test case 54") {
    VkMemoryAllocateFlagsInfo tmp = MAKE_VK_MEMORY_ALLOCATE_FLAGS_INFO();
    CHECK(offsetof(VkMemoryAllocateFlagsInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO);
}

TEST_CASE("Test case 55") {
    VkDeviceGroupRenderPassBeginInfo tmp = MAKE_VK_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO();
    CHECK(offsetof(VkDeviceGroupRenderPassBeginInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO);
}

TEST_CASE("Test case 56") {
    VkDeviceGroupCommandBufferBeginInfo tmp = MAKE_VK_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO();
    CHECK(offsetof(VkDeviceGroupCommandBufferBeginInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO);
}

TEST_CASE("Test case 57") {
    VkDeviceGroupSubmitInfo tmp = MAKE_VK_DEVICE_GROUP_SUBMIT_INFO();
    CHECK(offsetof(VkDeviceGroupSubmitInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO);
}

TEST_CASE("Test case 58") {
    VkDeviceGroupBindSparseInfo tmp = MAKE_VK_DEVICE_GROUP_BIND_SPARSE_INFO();
    CHECK(offsetof(VkDeviceGroupBindSparseInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO);
}

TEST_CASE("Test case 59") {
    VkBindBufferMemoryDeviceGroupInfo tmp = MAKE_VK_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO();
    CHECK(offsetof(VkBindBufferMemoryDeviceGroupInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO);
}

TEST_CASE("Test case 60") {
    VkBindImageMemoryDeviceGroupInfo tmp = MAKE_VK_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO();
    CHECK(offsetof(VkBindImageMemoryDeviceGroupInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO);
}

TEST_CASE("Test case 61") {
    VkPhysicalDeviceGroupProperties tmp = MAKE_VK_PHYSICAL_DEVICE_GROUP_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceGroupProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES);
}

TEST_CASE("Test case 62") {
    VkDeviceGroupDeviceCreateInfo tmp = MAKE_VK_DEVICE_GROUP_DEVICE_CREATE_INFO();
    CHECK(offsetof(VkDeviceGroupDeviceCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO);
}

TEST_CASE("Test case 63") {
    VkBufferMemoryRequirementsInfo2 tmp = MAKE_VK_BUFFER_MEMORY_REQUIREMENTS_INFO_2();
    CHECK(offsetof(VkBufferMemoryRequirementsInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2);
}

TEST_CASE("Test case 64") {
    VkImageMemoryRequirementsInfo2 tmp = MAKE_VK_IMAGE_MEMORY_REQUIREMENTS_INFO_2();
    CHECK(offsetof(VkImageMemoryRequirementsInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2);
}

TEST_CASE("Test case 65") {
    VkImageSparseMemoryRequirementsInfo2 tmp = MAKE_VK_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2();
    CHECK(offsetof(VkImageSparseMemoryRequirementsInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2);
}

TEST_CASE("Test case 66") {
    VkMemoryRequirements2 tmp = MAKE_VK_MEMORY_REQUIREMENTS_2();
    CHECK(offsetof(VkMemoryRequirements2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2);
}

TEST_CASE("Test case 67") {
    VkSparseImageMemoryRequirements2 tmp = MAKE_VK_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2();
    CHECK(offsetof(VkSparseImageMemoryRequirements2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2);
}

TEST_CASE("Test case 68") {
    VkPhysicalDeviceFeatures2 tmp = MAKE_VK_PHYSICAL_DEVICE_FEATURES_2();
    CHECK(offsetof(VkPhysicalDeviceFeatures2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2);
}

TEST_CASE("Test case 69") {
    VkPhysicalDeviceProperties2 tmp = MAKE_VK_PHYSICAL_DEVICE_PROPERTIES_2();
    CHECK(offsetof(VkPhysicalDeviceProperties2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2);
}

TEST_CASE("Test case 70") {
    VkFormatProperties2 tmp = MAKE_VK_FORMAT_PROPERTIES_2();
    CHECK(offsetof(VkFormatProperties2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2);
}

TEST_CASE("Test case 71") {
    VkImageFormatProperties2 tmp = MAKE_VK_IMAGE_FORMAT_PROPERTIES_2();
    CHECK(offsetof(VkImageFormatProperties2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2);
}

TEST_CASE("Test case 72") {
    VkPhysicalDeviceImageFormatInfo2 tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2();
    CHECK(offsetof(VkPhysicalDeviceImageFormatInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2);
}

TEST_CASE("Test case 73") {
    VkQueueFamilyProperties2 tmp = MAKE_VK_QUEUE_FAMILY_PROPERTIES_2();
    CHECK(offsetof(VkQueueFamilyProperties2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2);
}

TEST_CASE("Test case 74") {
    VkPhysicalDeviceMemoryProperties2 tmp = MAKE_VK_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2();
    CHECK(offsetof(VkPhysicalDeviceMemoryProperties2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2);
}

TEST_CASE("Test case 75") {
    VkSparseImageFormatProperties2 tmp = MAKE_VK_SPARSE_IMAGE_FORMAT_PROPERTIES_2();
    CHECK(offsetof(VkSparseImageFormatProperties2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2);
}

TEST_CASE("Test case 76") {
    VkPhysicalDeviceSparseImageFormatInfo2 tmp = MAKE_VK_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2();
    CHECK(offsetof(VkPhysicalDeviceSparseImageFormatInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2);
}

TEST_CASE("Test case 77") {
    VkPhysicalDevicePointClippingProperties tmp = MAKE_VK_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES();
    CHECK(offsetof(VkPhysicalDevicePointClippingProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES);
}

TEST_CASE("Test case 78") {
    VkRenderPassInputAttachmentAspectCreateInfo tmp = MAKE_VK_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO();
    CHECK(offsetof(VkRenderPassInputAttachmentAspectCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO);
}

TEST_CASE("Test case 79") {
    VkImageViewUsageCreateInfo tmp = MAKE_VK_IMAGE_VIEW_USAGE_CREATE_INFO();
    CHECK(offsetof(VkImageViewUsageCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO);
}

TEST_CASE("Test case 80") {
    VkPipelineTessellationDomainOriginStateCreateInfo tmp = MAKE_VK_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineTessellationDomainOriginStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO);
}

TEST_CASE("Test case 81") {
    VkRenderPassMultiviewCreateInfo tmp = MAKE_VK_RENDER_PASS_MULTIVIEW_CREATE_INFO();
    CHECK(offsetof(VkRenderPassMultiviewCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO);
}

TEST_CASE("Test case 82") {
    VkPhysicalDeviceMultiviewFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_MULTIVIEW_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceMultiviewFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES);
}

TEST_CASE("Test case 83") {
    VkPhysicalDeviceMultiviewProperties tmp = MAKE_VK_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceMultiviewProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES);
}

TEST_CASE("Test case 84") {
    VkPhysicalDeviceVariablePointersFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceVariablePointersFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES);
}

TEST_CASE("Test case 85") {
    VkPhysicalDeviceProtectedMemoryFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceProtectedMemoryFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES);
}

TEST_CASE("Test case 86") {
    VkPhysicalDeviceProtectedMemoryProperties tmp = MAKE_VK_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceProtectedMemoryProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES);
}

TEST_CASE("Test case 87") {
    VkDeviceQueueInfo2 tmp = MAKE_VK_DEVICE_QUEUE_INFO_2();
    CHECK(offsetof(VkDeviceQueueInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2);
}

TEST_CASE("Test case 88") {
    VkProtectedSubmitInfo tmp = MAKE_VK_PROTECTED_SUBMIT_INFO();
    CHECK(offsetof(VkProtectedSubmitInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO);
}

TEST_CASE("Test case 89") {
    VkSamplerYcbcrConversionCreateInfo tmp = MAKE_VK_SAMPLER_YCBCR_CONVERSION_CREATE_INFO();
    CHECK(offsetof(VkSamplerYcbcrConversionCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO);
}

TEST_CASE("Test case 90") {
    VkSamplerYcbcrConversionInfo tmp = MAKE_VK_SAMPLER_YCBCR_CONVERSION_INFO();
    CHECK(offsetof(VkSamplerYcbcrConversionInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO);
}

TEST_CASE("Test case 91") {
    VkBindImagePlaneMemoryInfo tmp = MAKE_VK_BIND_IMAGE_PLANE_MEMORY_INFO();
    CHECK(offsetof(VkBindImagePlaneMemoryInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO);
}

TEST_CASE("Test case 92") {
    VkImagePlaneMemoryRequirementsInfo tmp = MAKE_VK_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO();
    CHECK(offsetof(VkImagePlaneMemoryRequirementsInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO);
}

TEST_CASE("Test case 93") {
    VkPhysicalDeviceSamplerYcbcrConversionFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceSamplerYcbcrConversionFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES);
}

TEST_CASE("Test case 94") {
    VkSamplerYcbcrConversionImageFormatProperties tmp = MAKE_VK_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES();
    CHECK(offsetof(VkSamplerYcbcrConversionImageFormatProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES);
}

TEST_CASE("Test case 95") {
    VkDescriptorUpdateTemplateCreateInfo tmp = MAKE_VK_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO();
    CHECK(offsetof(VkDescriptorUpdateTemplateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO);
}

TEST_CASE("Test case 96") {
    VkPhysicalDeviceExternalImageFormatInfo tmp = MAKE_VK_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO();
    CHECK(offsetof(VkPhysicalDeviceExternalImageFormatInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO);
}

TEST_CASE("Test case 97") {
    VkExternalImageFormatProperties tmp = MAKE_VK_EXTERNAL_IMAGE_FORMAT_PROPERTIES();
    CHECK(offsetof(VkExternalImageFormatProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES);
}

TEST_CASE("Test case 98") {
    VkPhysicalDeviceExternalBufferInfo tmp = MAKE_VK_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO();
    CHECK(offsetof(VkPhysicalDeviceExternalBufferInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO);
}

TEST_CASE("Test case 99") {
    VkExternalBufferProperties tmp = MAKE_VK_EXTERNAL_BUFFER_PROPERTIES();
    CHECK(offsetof(VkExternalBufferProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES);
}

TEST_CASE("Test case 100") {
    VkPhysicalDeviceIDProperties tmp = MAKE_VK_PHYSICAL_DEVICE_ID_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceIDProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES);
}

TEST_CASE("Test case 101") {
    VkExternalMemoryImageCreateInfo tmp = MAKE_VK_EXTERNAL_MEMORY_IMAGE_CREATE_INFO();
    CHECK(offsetof(VkExternalMemoryImageCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO);
}

TEST_CASE("Test case 102") {
    VkExternalMemoryBufferCreateInfo tmp = MAKE_VK_EXTERNAL_MEMORY_BUFFER_CREATE_INFO();
    CHECK(offsetof(VkExternalMemoryBufferCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO);
}

TEST_CASE("Test case 103") {
    VkExportMemoryAllocateInfo tmp = MAKE_VK_EXPORT_MEMORY_ALLOCATE_INFO();
    CHECK(offsetof(VkExportMemoryAllocateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO);
}

TEST_CASE("Test case 104") {
    VkPhysicalDeviceExternalFenceInfo tmp = MAKE_VK_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO();
    CHECK(offsetof(VkPhysicalDeviceExternalFenceInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO);
}

TEST_CASE("Test case 105") {
    VkExternalFenceProperties tmp = MAKE_VK_EXTERNAL_FENCE_PROPERTIES();
    CHECK(offsetof(VkExternalFenceProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES);
}

TEST_CASE("Test case 106") {
    VkExportFenceCreateInfo tmp = MAKE_VK_EXPORT_FENCE_CREATE_INFO();
    CHECK(offsetof(VkExportFenceCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO);
}

TEST_CASE("Test case 107") {
    VkExportSemaphoreCreateInfo tmp = MAKE_VK_EXPORT_SEMAPHORE_CREATE_INFO();
    CHECK(offsetof(VkExportSemaphoreCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO);
}

TEST_CASE("Test case 108") {
    VkPhysicalDeviceExternalSemaphoreInfo tmp = MAKE_VK_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO();
    CHECK(offsetof(VkPhysicalDeviceExternalSemaphoreInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO);
}

TEST_CASE("Test case 109") {
    VkExternalSemaphoreProperties tmp = MAKE_VK_EXTERNAL_SEMAPHORE_PROPERTIES();
    CHECK(offsetof(VkExternalSemaphoreProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES);
}

TEST_CASE("Test case 110") {
    VkPhysicalDeviceMaintenance3Properties tmp = MAKE_VK_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceMaintenance3Properties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES);
}

TEST_CASE("Test case 111") {
    VkDescriptorSetLayoutSupport tmp = MAKE_VK_DESCRIPTOR_SET_LAYOUT_SUPPORT();
    CHECK(offsetof(VkDescriptorSetLayoutSupport, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT);
}

TEST_CASE("Test case 112") {
    VkPhysicalDeviceShaderDrawParametersFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceShaderDrawParametersFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES);
}

TEST_CASE("Test case 113") {
    VkPhysicalDeviceVulkan11Features tmp = MAKE_VK_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceVulkan11Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES);
}

TEST_CASE("Test case 114") {
    VkPhysicalDeviceVulkan11Properties tmp = MAKE_VK_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceVulkan11Properties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES);
}

TEST_CASE("Test case 115") {
    VkPhysicalDeviceVulkan12Features tmp = MAKE_VK_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceVulkan12Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES);
}

TEST_CASE("Test case 116") {
    VkPhysicalDeviceVulkan12Properties tmp = MAKE_VK_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceVulkan12Properties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES);
}

TEST_CASE("Test case 117") {
    VkImageFormatListCreateInfo tmp = MAKE_VK_IMAGE_FORMAT_LIST_CREATE_INFO();
    CHECK(offsetof(VkImageFormatListCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO);
}

TEST_CASE("Test case 118") {
    VkAttachmentDescription2 tmp = MAKE_VK_ATTACHMENT_DESCRIPTION_2();
    CHECK(offsetof(VkAttachmentDescription2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2);
}

TEST_CASE("Test case 119") {
    VkAttachmentReference2 tmp = MAKE_VK_ATTACHMENT_REFERENCE_2();
    CHECK(offsetof(VkAttachmentReference2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2);
}

TEST_CASE("Test case 120") {
    VkSubpassDescription2 tmp = MAKE_VK_SUBPASS_DESCRIPTION_2();
    CHECK(offsetof(VkSubpassDescription2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2);
}

TEST_CASE("Test case 121") {
    VkSubpassDependency2 tmp = MAKE_VK_SUBPASS_DEPENDENCY_2();
    CHECK(offsetof(VkSubpassDependency2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2);
}

TEST_CASE("Test case 122") {
    VkRenderPassCreateInfo2 tmp = MAKE_VK_RENDER_PASS_CREATE_INFO_2();
    CHECK(offsetof(VkRenderPassCreateInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2);
}

TEST_CASE("Test case 123") {
    VkSubpassBeginInfo tmp = MAKE_VK_SUBPASS_BEGIN_INFO();
    CHECK(offsetof(VkSubpassBeginInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO);
}

TEST_CASE("Test case 124") {
    VkSubpassEndInfo tmp = MAKE_VK_SUBPASS_END_INFO();
    CHECK(offsetof(VkSubpassEndInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBPASS_END_INFO);
}

TEST_CASE("Test case 125") {
    VkPhysicalDevice8BitStorageFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES();
    CHECK(offsetof(VkPhysicalDevice8BitStorageFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES);
}

TEST_CASE("Test case 126") {
    VkPhysicalDeviceDriverProperties tmp = MAKE_VK_PHYSICAL_DEVICE_DRIVER_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceDriverProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES);
}

TEST_CASE("Test case 127") {
    VkPhysicalDeviceShaderAtomicInt64Features tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceShaderAtomicInt64Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES);
}

TEST_CASE("Test case 128") {
    VkPhysicalDeviceShaderFloat16Int8Features tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceShaderFloat16Int8Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES);
}

TEST_CASE("Test case 129") {
    VkPhysicalDeviceFloatControlsProperties tmp = MAKE_VK_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceFloatControlsProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES);
}

TEST_CASE("Test case 130") {
    VkDescriptorSetLayoutBindingFlagsCreateInfo tmp = MAKE_VK_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO();
    CHECK(offsetof(VkDescriptorSetLayoutBindingFlagsCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO);
}

TEST_CASE("Test case 131") {
    VkPhysicalDeviceDescriptorIndexingFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceDescriptorIndexingFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES);
}

TEST_CASE("Test case 132") {
    VkPhysicalDeviceDescriptorIndexingProperties tmp = MAKE_VK_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceDescriptorIndexingProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES);
}

TEST_CASE("Test case 133") {
    VkDescriptorSetVariableDescriptorCountAllocateInfo tmp = MAKE_VK_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO();
    CHECK(offsetof(VkDescriptorSetVariableDescriptorCountAllocateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO);
}

TEST_CASE("Test case 134") {
    VkDescriptorSetVariableDescriptorCountLayoutSupport tmp = MAKE_VK_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT();
    CHECK(offsetof(VkDescriptorSetVariableDescriptorCountLayoutSupport, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT);
}

TEST_CASE("Test case 135") {
    VkSubpassDescriptionDepthStencilResolve tmp = MAKE_VK_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE();
    CHECK(offsetof(VkSubpassDescriptionDepthStencilResolve, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE);
}

TEST_CASE("Test case 136") {
    VkPhysicalDeviceDepthStencilResolveProperties tmp = MAKE_VK_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceDepthStencilResolveProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES);
}

TEST_CASE("Test case 137") {
    VkPhysicalDeviceScalarBlockLayoutFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceScalarBlockLayoutFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES);
}

TEST_CASE("Test case 138") {
    VkImageStencilUsageCreateInfo tmp = MAKE_VK_IMAGE_STENCIL_USAGE_CREATE_INFO();
    CHECK(offsetof(VkImageStencilUsageCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO);
}

TEST_CASE("Test case 139") {
    VkSamplerReductionModeCreateInfo tmp = MAKE_VK_SAMPLER_REDUCTION_MODE_CREATE_INFO();
    CHECK(offsetof(VkSamplerReductionModeCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO);
}

TEST_CASE("Test case 140") {
    VkPhysicalDeviceSamplerFilterMinmaxProperties tmp = MAKE_VK_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceSamplerFilterMinmaxProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES);
}

TEST_CASE("Test case 141") {
    VkPhysicalDeviceVulkanMemoryModelFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceVulkanMemoryModelFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES);
}

TEST_CASE("Test case 142") {
    VkPhysicalDeviceImagelessFramebufferFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceImagelessFramebufferFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES);
}

TEST_CASE("Test case 143") {
    VkFramebufferAttachmentImageInfo tmp = MAKE_VK_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO();
    CHECK(offsetof(VkFramebufferAttachmentImageInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO);
}

TEST_CASE("Test case 144") {
    VkFramebufferAttachmentsCreateInfo tmp = MAKE_VK_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO();
    CHECK(offsetof(VkFramebufferAttachmentsCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO);
}

TEST_CASE("Test case 145") {
    VkRenderPassAttachmentBeginInfo tmp = MAKE_VK_RENDER_PASS_ATTACHMENT_BEGIN_INFO();
    CHECK(offsetof(VkRenderPassAttachmentBeginInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO);
}

TEST_CASE("Test case 146") {
    VkPhysicalDeviceUniformBufferStandardLayoutFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES);
}

TEST_CASE("Test case 147") {
    VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES);
}

TEST_CASE("Test case 148") {
    VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES);
}

TEST_CASE("Test case 149") {
    VkAttachmentReferenceStencilLayout tmp = MAKE_VK_ATTACHMENT_REFERENCE_STENCIL_LAYOUT();
    CHECK(offsetof(VkAttachmentReferenceStencilLayout, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT);
}

TEST_CASE("Test case 150") {
    VkAttachmentDescriptionStencilLayout tmp = MAKE_VK_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT();
    CHECK(offsetof(VkAttachmentDescriptionStencilLayout, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT);
}

TEST_CASE("Test case 151") {
    VkPhysicalDeviceHostQueryResetFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceHostQueryResetFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES);
}

TEST_CASE("Test case 152") {
    VkPhysicalDeviceTimelineSemaphoreFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceTimelineSemaphoreFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES);
}

TEST_CASE("Test case 153") {
    VkPhysicalDeviceTimelineSemaphoreProperties tmp = MAKE_VK_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceTimelineSemaphoreProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES);
}

TEST_CASE("Test case 154") {
    VkSemaphoreTypeCreateInfo tmp = MAKE_VK_SEMAPHORE_TYPE_CREATE_INFO();
    CHECK(offsetof(VkSemaphoreTypeCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO);
}

TEST_CASE("Test case 155") {
    VkTimelineSemaphoreSubmitInfo tmp = MAKE_VK_TIMELINE_SEMAPHORE_SUBMIT_INFO();
    CHECK(offsetof(VkTimelineSemaphoreSubmitInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO);
}

TEST_CASE("Test case 156") {
    VkSemaphoreWaitInfo tmp = MAKE_VK_SEMAPHORE_WAIT_INFO();
    CHECK(offsetof(VkSemaphoreWaitInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO);
}

TEST_CASE("Test case 157") {
    VkSemaphoreSignalInfo tmp = MAKE_VK_SEMAPHORE_SIGNAL_INFO();
    CHECK(offsetof(VkSemaphoreSignalInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO);
}

TEST_CASE("Test case 158") {
    VkPhysicalDeviceBufferDeviceAddressFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceBufferDeviceAddressFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES);
}

TEST_CASE("Test case 159") {
    VkBufferDeviceAddressInfo tmp = MAKE_VK_BUFFER_DEVICE_ADDRESS_INFO();
    CHECK(offsetof(VkBufferDeviceAddressInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO);
}

TEST_CASE("Test case 160") {
    VkBufferOpaqueCaptureAddressCreateInfo tmp = MAKE_VK_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO();
    CHECK(offsetof(VkBufferOpaqueCaptureAddressCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO);
}

TEST_CASE("Test case 161") {
    VkMemoryOpaqueCaptureAddressAllocateInfo tmp = MAKE_VK_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO();
    CHECK(offsetof(VkMemoryOpaqueCaptureAddressAllocateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO);
}

TEST_CASE("Test case 162") {
    VkDeviceMemoryOpaqueCaptureAddressInfo tmp = MAKE_VK_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO();
    CHECK(offsetof(VkDeviceMemoryOpaqueCaptureAddressInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO);
}

TEST_CASE("Test case 163") {
    VkPhysicalDeviceVulkan13Features tmp = MAKE_VK_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceVulkan13Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES);
}

TEST_CASE("Test case 164") {
    VkPhysicalDeviceVulkan13Properties tmp = MAKE_VK_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceVulkan13Properties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES);
}

TEST_CASE("Test case 165") {
    VkPipelineCreationFeedbackCreateInfo tmp = MAKE_VK_PIPELINE_CREATION_FEEDBACK_CREATE_INFO();
    CHECK(offsetof(VkPipelineCreationFeedbackCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO);
}

TEST_CASE("Test case 166") {
    VkPhysicalDeviceShaderTerminateInvocationFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceShaderTerminateInvocationFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES);
}

TEST_CASE("Test case 167") {
    VkPhysicalDeviceToolProperties tmp = MAKE_VK_PHYSICAL_DEVICE_TOOL_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceToolProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES);
}

TEST_CASE("Test case 168") {
    VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES);
}

TEST_CASE("Test case 169") {
    VkPhysicalDevicePrivateDataFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES();
    CHECK(offsetof(VkPhysicalDevicePrivateDataFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES);
}

TEST_CASE("Test case 170") {
    VkDevicePrivateDataCreateInfo tmp = MAKE_VK_DEVICE_PRIVATE_DATA_CREATE_INFO();
    CHECK(offsetof(VkDevicePrivateDataCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO);
}

TEST_CASE("Test case 171") {
    VkPrivateDataSlotCreateInfo tmp = MAKE_VK_PRIVATE_DATA_SLOT_CREATE_INFO();
    CHECK(offsetof(VkPrivateDataSlotCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO);
}

TEST_CASE("Test case 172") {
    VkPhysicalDevicePipelineCreationCacheControlFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES();
    CHECK(offsetof(VkPhysicalDevicePipelineCreationCacheControlFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES);
}

TEST_CASE("Test case 173") {
    VkMemoryBarrier2 tmp = MAKE_VK_MEMORY_BARRIER_2();
    CHECK(offsetof(VkMemoryBarrier2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_BARRIER_2);
}

TEST_CASE("Test case 174") {
    VkBufferMemoryBarrier2 tmp = MAKE_VK_BUFFER_MEMORY_BARRIER_2();
    CHECK(offsetof(VkBufferMemoryBarrier2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2);
}

TEST_CASE("Test case 175") {
    VkImageMemoryBarrier2 tmp = MAKE_VK_IMAGE_MEMORY_BARRIER_2();
    CHECK(offsetof(VkImageMemoryBarrier2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2);
}

TEST_CASE("Test case 176") {
    VkDependencyInfo tmp = MAKE_VK_DEPENDENCY_INFO();
    CHECK(offsetof(VkDependencyInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEPENDENCY_INFO);
}

TEST_CASE("Test case 177") {
    VkSemaphoreSubmitInfo tmp = MAKE_VK_SEMAPHORE_SUBMIT_INFO();
    CHECK(offsetof(VkSemaphoreSubmitInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO);
}

TEST_CASE("Test case 178") {
    VkCommandBufferSubmitInfo tmp = MAKE_VK_COMMAND_BUFFER_SUBMIT_INFO();
    CHECK(offsetof(VkCommandBufferSubmitInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO);
}

TEST_CASE("Test case 179") {
    VkSubmitInfo2 tmp = MAKE_VK_SUBMIT_INFO_2();
    CHECK(offsetof(VkSubmitInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBMIT_INFO_2);
}

TEST_CASE("Test case 180") {
    VkPhysicalDeviceSynchronization2Features tmp = MAKE_VK_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceSynchronization2Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES);
}

TEST_CASE("Test case 181") {
    VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES);
}

TEST_CASE("Test case 182") {
    VkPhysicalDeviceImageRobustnessFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceImageRobustnessFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES);
}

TEST_CASE("Test case 183") {
    VkBufferCopy2 tmp = MAKE_VK_BUFFER_COPY_2();
    CHECK(offsetof(VkBufferCopy2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_COPY_2);
}

TEST_CASE("Test case 184") {
    VkCopyBufferInfo2 tmp = MAKE_VK_COPY_BUFFER_INFO_2();
    CHECK(offsetof(VkCopyBufferInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2);
}

TEST_CASE("Test case 185") {
    VkImageCopy2 tmp = MAKE_VK_IMAGE_COPY_2();
    CHECK(offsetof(VkImageCopy2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_COPY_2);
}

TEST_CASE("Test case 186") {
    VkCopyImageInfo2 tmp = MAKE_VK_COPY_IMAGE_INFO_2();
    CHECK(offsetof(VkCopyImageInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2);
}

TEST_CASE("Test case 187") {
    VkBufferImageCopy2 tmp = MAKE_VK_BUFFER_IMAGE_COPY_2();
    CHECK(offsetof(VkBufferImageCopy2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2);
}

TEST_CASE("Test case 188") {
    VkCopyBufferToImageInfo2 tmp = MAKE_VK_COPY_BUFFER_TO_IMAGE_INFO_2();
    CHECK(offsetof(VkCopyBufferToImageInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2);
}

TEST_CASE("Test case 189") {
    VkCopyImageToBufferInfo2 tmp = MAKE_VK_COPY_IMAGE_TO_BUFFER_INFO_2();
    CHECK(offsetof(VkCopyImageToBufferInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2);
}

TEST_CASE("Test case 190") {
    VkImageBlit2 tmp = MAKE_VK_IMAGE_BLIT_2();
    CHECK(offsetof(VkImageBlit2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_BLIT_2);
}

TEST_CASE("Test case 191") {
    VkBlitImageInfo2 tmp = MAKE_VK_BLIT_IMAGE_INFO_2();
    CHECK(offsetof(VkBlitImageInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2);
}

TEST_CASE("Test case 192") {
    VkImageResolve2 tmp = MAKE_VK_IMAGE_RESOLVE_2();
    CHECK(offsetof(VkImageResolve2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2);
}

TEST_CASE("Test case 193") {
    VkResolveImageInfo2 tmp = MAKE_VK_RESOLVE_IMAGE_INFO_2();
    CHECK(offsetof(VkResolveImageInfo2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2);
}

TEST_CASE("Test case 194") {
    VkPhysicalDeviceSubgroupSizeControlFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceSubgroupSizeControlFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES);
}

TEST_CASE("Test case 195") {
    VkPhysicalDeviceSubgroupSizeControlProperties tmp = MAKE_VK_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceSubgroupSizeControlProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES);
}

TEST_CASE("Test case 196") {
    VkPipelineShaderStageRequiredSubgroupSizeCreateInfo tmp = MAKE_VK_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO();
    CHECK(offsetof(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO);
}

TEST_CASE("Test case 197") {
    VkPhysicalDeviceInlineUniformBlockFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceInlineUniformBlockFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES);
}

TEST_CASE("Test case 198") {
    VkPhysicalDeviceInlineUniformBlockProperties tmp = MAKE_VK_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceInlineUniformBlockProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES);
}

TEST_CASE("Test case 199") {
    VkWriteDescriptorSetInlineUniformBlock tmp = MAKE_VK_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK();
    CHECK(offsetof(VkWriteDescriptorSetInlineUniformBlock, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK);
}

TEST_CASE("Test case 200") {
    VkDescriptorPoolInlineUniformBlockCreateInfo tmp = MAKE_VK_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO();
    CHECK(offsetof(VkDescriptorPoolInlineUniformBlockCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO);
}

TEST_CASE("Test case 201") {
    VkPhysicalDeviceTextureCompressionASTCHDRFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES);
}

TEST_CASE("Test case 202") {
    VkRenderingAttachmentInfo tmp = MAKE_VK_RENDERING_ATTACHMENT_INFO();
    CHECK(offsetof(VkRenderingAttachmentInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO);
}

TEST_CASE("Test case 203") {
    VkRenderingInfo tmp = MAKE_VK_RENDERING_INFO();
    CHECK(offsetof(VkRenderingInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDERING_INFO);
}

TEST_CASE("Test case 204") {
    VkPipelineRenderingCreateInfo tmp = MAKE_VK_PIPELINE_RENDERING_CREATE_INFO();
    CHECK(offsetof(VkPipelineRenderingCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO);
}

TEST_CASE("Test case 205") {
    VkPhysicalDeviceDynamicRenderingFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceDynamicRenderingFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES);
}

TEST_CASE("Test case 206") {
    VkCommandBufferInheritanceRenderingInfo tmp = MAKE_VK_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO();
    CHECK(offsetof(VkCommandBufferInheritanceRenderingInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO);
}

TEST_CASE("Test case 207") {
    VkPhysicalDeviceShaderIntegerDotProductFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceShaderIntegerDotProductFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES);
}

TEST_CASE("Test case 208") {
    VkPhysicalDeviceShaderIntegerDotProductProperties tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceShaderIntegerDotProductProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES);
}

TEST_CASE("Test case 209") {
    VkPhysicalDeviceTexelBufferAlignmentProperties tmp = MAKE_VK_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceTexelBufferAlignmentProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES);
}

TEST_CASE("Test case 210") {
    VkFormatProperties3 tmp = MAKE_VK_FORMAT_PROPERTIES_3();
    CHECK(offsetof(VkFormatProperties3, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3);
}

TEST_CASE("Test case 211") {
    VkPhysicalDeviceMaintenance4Features tmp = MAKE_VK_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceMaintenance4Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES);
}

TEST_CASE("Test case 212") {
    VkPhysicalDeviceMaintenance4Properties tmp = MAKE_VK_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceMaintenance4Properties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES);
}

TEST_CASE("Test case 213") {
    VkDeviceBufferMemoryRequirements tmp = MAKE_VK_DEVICE_BUFFER_MEMORY_REQUIREMENTS();
    CHECK(offsetof(VkDeviceBufferMemoryRequirements, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS);
}

TEST_CASE("Test case 214") {
    VkDeviceImageMemoryRequirements tmp = MAKE_VK_DEVICE_IMAGE_MEMORY_REQUIREMENTS();
    CHECK(offsetof(VkDeviceImageMemoryRequirements, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS);
}

TEST_CASE("Test case 215") {
    VkPhysicalDeviceVulkan14Features tmp = MAKE_VK_PHYSICAL_DEVICE_VULKAN_1_4_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceVulkan14Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_FEATURES);
}

TEST_CASE("Test case 216") {
    VkPhysicalDeviceVulkan14Properties tmp = MAKE_VK_PHYSICAL_DEVICE_VULKAN_1_4_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceVulkan14Properties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_PROPERTIES);
}

TEST_CASE("Test case 217") {
    VkDeviceQueueGlobalPriorityCreateInfo tmp = MAKE_VK_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO();
    CHECK(offsetof(VkDeviceQueueGlobalPriorityCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO);
}

TEST_CASE("Test case 218") {
    VkPhysicalDeviceGlobalPriorityQueryFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceGlobalPriorityQueryFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES);
}

TEST_CASE("Test case 219") {
    VkQueueFamilyGlobalPriorityProperties tmp = MAKE_VK_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES();
    CHECK(offsetof(VkQueueFamilyGlobalPriorityProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES);
}

TEST_CASE("Test case 220") {
    VkPhysicalDeviceShaderSubgroupRotateFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceShaderSubgroupRotateFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES);
}

TEST_CASE("Test case 221") {
    VkPhysicalDeviceShaderFloatControls2Features tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceShaderFloatControls2Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES);
}

TEST_CASE("Test case 222") {
    VkPhysicalDeviceShaderExpectAssumeFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceShaderExpectAssumeFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES);
}

TEST_CASE("Test case 223") {
    VkPhysicalDeviceLineRasterizationFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceLineRasterizationFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES);
}

TEST_CASE("Test case 224") {
    VkPhysicalDeviceLineRasterizationProperties tmp = MAKE_VK_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceLineRasterizationProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES);
}

TEST_CASE("Test case 225") {
    VkPipelineRasterizationLineStateCreateInfo tmp = MAKE_VK_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineRasterizationLineStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO);
}

TEST_CASE("Test case 226") {
    VkPhysicalDeviceVertexAttributeDivisorProperties tmp = MAKE_VK_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceVertexAttributeDivisorProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES);
}

TEST_CASE("Test case 227") {
    VkPipelineVertexInputDivisorStateCreateInfo tmp = MAKE_VK_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO();
    CHECK(offsetof(VkPipelineVertexInputDivisorStateCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO);
}

TEST_CASE("Test case 228") {
    VkPhysicalDeviceVertexAttributeDivisorFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceVertexAttributeDivisorFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES);
}

TEST_CASE("Test case 229") {
    VkPhysicalDeviceIndexTypeUint8Features tmp = MAKE_VK_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceIndexTypeUint8Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES);
}

TEST_CASE("Test case 230") {
    VkMemoryMapInfo tmp = MAKE_VK_MEMORY_MAP_INFO();
    CHECK(offsetof(VkMemoryMapInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_MAP_INFO);
}

TEST_CASE("Test case 231") {
    VkMemoryUnmapInfo tmp = MAKE_VK_MEMORY_UNMAP_INFO();
    CHECK(offsetof(VkMemoryUnmapInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_UNMAP_INFO);
}

TEST_CASE("Test case 232") {
    VkPhysicalDeviceMaintenance5Features tmp = MAKE_VK_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceMaintenance5Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES);
}

TEST_CASE("Test case 233") {
    VkPhysicalDeviceMaintenance5Properties tmp = MAKE_VK_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceMaintenance5Properties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES);
}

TEST_CASE("Test case 234") {
    VkRenderingAreaInfo tmp = MAKE_VK_RENDERING_AREA_INFO();
    CHECK(offsetof(VkRenderingAreaInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDERING_AREA_INFO);
}

TEST_CASE("Test case 235") {
    VkImageSubresource2 tmp = MAKE_VK_IMAGE_SUBRESOURCE_2();
    CHECK(offsetof(VkImageSubresource2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2);
}

TEST_CASE("Test case 236") {
    VkDeviceImageSubresourceInfo tmp = MAKE_VK_DEVICE_IMAGE_SUBRESOURCE_INFO();
    CHECK(offsetof(VkDeviceImageSubresourceInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_IMAGE_SUBRESOURCE_INFO);
}

TEST_CASE("Test case 237") {
    VkSubresourceLayout2 tmp = MAKE_VK_SUBRESOURCE_LAYOUT_2();
    CHECK(offsetof(VkSubresourceLayout2, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2);
}

TEST_CASE("Test case 238") {
    VkPipelineCreateFlags2CreateInfo tmp = MAKE_VK_PIPELINE_CREATE_FLAGS_2_CREATE_INFO();
    CHECK(offsetof(VkPipelineCreateFlags2CreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO);
}

TEST_CASE("Test case 239") {
    VkBufferUsageFlags2CreateInfo tmp = MAKE_VK_BUFFER_USAGE_FLAGS_2_CREATE_INFO();
    CHECK(offsetof(VkBufferUsageFlags2CreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO);
}

TEST_CASE("Test case 240") {
    VkPhysicalDevicePushDescriptorProperties tmp = MAKE_VK_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES();
    CHECK(offsetof(VkPhysicalDevicePushDescriptorProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES);
}

TEST_CASE("Test case 241") {
    VkPhysicalDeviceDynamicRenderingLocalReadFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceDynamicRenderingLocalReadFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES);
}

TEST_CASE("Test case 242") {
    VkRenderingAttachmentLocationInfo tmp = MAKE_VK_RENDERING_ATTACHMENT_LOCATION_INFO();
    CHECK(offsetof(VkRenderingAttachmentLocationInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_LOCATION_INFO);
}

TEST_CASE("Test case 243") {
    VkRenderingInputAttachmentIndexInfo tmp = MAKE_VK_RENDERING_INPUT_ATTACHMENT_INDEX_INFO();
    CHECK(offsetof(VkRenderingInputAttachmentIndexInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDERING_INPUT_ATTACHMENT_INDEX_INFO);
}

TEST_CASE("Test case 244") {
    VkPhysicalDeviceMaintenance6Features tmp = MAKE_VK_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceMaintenance6Features, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES);
}

TEST_CASE("Test case 245") {
    VkPhysicalDeviceMaintenance6Properties tmp = MAKE_VK_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceMaintenance6Properties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES);
}

TEST_CASE("Test case 246") {
    VkBindMemoryStatus tmp = MAKE_VK_BIND_MEMORY_STATUS();
    CHECK(offsetof(VkBindMemoryStatus, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_MEMORY_STATUS);
}

TEST_CASE("Test case 247") {
    VkBindDescriptorSetsInfo tmp = MAKE_VK_BIND_DESCRIPTOR_SETS_INFO();
    CHECK(offsetof(VkBindDescriptorSetsInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_DESCRIPTOR_SETS_INFO);
}

TEST_CASE("Test case 248") {
    VkPushConstantsInfo tmp = MAKE_VK_PUSH_CONSTANTS_INFO();
    CHECK(offsetof(VkPushConstantsInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PUSH_CONSTANTS_INFO);
}

TEST_CASE("Test case 249") {
    VkPushDescriptorSetInfo tmp = MAKE_VK_PUSH_DESCRIPTOR_SET_INFO();
    CHECK(offsetof(VkPushDescriptorSetInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_INFO);
}

TEST_CASE("Test case 250") {
    VkPushDescriptorSetWithTemplateInfo tmp = MAKE_VK_PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO();
    CHECK(offsetof(VkPushDescriptorSetWithTemplateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO);
}

TEST_CASE("Test case 251") {
    VkPhysicalDevicePipelineProtectedAccessFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES();
    CHECK(offsetof(VkPhysicalDevicePipelineProtectedAccessFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES);
}

TEST_CASE("Test case 252") {
    VkPhysicalDevicePipelineRobustnessFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES();
    CHECK(offsetof(VkPhysicalDevicePipelineRobustnessFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES);
}

TEST_CASE("Test case 253") {
    VkPhysicalDevicePipelineRobustnessProperties tmp = MAKE_VK_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES();
    CHECK(offsetof(VkPhysicalDevicePipelineRobustnessProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES);
}

TEST_CASE("Test case 254") {
    VkPipelineRobustnessCreateInfo tmp = MAKE_VK_PIPELINE_ROBUSTNESS_CREATE_INFO();
    CHECK(offsetof(VkPipelineRobustnessCreateInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO);
}

TEST_CASE("Test case 255") {
    VkPhysicalDeviceHostImageCopyFeatures tmp = MAKE_VK_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES();
    CHECK(offsetof(VkPhysicalDeviceHostImageCopyFeatures, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES);
}

TEST_CASE("Test case 256") {
    VkPhysicalDeviceHostImageCopyProperties tmp = MAKE_VK_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES();
    CHECK(offsetof(VkPhysicalDeviceHostImageCopyProperties, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES);
}

TEST_CASE("Test case 257") {
    VkMemoryToImageCopy tmp = MAKE_VK_MEMORY_TO_IMAGE_COPY();
    CHECK(offsetof(VkMemoryToImageCopy, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_TO_IMAGE_COPY);
}

TEST_CASE("Test case 258") {
    VkImageToMemoryCopy tmp = MAKE_VK_IMAGE_TO_MEMORY_COPY();
    CHECK(offsetof(VkImageToMemoryCopy, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_TO_MEMORY_COPY);
}

TEST_CASE("Test case 259") {
    VkCopyMemoryToImageInfo tmp = MAKE_VK_COPY_MEMORY_TO_IMAGE_INFO();
    CHECK(offsetof(VkCopyMemoryToImageInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INFO);
}

TEST_CASE("Test case 260") {
    VkCopyImageToMemoryInfo tmp = MAKE_VK_COPY_IMAGE_TO_MEMORY_INFO();
    CHECK(offsetof(VkCopyImageToMemoryInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO);
}

TEST_CASE("Test case 261") {
    VkCopyImageToImageInfo tmp = MAKE_VK_COPY_IMAGE_TO_IMAGE_INFO();
    CHECK(offsetof(VkCopyImageToImageInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_IMAGE_TO_IMAGE_INFO);
}

TEST_CASE("Test case 262") {
    VkHostImageLayoutTransitionInfo tmp = MAKE_VK_HOST_IMAGE_LAYOUT_TRANSITION_INFO();
    CHECK(offsetof(VkHostImageLayoutTransitionInfo, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_HOST_IMAGE_LAYOUT_TRANSITION_INFO);
}

TEST_CASE("Test case 263") {
    VkSubresourceHostMemcpySize tmp = MAKE_VK_SUBRESOURCE_HOST_MEMCPY_SIZE();
    CHECK(offsetof(VkSubresourceHostMemcpySize, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE);
}

TEST_CASE("Test case 264") {
    VkHostImageCopyDevicePerformanceQuery tmp = MAKE_VK_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY();
    CHECK(offsetof(VkHostImageCopyDevicePerformanceQuery, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY);
}

TEST_CASE("Test case 265") {
    VkSwapchainCreateInfoKHR tmp = MAKE_VK_SWAPCHAIN_CREATE_INFO_KHR();
    CHECK(offsetof(VkSwapchainCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR);
}

TEST_CASE("Test case 266") {
    VkPresentInfoKHR tmp = MAKE_VK_PRESENT_INFO_KHR();
    CHECK(offsetof(VkPresentInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PRESENT_INFO_KHR);
}

TEST_CASE("Test case 267") {
    VkImageSwapchainCreateInfoKHR tmp = MAKE_VK_IMAGE_SWAPCHAIN_CREATE_INFO_KHR();
    CHECK(offsetof(VkImageSwapchainCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR);
}

TEST_CASE("Test case 268") {
    VkBindImageMemorySwapchainInfoKHR tmp = MAKE_VK_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR();
    CHECK(offsetof(VkBindImageMemorySwapchainInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR);
}

TEST_CASE("Test case 269") {
    VkAcquireNextImageInfoKHR tmp = MAKE_VK_ACQUIRE_NEXT_IMAGE_INFO_KHR();
    CHECK(offsetof(VkAcquireNextImageInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR);
}

TEST_CASE("Test case 270") {
    VkDeviceGroupPresentCapabilitiesKHR tmp = MAKE_VK_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR();
    CHECK(offsetof(VkDeviceGroupPresentCapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR);
}

TEST_CASE("Test case 271") {
    VkDeviceGroupPresentInfoKHR tmp = MAKE_VK_DEVICE_GROUP_PRESENT_INFO_KHR();
    CHECK(offsetof(VkDeviceGroupPresentInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR);
}

TEST_CASE("Test case 272") {
    VkDeviceGroupSwapchainCreateInfoKHR tmp = MAKE_VK_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR();
    CHECK(offsetof(VkDeviceGroupSwapchainCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR);
}

TEST_CASE("Test case 273") {
    VkDisplayModeCreateInfoKHR tmp = MAKE_VK_DISPLAY_MODE_CREATE_INFO_KHR();
    CHECK(offsetof(VkDisplayModeCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR);
}

TEST_CASE("Test case 274") {
    VkDisplaySurfaceCreateInfoKHR tmp = MAKE_VK_DISPLAY_SURFACE_CREATE_INFO_KHR();
    CHECK(offsetof(VkDisplaySurfaceCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR);
}

TEST_CASE("Test case 275") {
    VkDisplayPresentInfoKHR tmp = MAKE_VK_DISPLAY_PRESENT_INFO_KHR();
    CHECK(offsetof(VkDisplayPresentInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR);
}

TEST_CASE("Test case 276") {
    VkQueueFamilyQueryResultStatusPropertiesKHR tmp = MAKE_VK_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR();
    CHECK(offsetof(VkQueueFamilyQueryResultStatusPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR);
}

TEST_CASE("Test case 277") {
    VkQueueFamilyVideoPropertiesKHR tmp = MAKE_VK_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR();
    CHECK(offsetof(VkQueueFamilyVideoPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR);
}

TEST_CASE("Test case 278") {
    VkVideoProfileInfoKHR tmp = MAKE_VK_VIDEO_PROFILE_INFO_KHR();
    CHECK(offsetof(VkVideoProfileInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR);
}

TEST_CASE("Test case 279") {
    VkVideoProfileListInfoKHR tmp = MAKE_VK_VIDEO_PROFILE_LIST_INFO_KHR();
    CHECK(offsetof(VkVideoProfileListInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR);
}

TEST_CASE("Test case 280") {
    VkVideoCapabilitiesKHR tmp = MAKE_VK_VIDEO_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoCapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR);
}

TEST_CASE("Test case 281") {
    VkPhysicalDeviceVideoFormatInfoKHR tmp = MAKE_VK_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR();
    CHECK(offsetof(VkPhysicalDeviceVideoFormatInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR);
}

TEST_CASE("Test case 282") {
    VkVideoFormatPropertiesKHR tmp = MAKE_VK_VIDEO_FORMAT_PROPERTIES_KHR();
    CHECK(offsetof(VkVideoFormatPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR);
}

TEST_CASE("Test case 283") {
    VkVideoPictureResourceInfoKHR tmp = MAKE_VK_VIDEO_PICTURE_RESOURCE_INFO_KHR();
    CHECK(offsetof(VkVideoPictureResourceInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_PICTURE_RESOURCE_INFO_KHR);
}

TEST_CASE("Test case 284") {
    VkVideoReferenceSlotInfoKHR tmp = MAKE_VK_VIDEO_REFERENCE_SLOT_INFO_KHR();
    CHECK(offsetof(VkVideoReferenceSlotInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_REFERENCE_SLOT_INFO_KHR);
}

TEST_CASE("Test case 285") {
    VkVideoSessionMemoryRequirementsKHR tmp = MAKE_VK_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR();
    CHECK(offsetof(VkVideoSessionMemoryRequirementsKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR);
}

TEST_CASE("Test case 286") {
    VkBindVideoSessionMemoryInfoKHR tmp = MAKE_VK_BIND_VIDEO_SESSION_MEMORY_INFO_KHR();
    CHECK(offsetof(VkBindVideoSessionMemoryInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_VIDEO_SESSION_MEMORY_INFO_KHR);
}

TEST_CASE("Test case 287") {
    VkVideoSessionCreateInfoKHR tmp = MAKE_VK_VIDEO_SESSION_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoSessionCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR);
}

TEST_CASE("Test case 288") {
    VkVideoSessionParametersCreateInfoKHR tmp = MAKE_VK_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoSessionParametersCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR);
}

TEST_CASE("Test case 289") {
    VkVideoSessionParametersUpdateInfoKHR tmp = MAKE_VK_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR();
    CHECK(offsetof(VkVideoSessionParametersUpdateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR);
}

TEST_CASE("Test case 290") {
    VkVideoBeginCodingInfoKHR tmp = MAKE_VK_VIDEO_BEGIN_CODING_INFO_KHR();
    CHECK(offsetof(VkVideoBeginCodingInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_BEGIN_CODING_INFO_KHR);
}

TEST_CASE("Test case 291") {
    VkVideoEndCodingInfoKHR tmp = MAKE_VK_VIDEO_END_CODING_INFO_KHR();
    CHECK(offsetof(VkVideoEndCodingInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_END_CODING_INFO_KHR);
}

TEST_CASE("Test case 292") {
    VkVideoCodingControlInfoKHR tmp = MAKE_VK_VIDEO_CODING_CONTROL_INFO_KHR();
    CHECK(offsetof(VkVideoCodingControlInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_CODING_CONTROL_INFO_KHR);
}

TEST_CASE("Test case 293") {
    VkVideoDecodeCapabilitiesKHR tmp = MAKE_VK_VIDEO_DECODE_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoDecodeCapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR);
}

TEST_CASE("Test case 294") {
    VkVideoDecodeUsageInfoKHR tmp = MAKE_VK_VIDEO_DECODE_USAGE_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeUsageInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR);
}

TEST_CASE("Test case 295") {
    VkVideoDecodeInfoKHR tmp = MAKE_VK_VIDEO_DECODE_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_INFO_KHR);
}

TEST_CASE("Test case 296") {
    VkVideoEncodeH264CapabilitiesKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoEncodeH264CapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_KHR);
}

TEST_CASE("Test case 297") {
    VkVideoEncodeH264QualityLevelPropertiesKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR();
    CHECK(offsetof(VkVideoEncodeH264QualityLevelPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR);
}

TEST_CASE("Test case 298") {
    VkVideoEncodeH264SessionCreateInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264SessionCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR);
}

TEST_CASE("Test case 299") {
    VkVideoEncodeH264SessionParametersAddInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264SessionParametersAddInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR);
}

TEST_CASE("Test case 300") {
    VkVideoEncodeH264SessionParametersCreateInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264SessionParametersCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR);
}

TEST_CASE("Test case 301") {
    VkVideoEncodeH264SessionParametersGetInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264SessionParametersGetInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR);
}

TEST_CASE("Test case 302") {
    VkVideoEncodeH264SessionParametersFeedbackInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264SessionParametersFeedbackInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR);
}

TEST_CASE("Test case 303") {
    VkVideoEncodeH264NaluSliceInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264NaluSliceInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR);
}

TEST_CASE("Test case 304") {
    VkVideoEncodeH264PictureInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_PICTURE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264PictureInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PICTURE_INFO_KHR);
}

TEST_CASE("Test case 305") {
    VkVideoEncodeH264DpbSlotInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264DpbSlotInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR);
}

TEST_CASE("Test case 306") {
    VkVideoEncodeH264ProfileInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_PROFILE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264ProfileInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_KHR);
}

TEST_CASE("Test case 307") {
    VkVideoEncodeH264RateControlInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264RateControlInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR);
}

TEST_CASE("Test case 308") {
    VkVideoEncodeH264RateControlLayerInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264RateControlLayerInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR);
}

TEST_CASE("Test case 309") {
    VkVideoEncodeH264GopRemainingFrameInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH264GopRemainingFrameInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR);
}

TEST_CASE("Test case 310") {
    VkVideoEncodeH265CapabilitiesKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoEncodeH265CapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_KHR);
}

TEST_CASE("Test case 311") {
    VkVideoEncodeH265SessionCreateInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265SessionCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR);
}

TEST_CASE("Test case 312") {
    VkVideoEncodeH265QualityLevelPropertiesKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR();
    CHECK(offsetof(VkVideoEncodeH265QualityLevelPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR);
}

TEST_CASE("Test case 313") {
    VkVideoEncodeH265SessionParametersAddInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265SessionParametersAddInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR);
}

TEST_CASE("Test case 314") {
    VkVideoEncodeH265SessionParametersCreateInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265SessionParametersCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR);
}

TEST_CASE("Test case 315") {
    VkVideoEncodeH265SessionParametersGetInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265SessionParametersGetInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR);
}

TEST_CASE("Test case 316") {
    VkVideoEncodeH265SessionParametersFeedbackInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265SessionParametersFeedbackInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR);
}

TEST_CASE("Test case 317") {
    VkVideoEncodeH265NaluSliceSegmentInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265NaluSliceSegmentInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR);
}

TEST_CASE("Test case 318") {
    VkVideoEncodeH265PictureInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_PICTURE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265PictureInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PICTURE_INFO_KHR);
}

TEST_CASE("Test case 319") {
    VkVideoEncodeH265DpbSlotInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265DpbSlotInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR);
}

TEST_CASE("Test case 320") {
    VkVideoEncodeH265ProfileInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_PROFILE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265ProfileInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_KHR);
}

TEST_CASE("Test case 321") {
    VkVideoEncodeH265RateControlInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265RateControlInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR);
}

TEST_CASE("Test case 322") {
    VkVideoEncodeH265RateControlLayerInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265RateControlLayerInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR);
}

TEST_CASE("Test case 323") {
    VkVideoEncodeH265GopRemainingFrameInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeH265GopRemainingFrameInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR);
}

TEST_CASE("Test case 324") {
    VkVideoDecodeH264ProfileInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H264_PROFILE_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH264ProfileInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR);
}

TEST_CASE("Test case 325") {
    VkVideoDecodeH264CapabilitiesKHR tmp = MAKE_VK_VIDEO_DECODE_H264_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoDecodeH264CapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR);
}

TEST_CASE("Test case 326") {
    VkVideoDecodeH264SessionParametersAddInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH264SessionParametersAddInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR);
}

TEST_CASE("Test case 327") {
    VkVideoDecodeH264SessionParametersCreateInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH264SessionParametersCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR);
}

TEST_CASE("Test case 328") {
    VkVideoDecodeH264PictureInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H264_PICTURE_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH264PictureInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR);
}

TEST_CASE("Test case 329") {
    VkVideoDecodeH264DpbSlotInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH264DpbSlotInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR);
}

TEST_CASE("Test case 330") {
    VkImportMemoryFdInfoKHR tmp = MAKE_VK_IMPORT_MEMORY_FD_INFO_KHR();
    CHECK(offsetof(VkImportMemoryFdInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR);
}

TEST_CASE("Test case 331") {
    VkMemoryFdPropertiesKHR tmp = MAKE_VK_MEMORY_FD_PROPERTIES_KHR();
    CHECK(offsetof(VkMemoryFdPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR);
}

TEST_CASE("Test case 332") {
    VkMemoryGetFdInfoKHR tmp = MAKE_VK_MEMORY_GET_FD_INFO_KHR();
    CHECK(offsetof(VkMemoryGetFdInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR);
}

TEST_CASE("Test case 333") {
    VkImportSemaphoreFdInfoKHR tmp = MAKE_VK_IMPORT_SEMAPHORE_FD_INFO_KHR();
    CHECK(offsetof(VkImportSemaphoreFdInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR);
}

TEST_CASE("Test case 334") {
    VkSemaphoreGetFdInfoKHR tmp = MAKE_VK_SEMAPHORE_GET_FD_INFO_KHR();
    CHECK(offsetof(VkSemaphoreGetFdInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR);
}

TEST_CASE("Test case 335") {
    VkPresentRegionsKHR tmp = MAKE_VK_PRESENT_REGIONS_KHR();
    CHECK(offsetof(VkPresentRegionsKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR);
}

TEST_CASE("Test case 336") {
    VkSharedPresentSurfaceCapabilitiesKHR tmp = MAKE_VK_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR();
    CHECK(offsetof(VkSharedPresentSurfaceCapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR);
}

TEST_CASE("Test case 337") {
    VkImportFenceFdInfoKHR tmp = MAKE_VK_IMPORT_FENCE_FD_INFO_KHR();
    CHECK(offsetof(VkImportFenceFdInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR);
}

TEST_CASE("Test case 338") {
    VkFenceGetFdInfoKHR tmp = MAKE_VK_FENCE_GET_FD_INFO_KHR();
    CHECK(offsetof(VkFenceGetFdInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR);
}

TEST_CASE("Test case 339") {
    VkPhysicalDevicePerformanceQueryFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDevicePerformanceQueryFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR);
}

TEST_CASE("Test case 340") {
    VkPhysicalDevicePerformanceQueryPropertiesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR();
    CHECK(offsetof(VkPhysicalDevicePerformanceQueryPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR);
}

TEST_CASE("Test case 341") {
    VkPerformanceCounterKHR tmp = MAKE_VK_PERFORMANCE_COUNTER_KHR();
    CHECK(offsetof(VkPerformanceCounterKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR);
}

TEST_CASE("Test case 342") {
    VkPerformanceCounterDescriptionKHR tmp = MAKE_VK_PERFORMANCE_COUNTER_DESCRIPTION_KHR();
    CHECK(offsetof(VkPerformanceCounterDescriptionKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR);
}

TEST_CASE("Test case 343") {
    VkQueryPoolPerformanceCreateInfoKHR tmp = MAKE_VK_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR();
    CHECK(offsetof(VkQueryPoolPerformanceCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR);
}

TEST_CASE("Test case 344") {
    VkAcquireProfilingLockInfoKHR tmp = MAKE_VK_ACQUIRE_PROFILING_LOCK_INFO_KHR();
    CHECK(offsetof(VkAcquireProfilingLockInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR);
}

TEST_CASE("Test case 345") {
    VkPerformanceQuerySubmitInfoKHR tmp = MAKE_VK_PERFORMANCE_QUERY_SUBMIT_INFO_KHR();
    CHECK(offsetof(VkPerformanceQuerySubmitInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR);
}

TEST_CASE("Test case 346") {
    VkPhysicalDeviceSurfaceInfo2KHR tmp = MAKE_VK_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR();
    CHECK(offsetof(VkPhysicalDeviceSurfaceInfo2KHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR);
}

TEST_CASE("Test case 347") {
    VkSurfaceCapabilities2KHR tmp = MAKE_VK_SURFACE_CAPABILITIES_2_KHR();
    CHECK(offsetof(VkSurfaceCapabilities2KHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR);
}

TEST_CASE("Test case 348") {
    VkSurfaceFormat2KHR tmp = MAKE_VK_SURFACE_FORMAT_2_KHR();
    CHECK(offsetof(VkSurfaceFormat2KHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR);
}

TEST_CASE("Test case 349") {
    VkDisplayProperties2KHR tmp = MAKE_VK_DISPLAY_PROPERTIES_2_KHR();
    CHECK(offsetof(VkDisplayProperties2KHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR);
}

TEST_CASE("Test case 350") {
    VkDisplayPlaneProperties2KHR tmp = MAKE_VK_DISPLAY_PLANE_PROPERTIES_2_KHR();
    CHECK(offsetof(VkDisplayPlaneProperties2KHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR);
}

TEST_CASE("Test case 351") {
    VkDisplayModeProperties2KHR tmp = MAKE_VK_DISPLAY_MODE_PROPERTIES_2_KHR();
    CHECK(offsetof(VkDisplayModeProperties2KHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR);
}

TEST_CASE("Test case 352") {
    VkDisplayPlaneInfo2KHR tmp = MAKE_VK_DISPLAY_PLANE_INFO_2_KHR();
    CHECK(offsetof(VkDisplayPlaneInfo2KHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR);
}

TEST_CASE("Test case 353") {
    VkDisplayPlaneCapabilities2KHR tmp = MAKE_VK_DISPLAY_PLANE_CAPABILITIES_2_KHR();
    CHECK(offsetof(VkDisplayPlaneCapabilities2KHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR);
}

TEST_CASE("Test case 354") {
    VkPhysicalDeviceShaderClockFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceShaderClockFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR);
}

TEST_CASE("Test case 355") {
    VkVideoDecodeH265ProfileInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H265_PROFILE_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH265ProfileInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR);
}

TEST_CASE("Test case 356") {
    VkVideoDecodeH265CapabilitiesKHR tmp = MAKE_VK_VIDEO_DECODE_H265_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoDecodeH265CapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR);
}

TEST_CASE("Test case 357") {
    VkVideoDecodeH265SessionParametersAddInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH265SessionParametersAddInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR);
}

TEST_CASE("Test case 358") {
    VkVideoDecodeH265SessionParametersCreateInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH265SessionParametersCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR);
}

TEST_CASE("Test case 359") {
    VkVideoDecodeH265PictureInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H265_PICTURE_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH265PictureInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR);
}

TEST_CASE("Test case 360") {
    VkVideoDecodeH265DpbSlotInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH265DpbSlotInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR);
}

TEST_CASE("Test case 361") {
    VkFragmentShadingRateAttachmentInfoKHR tmp = MAKE_VK_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR();
    CHECK(offsetof(VkFragmentShadingRateAttachmentInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR);
}

TEST_CASE("Test case 362") {
    VkPipelineFragmentShadingRateStateCreateInfoKHR tmp = MAKE_VK_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR();
    CHECK(offsetof(VkPipelineFragmentShadingRateStateCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR);
}

TEST_CASE("Test case 363") {
    VkPhysicalDeviceFragmentShadingRateFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR);
}

TEST_CASE("Test case 364") {
    VkPhysicalDeviceFragmentShadingRatePropertiesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR();
    CHECK(offsetof(VkPhysicalDeviceFragmentShadingRatePropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR);
}

TEST_CASE("Test case 365") {
    VkPhysicalDeviceFragmentShadingRateKHR tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR();
    CHECK(offsetof(VkPhysicalDeviceFragmentShadingRateKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR);
}

TEST_CASE("Test case 366") {
    VkRenderingFragmentShadingRateAttachmentInfoKHR tmp = MAKE_VK_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR();
    CHECK(offsetof(VkRenderingFragmentShadingRateAttachmentInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR);
}

TEST_CASE("Test case 367") {
    VkPhysicalDeviceShaderQuadControlFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceShaderQuadControlFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR);
}

TEST_CASE("Test case 368") {
    VkSurfaceProtectedCapabilitiesKHR tmp = MAKE_VK_SURFACE_PROTECTED_CAPABILITIES_KHR();
    CHECK(offsetof(VkSurfaceProtectedCapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR);
}

TEST_CASE("Test case 369") {
    VkPhysicalDevicePresentWaitFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDevicePresentWaitFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR);
}

TEST_CASE("Test case 370") {
    VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR);
}

TEST_CASE("Test case 371") {
    VkPipelineInfoKHR tmp = MAKE_VK_PIPELINE_INFO_KHR();
    CHECK(offsetof(VkPipelineInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR);
}

TEST_CASE("Test case 372") {
    VkPipelineExecutablePropertiesKHR tmp = MAKE_VK_PIPELINE_EXECUTABLE_PROPERTIES_KHR();
    CHECK(offsetof(VkPipelineExecutablePropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR);
}

TEST_CASE("Test case 373") {
    VkPipelineExecutableInfoKHR tmp = MAKE_VK_PIPELINE_EXECUTABLE_INFO_KHR();
    CHECK(offsetof(VkPipelineExecutableInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR);
}

TEST_CASE("Test case 374") {
    VkPipelineExecutableStatisticKHR tmp = MAKE_VK_PIPELINE_EXECUTABLE_STATISTIC_KHR();
    CHECK(offsetof(VkPipelineExecutableStatisticKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR);
}

TEST_CASE("Test case 375") {
    VkPipelineExecutableInternalRepresentationKHR tmp = MAKE_VK_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR();
    CHECK(offsetof(VkPipelineExecutableInternalRepresentationKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR);
}

TEST_CASE("Test case 376") {
    VkPipelineLibraryCreateInfoKHR tmp = MAKE_VK_PIPELINE_LIBRARY_CREATE_INFO_KHR();
    CHECK(offsetof(VkPipelineLibraryCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR);
}

TEST_CASE("Test case 377") {
    VkPresentIdKHR tmp = MAKE_VK_PRESENT_ID_KHR();
    CHECK(offsetof(VkPresentIdKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PRESENT_ID_KHR);
}

TEST_CASE("Test case 378") {
    VkPhysicalDevicePresentIdFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDevicePresentIdFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR);
}

TEST_CASE("Test case 379") {
    VkVideoEncodeInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_INFO_KHR);
}

TEST_CASE("Test case 380") {
    VkVideoEncodeCapabilitiesKHR tmp = MAKE_VK_VIDEO_ENCODE_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoEncodeCapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR);
}

TEST_CASE("Test case 381") {
    VkQueryPoolVideoEncodeFeedbackCreateInfoKHR tmp = MAKE_VK_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR();
    CHECK(offsetof(VkQueryPoolVideoEncodeFeedbackCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR);
}

TEST_CASE("Test case 382") {
    VkVideoEncodeUsageInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_USAGE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeUsageInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR);
}

TEST_CASE("Test case 383") {
    VkVideoEncodeRateControlLayerInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeRateControlLayerInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR);
}

TEST_CASE("Test case 384") {
    VkVideoEncodeRateControlInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeRateControlInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR);
}

TEST_CASE("Test case 385") {
    VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR tmp = MAKE_VK_PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR();
    CHECK(offsetof(VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR);
}

TEST_CASE("Test case 386") {
    VkVideoEncodeQualityLevelPropertiesKHR tmp = MAKE_VK_VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR();
    CHECK(offsetof(VkVideoEncodeQualityLevelPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR);
}

TEST_CASE("Test case 387") {
    VkVideoEncodeQualityLevelInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeQualityLevelInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR);
}

TEST_CASE("Test case 388") {
    VkVideoEncodeSessionParametersGetInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeSessionParametersGetInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR);
}

TEST_CASE("Test case 389") {
    VkVideoEncodeSessionParametersFeedbackInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeSessionParametersFeedbackInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR);
}

TEST_CASE("Test case 390") {
    VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR);
}

TEST_CASE("Test case 391") {
    VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR();
    CHECK(offsetof(VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR);
}

TEST_CASE("Test case 392") {
    VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR);
}

TEST_CASE("Test case 393") {
    VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR);
}

TEST_CASE("Test case 394") {
    VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR);
}

TEST_CASE("Test case 395") {
    VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR);
}

TEST_CASE("Test case 396") {
    VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR);
}

TEST_CASE("Test case 397") {
    VkPhysicalDevicePipelineBinaryFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDevicePipelineBinaryFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR);
}

TEST_CASE("Test case 398") {
    VkPhysicalDevicePipelineBinaryPropertiesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_PIPELINE_BINARY_PROPERTIES_KHR();
    CHECK(offsetof(VkPhysicalDevicePipelineBinaryPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_PROPERTIES_KHR);
}

TEST_CASE("Test case 399") {
    VkDevicePipelineBinaryInternalCacheControlKHR tmp = MAKE_VK_DEVICE_PIPELINE_BINARY_INTERNAL_CACHE_CONTROL_KHR();
    CHECK(offsetof(VkDevicePipelineBinaryInternalCacheControlKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_PIPELINE_BINARY_INTERNAL_CACHE_CONTROL_KHR);
}

TEST_CASE("Test case 400") {
    VkPipelineBinaryKeyKHR tmp = MAKE_VK_PIPELINE_BINARY_KEY_KHR();
    CHECK(offsetof(VkPipelineBinaryKeyKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_BINARY_KEY_KHR);
}

TEST_CASE("Test case 401") {
    VkPipelineCreateInfoKHR tmp = MAKE_VK_PIPELINE_CREATE_INFO_KHR();
    CHECK(offsetof(VkPipelineCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_CREATE_INFO_KHR);
}

TEST_CASE("Test case 402") {
    VkPipelineBinaryCreateInfoKHR tmp = MAKE_VK_PIPELINE_BINARY_CREATE_INFO_KHR();
    CHECK(offsetof(VkPipelineBinaryCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_BINARY_CREATE_INFO_KHR);
}

TEST_CASE("Test case 403") {
    VkPipelineBinaryInfoKHR tmp = MAKE_VK_PIPELINE_BINARY_INFO_KHR();
    CHECK(offsetof(VkPipelineBinaryInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_BINARY_INFO_KHR);
}

TEST_CASE("Test case 404") {
    VkReleaseCapturedPipelineDataInfoKHR tmp = MAKE_VK_RELEASE_CAPTURED_PIPELINE_DATA_INFO_KHR();
    CHECK(offsetof(VkReleaseCapturedPipelineDataInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RELEASE_CAPTURED_PIPELINE_DATA_INFO_KHR);
}

TEST_CASE("Test case 405") {
    VkPipelineBinaryDataInfoKHR tmp = MAKE_VK_PIPELINE_BINARY_DATA_INFO_KHR();
    CHECK(offsetof(VkPipelineBinaryDataInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_BINARY_DATA_INFO_KHR);
}

TEST_CASE("Test case 406") {
    VkPipelineBinaryHandlesInfoKHR tmp = MAKE_VK_PIPELINE_BINARY_HANDLES_INFO_KHR();
    CHECK(offsetof(VkPipelineBinaryHandlesInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_BINARY_HANDLES_INFO_KHR);
}

TEST_CASE("Test case 407") {
    VkCooperativeMatrixPropertiesKHR tmp = MAKE_VK_COOPERATIVE_MATRIX_PROPERTIES_KHR();
    CHECK(offsetof(VkCooperativeMatrixPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_KHR);
}

TEST_CASE("Test case 408") {
    VkPhysicalDeviceCooperativeMatrixFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceCooperativeMatrixFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR);
}

TEST_CASE("Test case 409") {
    VkPhysicalDeviceCooperativeMatrixPropertiesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR();
    CHECK(offsetof(VkPhysicalDeviceCooperativeMatrixPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR);
}

TEST_CASE("Test case 410") {
    VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR);
}

TEST_CASE("Test case 411") {
    VkPhysicalDeviceComputeShaderDerivativesPropertiesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_PROPERTIES_KHR();
    CHECK(offsetof(VkPhysicalDeviceComputeShaderDerivativesPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_PROPERTIES_KHR);
}

TEST_CASE("Test case 412") {
    VkVideoDecodeAV1ProfileInfoKHR tmp = MAKE_VK_VIDEO_DECODE_AV1_PROFILE_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeAV1ProfileInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PROFILE_INFO_KHR);
}

TEST_CASE("Test case 413") {
    VkVideoDecodeAV1CapabilitiesKHR tmp = MAKE_VK_VIDEO_DECODE_AV1_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoDecodeAV1CapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_CAPABILITIES_KHR);
}

TEST_CASE("Test case 414") {
    VkVideoDecodeAV1SessionParametersCreateInfoKHR tmp = MAKE_VK_VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeAV1SessionParametersCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR);
}

TEST_CASE("Test case 415") {
    VkVideoDecodeAV1PictureInfoKHR tmp = MAKE_VK_VIDEO_DECODE_AV1_PICTURE_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeAV1PictureInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PICTURE_INFO_KHR);
}

TEST_CASE("Test case 416") {
    VkVideoDecodeAV1DpbSlotInfoKHR tmp = MAKE_VK_VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeAV1DpbSlotInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR);
}

TEST_CASE("Test case 417") {
    VkPhysicalDeviceVideoEncodeAV1FeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceVideoEncodeAV1FeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR);
}

TEST_CASE("Test case 418") {
    VkVideoEncodeAV1CapabilitiesKHR tmp = MAKE_VK_VIDEO_ENCODE_AV1_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoEncodeAV1CapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_CAPABILITIES_KHR);
}

TEST_CASE("Test case 419") {
    VkVideoEncodeAV1QualityLevelPropertiesKHR tmp = MAKE_VK_VIDEO_ENCODE_AV1_QUALITY_LEVEL_PROPERTIES_KHR();
    CHECK(offsetof(VkVideoEncodeAV1QualityLevelPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_QUALITY_LEVEL_PROPERTIES_KHR);
}

TEST_CASE("Test case 420") {
    VkVideoEncodeAV1SessionCreateInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_AV1_SESSION_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeAV1SessionCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_SESSION_CREATE_INFO_KHR);
}

TEST_CASE("Test case 421") {
    VkVideoEncodeAV1SessionParametersCreateInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeAV1SessionParametersCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR);
}

TEST_CASE("Test case 422") {
    VkVideoEncodeAV1PictureInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_AV1_PICTURE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeAV1PictureInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_PICTURE_INFO_KHR);
}

TEST_CASE("Test case 423") {
    VkVideoEncodeAV1DpbSlotInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_AV1_DPB_SLOT_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeAV1DpbSlotInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_DPB_SLOT_INFO_KHR);
}

TEST_CASE("Test case 424") {
    VkVideoEncodeAV1ProfileInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_AV1_PROFILE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeAV1ProfileInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_PROFILE_INFO_KHR);
}

TEST_CASE("Test case 425") {
    VkVideoEncodeAV1GopRemainingFrameInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_AV1_GOP_REMAINING_FRAME_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeAV1GopRemainingFrameInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_GOP_REMAINING_FRAME_INFO_KHR);
}

TEST_CASE("Test case 426") {
    VkVideoEncodeAV1RateControlInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_AV1_RATE_CONTROL_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeAV1RateControlInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_RATE_CONTROL_INFO_KHR);
}

TEST_CASE("Test case 427") {
    VkVideoEncodeAV1RateControlLayerInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_AV1_RATE_CONTROL_LAYER_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeAV1RateControlLayerInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_RATE_CONTROL_LAYER_INFO_KHR);
}

TEST_CASE("Test case 428") {
    VkPhysicalDeviceVideoMaintenance1FeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceVideoMaintenance1FeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR);
}

TEST_CASE("Test case 429") {
    VkVideoInlineQueryInfoKHR tmp = MAKE_VK_VIDEO_INLINE_QUERY_INFO_KHR();
    CHECK(offsetof(VkVideoInlineQueryInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_INLINE_QUERY_INFO_KHR);
}

TEST_CASE("Test case 430") {
    VkCalibratedTimestampInfoKHR tmp = MAKE_VK_CALIBRATED_TIMESTAMP_INFO_KHR();
    CHECK(offsetof(VkCalibratedTimestampInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_KHR);
}

TEST_CASE("Test case 431") {
    VkSetDescriptorBufferOffsetsInfoEXT tmp = MAKE_VK_SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT();
    CHECK(offsetof(VkSetDescriptorBufferOffsetsInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT);
}

TEST_CASE("Test case 432") {
    VkBindDescriptorBufferEmbeddedSamplersInfoEXT tmp = MAKE_VK_BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT();
    CHECK(offsetof(VkBindDescriptorBufferEmbeddedSamplersInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT);
}

TEST_CASE("Test case 433") {
    VkVideoEncodeQuantizationMapCapabilitiesKHR tmp = MAKE_VK_VIDEO_ENCODE_QUANTIZATION_MAP_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoEncodeQuantizationMapCapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_CAPABILITIES_KHR);
}

TEST_CASE("Test case 434") {
    VkVideoFormatQuantizationMapPropertiesKHR tmp = MAKE_VK_VIDEO_FORMAT_QUANTIZATION_MAP_PROPERTIES_KHR();
    CHECK(offsetof(VkVideoFormatQuantizationMapPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_FORMAT_QUANTIZATION_MAP_PROPERTIES_KHR);
}

TEST_CASE("Test case 435") {
    VkVideoEncodeQuantizationMapInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_QUANTIZATION_MAP_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeQuantizationMapInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_INFO_KHR);
}

TEST_CASE("Test case 436") {
    VkVideoEncodeQuantizationMapSessionParametersCreateInfoKHR tmp = MAKE_VK_VIDEO_ENCODE_QUANTIZATION_MAP_SESSION_PARAMETERS_CREATE_INFO_KHR();
    CHECK(offsetof(VkVideoEncodeQuantizationMapSessionParametersCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_SESSION_PARAMETERS_CREATE_INFO_KHR);
}

TEST_CASE("Test case 437") {
    VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR);
}

TEST_CASE("Test case 438") {
    VkVideoEncodeH264QuantizationMapCapabilitiesKHR tmp = MAKE_VK_VIDEO_ENCODE_H264_QUANTIZATION_MAP_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoEncodeH264QuantizationMapCapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUANTIZATION_MAP_CAPABILITIES_KHR);
}

TEST_CASE("Test case 439") {
    VkVideoEncodeH265QuantizationMapCapabilitiesKHR tmp = MAKE_VK_VIDEO_ENCODE_H265_QUANTIZATION_MAP_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoEncodeH265QuantizationMapCapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUANTIZATION_MAP_CAPABILITIES_KHR);
}

TEST_CASE("Test case 440") {
    VkVideoFormatH265QuantizationMapPropertiesKHR tmp = MAKE_VK_VIDEO_FORMAT_H265_QUANTIZATION_MAP_PROPERTIES_KHR();
    CHECK(offsetof(VkVideoFormatH265QuantizationMapPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_FORMAT_H265_QUANTIZATION_MAP_PROPERTIES_KHR);
}

TEST_CASE("Test case 441") {
    VkVideoEncodeAV1QuantizationMapCapabilitiesKHR tmp = MAKE_VK_VIDEO_ENCODE_AV1_QUANTIZATION_MAP_CAPABILITIES_KHR();
    CHECK(offsetof(VkVideoEncodeAV1QuantizationMapCapabilitiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_QUANTIZATION_MAP_CAPABILITIES_KHR);
}

TEST_CASE("Test case 442") {
    VkVideoFormatAV1QuantizationMapPropertiesKHR tmp = MAKE_VK_VIDEO_FORMAT_AV1_QUANTIZATION_MAP_PROPERTIES_KHR();
    CHECK(offsetof(VkVideoFormatAV1QuantizationMapPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_FORMAT_AV1_QUANTIZATION_MAP_PROPERTIES_KHR);
}

TEST_CASE("Test case 443") {
    VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR);
}

TEST_CASE("Test case 444") {
    VkPhysicalDeviceMaintenance7FeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceMaintenance7FeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR);
}

TEST_CASE("Test case 445") {
    VkPhysicalDeviceMaintenance7PropertiesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR();
    CHECK(offsetof(VkPhysicalDeviceMaintenance7PropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR);
}

TEST_CASE("Test case 446") {
    VkPhysicalDeviceLayeredApiPropertiesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_KHR();
    CHECK(offsetof(VkPhysicalDeviceLayeredApiPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_KHR);
}

TEST_CASE("Test case 447") {
    VkPhysicalDeviceLayeredApiPropertiesListKHR tmp = MAKE_VK_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR();
    CHECK(offsetof(VkPhysicalDeviceLayeredApiPropertiesListKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR);
}

TEST_CASE("Test case 448") {
    VkPhysicalDeviceLayeredApiVulkanPropertiesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR();
    CHECK(offsetof(VkPhysicalDeviceLayeredApiVulkanPropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR);
}

TEST_CASE("Test case 449") {
    VkPhysicalDeviceMaintenance8FeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_MAINTENANCE_8_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceMaintenance8FeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_8_FEATURES_KHR);
}

TEST_CASE("Test case 450") {
    VkMemoryBarrierAccessFlags3KHR tmp = MAKE_VK_MEMORY_BARRIER_ACCESS_FLAGS_3_KHR();
    CHECK(offsetof(VkMemoryBarrierAccessFlags3KHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_BARRIER_ACCESS_FLAGS_3_KHR);
}

TEST_CASE("Test case 451") {
    VkPhysicalDeviceVideoMaintenance2FeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_2_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceVideoMaintenance2FeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_2_FEATURES_KHR);
}

TEST_CASE("Test case 452") {
    VkVideoDecodeH264InlineSessionParametersInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H264_INLINE_SESSION_PARAMETERS_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH264InlineSessionParametersInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_INLINE_SESSION_PARAMETERS_INFO_KHR);
}

TEST_CASE("Test case 453") {
    VkVideoDecodeH265InlineSessionParametersInfoKHR tmp = MAKE_VK_VIDEO_DECODE_H265_INLINE_SESSION_PARAMETERS_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeH265InlineSessionParametersInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_INLINE_SESSION_PARAMETERS_INFO_KHR);
}

TEST_CASE("Test case 454") {
    VkVideoDecodeAV1InlineSessionParametersInfoKHR tmp = MAKE_VK_VIDEO_DECODE_AV1_INLINE_SESSION_PARAMETERS_INFO_KHR();
    CHECK(offsetof(VkVideoDecodeAV1InlineSessionParametersInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_INLINE_SESSION_PARAMETERS_INFO_KHR);
}

TEST_CASE("Test case 455") {
    VkPhysicalDeviceDepthClampZeroOneFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceDepthClampZeroOneFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_KHR);
}

TEST_CASE("Test case 456") {
    VkDebugReportCallbackCreateInfoEXT tmp = MAKE_VK_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT();
    CHECK(offsetof(VkDebugReportCallbackCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT);
}

TEST_CASE("Test case 457") {
    VkPipelineRasterizationStateRasterizationOrderAMD tmp = MAKE_VK_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD();
    CHECK(offsetof(VkPipelineRasterizationStateRasterizationOrderAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD);
}

TEST_CASE("Test case 458") {
    VkDebugMarkerObjectNameInfoEXT tmp = MAKE_VK_DEBUG_MARKER_OBJECT_NAME_INFO_EXT();
    CHECK(offsetof(VkDebugMarkerObjectNameInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT);
}

TEST_CASE("Test case 459") {
    VkDebugMarkerObjectTagInfoEXT tmp = MAKE_VK_DEBUG_MARKER_OBJECT_TAG_INFO_EXT();
    CHECK(offsetof(VkDebugMarkerObjectTagInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT);
}

TEST_CASE("Test case 460") {
    VkDebugMarkerMarkerInfoEXT tmp = MAKE_VK_DEBUG_MARKER_MARKER_INFO_EXT();
    CHECK(offsetof(VkDebugMarkerMarkerInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT);
}

TEST_CASE("Test case 461") {
    VkDedicatedAllocationImageCreateInfoNV tmp = MAKE_VK_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV();
    CHECK(offsetof(VkDedicatedAllocationImageCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV);
}

TEST_CASE("Test case 462") {
    VkDedicatedAllocationBufferCreateInfoNV tmp = MAKE_VK_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV();
    CHECK(offsetof(VkDedicatedAllocationBufferCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV);
}

TEST_CASE("Test case 463") {
    VkDedicatedAllocationMemoryAllocateInfoNV tmp = MAKE_VK_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV();
    CHECK(offsetof(VkDedicatedAllocationMemoryAllocateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV);
}

TEST_CASE("Test case 464") {
    VkPhysicalDeviceTransformFeedbackFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceTransformFeedbackFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT);
}

TEST_CASE("Test case 465") {
    VkPhysicalDeviceTransformFeedbackPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceTransformFeedbackPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT);
}

TEST_CASE("Test case 466") {
    VkPipelineRasterizationStateStreamCreateInfoEXT tmp = MAKE_VK_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT();
    CHECK(offsetof(VkPipelineRasterizationStateStreamCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT);
}

TEST_CASE("Test case 467") {
    VkCuModuleCreateInfoNVX tmp = MAKE_VK_CU_MODULE_CREATE_INFO_NVX();
    CHECK(offsetof(VkCuModuleCreateInfoNVX, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CU_MODULE_CREATE_INFO_NVX);
}

TEST_CASE("Test case 468") {
    VkCuModuleTexturingModeCreateInfoNVX tmp = MAKE_VK_CU_MODULE_TEXTURING_MODE_CREATE_INFO_NVX();
    CHECK(offsetof(VkCuModuleTexturingModeCreateInfoNVX, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CU_MODULE_TEXTURING_MODE_CREATE_INFO_NVX);
}

TEST_CASE("Test case 469") {
    VkCuFunctionCreateInfoNVX tmp = MAKE_VK_CU_FUNCTION_CREATE_INFO_NVX();
    CHECK(offsetof(VkCuFunctionCreateInfoNVX, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CU_FUNCTION_CREATE_INFO_NVX);
}

TEST_CASE("Test case 470") {
    VkCuLaunchInfoNVX tmp = MAKE_VK_CU_LAUNCH_INFO_NVX();
    CHECK(offsetof(VkCuLaunchInfoNVX, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CU_LAUNCH_INFO_NVX);
}

TEST_CASE("Test case 471") {
    VkImageViewHandleInfoNVX tmp = MAKE_VK_IMAGE_VIEW_HANDLE_INFO_NVX();
    CHECK(offsetof(VkImageViewHandleInfoNVX, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX);
}

TEST_CASE("Test case 472") {
    VkImageViewAddressPropertiesNVX tmp = MAKE_VK_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX();
    CHECK(offsetof(VkImageViewAddressPropertiesNVX, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX);
}

TEST_CASE("Test case 473") {
    VkTextureLODGatherFormatPropertiesAMD tmp = MAKE_VK_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD();
    CHECK(offsetof(VkTextureLODGatherFormatPropertiesAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD);
}

TEST_CASE("Test case 474") {
    VkPhysicalDeviceCornerSampledImageFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceCornerSampledImageFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV);
}

TEST_CASE("Test case 475") {
    VkExternalMemoryImageCreateInfoNV tmp = MAKE_VK_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV();
    CHECK(offsetof(VkExternalMemoryImageCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV);
}

TEST_CASE("Test case 476") {
    VkExportMemoryAllocateInfoNV tmp = MAKE_VK_EXPORT_MEMORY_ALLOCATE_INFO_NV();
    CHECK(offsetof(VkExportMemoryAllocateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV);
}

TEST_CASE("Test case 477") {
    VkValidationFlagsEXT tmp = MAKE_VK_VALIDATION_FLAGS_EXT();
    CHECK(offsetof(VkValidationFlagsEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT);
}

TEST_CASE("Test case 478") {
    VkImageViewASTCDecodeModeEXT tmp = MAKE_VK_IMAGE_VIEW_ASTC_DECODE_MODE_EXT();
    CHECK(offsetof(VkImageViewASTCDecodeModeEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT);
}

TEST_CASE("Test case 479") {
    VkPhysicalDeviceASTCDecodeFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceASTCDecodeFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT);
}

TEST_CASE("Test case 480") {
    VkConditionalRenderingBeginInfoEXT tmp = MAKE_VK_CONDITIONAL_RENDERING_BEGIN_INFO_EXT();
    CHECK(offsetof(VkConditionalRenderingBeginInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT);
}

TEST_CASE("Test case 481") {
    VkPhysicalDeviceConditionalRenderingFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceConditionalRenderingFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT);
}

TEST_CASE("Test case 482") {
    VkCommandBufferInheritanceConditionalRenderingInfoEXT tmp = MAKE_VK_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT();
    CHECK(offsetof(VkCommandBufferInheritanceConditionalRenderingInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT);
}

TEST_CASE("Test case 483") {
    VkPipelineViewportWScalingStateCreateInfoNV tmp = MAKE_VK_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV();
    CHECK(offsetof(VkPipelineViewportWScalingStateCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV);
}

TEST_CASE("Test case 484") {
    VkSurfaceCapabilities2EXT tmp = MAKE_VK_SURFACE_CAPABILITIES_2_EXT();
    CHECK(offsetof(VkSurfaceCapabilities2EXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT);
}

TEST_CASE("Test case 485") {
    VkDisplayPowerInfoEXT tmp = MAKE_VK_DISPLAY_POWER_INFO_EXT();
    CHECK(offsetof(VkDisplayPowerInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT);
}

TEST_CASE("Test case 486") {
    VkDeviceEventInfoEXT tmp = MAKE_VK_DEVICE_EVENT_INFO_EXT();
    CHECK(offsetof(VkDeviceEventInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT);
}

TEST_CASE("Test case 487") {
    VkDisplayEventInfoEXT tmp = MAKE_VK_DISPLAY_EVENT_INFO_EXT();
    CHECK(offsetof(VkDisplayEventInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT);
}

TEST_CASE("Test case 488") {
    VkSwapchainCounterCreateInfoEXT tmp = MAKE_VK_SWAPCHAIN_COUNTER_CREATE_INFO_EXT();
    CHECK(offsetof(VkSwapchainCounterCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT);
}

TEST_CASE("Test case 489") {
    VkPresentTimesInfoGOOGLE tmp = MAKE_VK_PRESENT_TIMES_INFO_GOOGLE();
    CHECK(offsetof(VkPresentTimesInfoGOOGLE, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE);
}

TEST_CASE("Test case 490") {
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX tmp = MAKE_VK_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX();
    CHECK(offsetof(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX);
}

TEST_CASE("Test case 491") {
    VkMultiviewPerViewAttributesInfoNVX tmp = MAKE_VK_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX();
    CHECK(offsetof(VkMultiviewPerViewAttributesInfoNVX, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX);
}

TEST_CASE("Test case 492") {
    VkPipelineViewportSwizzleStateCreateInfoNV tmp = MAKE_VK_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV();
    CHECK(offsetof(VkPipelineViewportSwizzleStateCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV);
}

TEST_CASE("Test case 493") {
    VkPhysicalDeviceDiscardRectanglePropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDiscardRectanglePropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT);
}

TEST_CASE("Test case 494") {
    VkPipelineDiscardRectangleStateCreateInfoEXT tmp = MAKE_VK_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT();
    CHECK(offsetof(VkPipelineDiscardRectangleStateCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT);
}

TEST_CASE("Test case 495") {
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceConservativeRasterizationPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT);
}

TEST_CASE("Test case 496") {
    VkPipelineRasterizationConservativeStateCreateInfoEXT tmp = MAKE_VK_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT();
    CHECK(offsetof(VkPipelineRasterizationConservativeStateCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT);
}

TEST_CASE("Test case 497") {
    VkPhysicalDeviceDepthClipEnableFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDepthClipEnableFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT);
}

TEST_CASE("Test case 498") {
    VkPipelineRasterizationDepthClipStateCreateInfoEXT tmp = MAKE_VK_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT();
    CHECK(offsetof(VkPipelineRasterizationDepthClipStateCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT);
}

TEST_CASE("Test case 499") {
    VkHdrMetadataEXT tmp = MAKE_VK_HDR_METADATA_EXT();
    CHECK(offsetof(VkHdrMetadataEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_HDR_METADATA_EXT);
}

TEST_CASE("Test case 500") {
    VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG tmp = MAKE_VK_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG();
    CHECK(offsetof(VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG);
}

TEST_CASE("Test case 501") {
    VkDebugUtilsLabelEXT tmp = MAKE_VK_DEBUG_UTILS_LABEL_EXT();
    CHECK(offsetof(VkDebugUtilsLabelEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT);
}

TEST_CASE("Test case 502") {
    VkDebugUtilsObjectNameInfoEXT tmp = MAKE_VK_DEBUG_UTILS_OBJECT_NAME_INFO_EXT();
    CHECK(offsetof(VkDebugUtilsObjectNameInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT);
}

TEST_CASE("Test case 503") {
    VkDebugUtilsMessengerCallbackDataEXT tmp = MAKE_VK_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT();
    CHECK(offsetof(VkDebugUtilsMessengerCallbackDataEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT);
}

TEST_CASE("Test case 504") {
    VkDebugUtilsMessengerCreateInfoEXT tmp = MAKE_VK_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT();
    CHECK(offsetof(VkDebugUtilsMessengerCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT);
}

TEST_CASE("Test case 505") {
    VkDebugUtilsObjectTagInfoEXT tmp = MAKE_VK_DEBUG_UTILS_OBJECT_TAG_INFO_EXT();
    CHECK(offsetof(VkDebugUtilsObjectTagInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT);
}

TEST_CASE("Test case 506") {
    VkAttachmentSampleCountInfoAMD tmp = MAKE_VK_ATTACHMENT_SAMPLE_COUNT_INFO_AMD();
    CHECK(offsetof(VkAttachmentSampleCountInfoAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD);
}

TEST_CASE("Test case 507") {
    VkSampleLocationsInfoEXT tmp = MAKE_VK_SAMPLE_LOCATIONS_INFO_EXT();
    CHECK(offsetof(VkSampleLocationsInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT);
}

TEST_CASE("Test case 508") {
    VkRenderPassSampleLocationsBeginInfoEXT tmp = MAKE_VK_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT();
    CHECK(offsetof(VkRenderPassSampleLocationsBeginInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT);
}

TEST_CASE("Test case 509") {
    VkPipelineSampleLocationsStateCreateInfoEXT tmp = MAKE_VK_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT();
    CHECK(offsetof(VkPipelineSampleLocationsStateCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT);
}

TEST_CASE("Test case 510") {
    VkPhysicalDeviceSampleLocationsPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceSampleLocationsPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT);
}

TEST_CASE("Test case 511") {
    VkMultisamplePropertiesEXT tmp = MAKE_VK_MULTISAMPLE_PROPERTIES_EXT();
    CHECK(offsetof(VkMultisamplePropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT);
}

TEST_CASE("Test case 512") {
    VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT);
}

TEST_CASE("Test case 513") {
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT);
}

TEST_CASE("Test case 514") {
    VkPipelineColorBlendAdvancedStateCreateInfoEXT tmp = MAKE_VK_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT();
    CHECK(offsetof(VkPipelineColorBlendAdvancedStateCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT);
}

TEST_CASE("Test case 515") {
    VkPipelineCoverageToColorStateCreateInfoNV tmp = MAKE_VK_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV();
    CHECK(offsetof(VkPipelineCoverageToColorStateCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV);
}

TEST_CASE("Test case 516") {
    VkPipelineCoverageModulationStateCreateInfoNV tmp = MAKE_VK_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV();
    CHECK(offsetof(VkPipelineCoverageModulationStateCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV);
}

TEST_CASE("Test case 517") {
    VkPhysicalDeviceShaderSMBuiltinsPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV);
}

TEST_CASE("Test case 518") {
    VkPhysicalDeviceShaderSMBuiltinsFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV);
}

TEST_CASE("Test case 519") {
    VkDrmFormatModifierPropertiesListEXT tmp = MAKE_VK_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT();
    CHECK(offsetof(VkDrmFormatModifierPropertiesListEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT);
}

TEST_CASE("Test case 520") {
    VkPhysicalDeviceImageDrmFormatModifierInfoEXT tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT();
    CHECK(offsetof(VkPhysicalDeviceImageDrmFormatModifierInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT);
}

TEST_CASE("Test case 521") {
    VkImageDrmFormatModifierListCreateInfoEXT tmp = MAKE_VK_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT();
    CHECK(offsetof(VkImageDrmFormatModifierListCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT);
}

TEST_CASE("Test case 522") {
    VkImageDrmFormatModifierExplicitCreateInfoEXT tmp = MAKE_VK_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT();
    CHECK(offsetof(VkImageDrmFormatModifierExplicitCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT);
}

TEST_CASE("Test case 523") {
    VkImageDrmFormatModifierPropertiesEXT tmp = MAKE_VK_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT();
    CHECK(offsetof(VkImageDrmFormatModifierPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT);
}

TEST_CASE("Test case 524") {
    VkDrmFormatModifierPropertiesList2EXT tmp = MAKE_VK_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT();
    CHECK(offsetof(VkDrmFormatModifierPropertiesList2EXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT);
}

TEST_CASE("Test case 525") {
    VkValidationCacheCreateInfoEXT tmp = MAKE_VK_VALIDATION_CACHE_CREATE_INFO_EXT();
    CHECK(offsetof(VkValidationCacheCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT);
}

TEST_CASE("Test case 526") {
    VkShaderModuleValidationCacheCreateInfoEXT tmp = MAKE_VK_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT();
    CHECK(offsetof(VkShaderModuleValidationCacheCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT);
}

TEST_CASE("Test case 527") {
    VkPipelineViewportShadingRateImageStateCreateInfoNV tmp = MAKE_VK_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV();
    CHECK(offsetof(VkPipelineViewportShadingRateImageStateCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV);
}

TEST_CASE("Test case 528") {
    VkPhysicalDeviceShadingRateImageFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceShadingRateImageFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV);
}

TEST_CASE("Test case 529") {
    VkPhysicalDeviceShadingRateImagePropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceShadingRateImagePropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV);
}

TEST_CASE("Test case 530") {
    VkPipelineViewportCoarseSampleOrderStateCreateInfoNV tmp = MAKE_VK_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV();
    CHECK(offsetof(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV);
}

TEST_CASE("Test case 531") {
    VkRayTracingShaderGroupCreateInfoNV tmp = MAKE_VK_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV();
    CHECK(offsetof(VkRayTracingShaderGroupCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV);
}

TEST_CASE("Test case 532") {
    VkRayTracingPipelineCreateInfoNV tmp = MAKE_VK_RAY_TRACING_PIPELINE_CREATE_INFO_NV();
    CHECK(offsetof(VkRayTracingPipelineCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV);
}

TEST_CASE("Test case 533") {
    VkGeometryTrianglesNV tmp = MAKE_VK_GEOMETRY_TRIANGLES_NV();
    CHECK(offsetof(VkGeometryTrianglesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV);
}

TEST_CASE("Test case 534") {
    VkGeometryAABBNV tmp = MAKE_VK_GEOMETRY_AABB_NV();
    CHECK(offsetof(VkGeometryAABBNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV);
}

TEST_CASE("Test case 535") {
    VkGeometryNV tmp = MAKE_VK_GEOMETRY_NV();
    CHECK(offsetof(VkGeometryNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GEOMETRY_NV);
}

TEST_CASE("Test case 536") {
    VkAccelerationStructureInfoNV tmp = MAKE_VK_ACCELERATION_STRUCTURE_INFO_NV();
    CHECK(offsetof(VkAccelerationStructureInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV);
}

TEST_CASE("Test case 537") {
    VkAccelerationStructureCreateInfoNV tmp = MAKE_VK_ACCELERATION_STRUCTURE_CREATE_INFO_NV();
    CHECK(offsetof(VkAccelerationStructureCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV);
}

TEST_CASE("Test case 538") {
    VkBindAccelerationStructureMemoryInfoNV tmp = MAKE_VK_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV();
    CHECK(offsetof(VkBindAccelerationStructureMemoryInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV);
}

TEST_CASE("Test case 539") {
    VkWriteDescriptorSetAccelerationStructureNV tmp = MAKE_VK_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV();
    CHECK(offsetof(VkWriteDescriptorSetAccelerationStructureNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV);
}

TEST_CASE("Test case 540") {
    VkAccelerationStructureMemoryRequirementsInfoNV tmp = MAKE_VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV();
    CHECK(offsetof(VkAccelerationStructureMemoryRequirementsInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV);
}

TEST_CASE("Test case 541") {
    VkPhysicalDeviceRayTracingPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceRayTracingPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV);
}

TEST_CASE("Test case 542") {
    VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV);
}

TEST_CASE("Test case 543") {
    VkPipelineRepresentativeFragmentTestStateCreateInfoNV tmp = MAKE_VK_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV();
    CHECK(offsetof(VkPipelineRepresentativeFragmentTestStateCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV);
}

TEST_CASE("Test case 544") {
    VkPhysicalDeviceImageViewImageFormatInfoEXT tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT();
    CHECK(offsetof(VkPhysicalDeviceImageViewImageFormatInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT);
}

TEST_CASE("Test case 545") {
    VkFilterCubicImageViewImageFormatPropertiesEXT tmp = MAKE_VK_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT();
    CHECK(offsetof(VkFilterCubicImageViewImageFormatPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT);
}

TEST_CASE("Test case 546") {
    VkImportMemoryHostPointerInfoEXT tmp = MAKE_VK_IMPORT_MEMORY_HOST_POINTER_INFO_EXT();
    CHECK(offsetof(VkImportMemoryHostPointerInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT);
}

TEST_CASE("Test case 547") {
    VkMemoryHostPointerPropertiesEXT tmp = MAKE_VK_MEMORY_HOST_POINTER_PROPERTIES_EXT();
    CHECK(offsetof(VkMemoryHostPointerPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT);
}

TEST_CASE("Test case 548") {
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceExternalMemoryHostPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT);
}

TEST_CASE("Test case 549") {
    VkPipelineCompilerControlCreateInfoAMD tmp = MAKE_VK_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD();
    CHECK(offsetof(VkPipelineCompilerControlCreateInfoAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD);
}

TEST_CASE("Test case 550") {
    VkPhysicalDeviceShaderCorePropertiesAMD tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD();
    CHECK(offsetof(VkPhysicalDeviceShaderCorePropertiesAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD);
}

TEST_CASE("Test case 551") {
    VkDeviceMemoryOverallocationCreateInfoAMD tmp = MAKE_VK_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD();
    CHECK(offsetof(VkDeviceMemoryOverallocationCreateInfoAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD);
}

TEST_CASE("Test case 552") {
    VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT);
}

TEST_CASE("Test case 553") {
    VkPhysicalDeviceMeshShaderFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceMeshShaderFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV);
}

TEST_CASE("Test case 554") {
    VkPhysicalDeviceMeshShaderPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceMeshShaderPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV);
}

TEST_CASE("Test case 555") {
    VkPhysicalDeviceShaderImageFootprintFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceShaderImageFootprintFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV);
}

TEST_CASE("Test case 556") {
    VkPipelineViewportExclusiveScissorStateCreateInfoNV tmp = MAKE_VK_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV();
    CHECK(offsetof(VkPipelineViewportExclusiveScissorStateCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV);
}

TEST_CASE("Test case 557") {
    VkPhysicalDeviceExclusiveScissorFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceExclusiveScissorFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV);
}

TEST_CASE("Test case 558") {
    VkQueueFamilyCheckpointPropertiesNV tmp = MAKE_VK_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV();
    CHECK(offsetof(VkQueueFamilyCheckpointPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV);
}

TEST_CASE("Test case 559") {
    VkCheckpointDataNV tmp = MAKE_VK_CHECKPOINT_DATA_NV();
    CHECK(offsetof(VkCheckpointDataNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV);
}

TEST_CASE("Test case 560") {
    VkQueueFamilyCheckpointProperties2NV tmp = MAKE_VK_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV();
    CHECK(offsetof(VkQueueFamilyCheckpointProperties2NV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV);
}

TEST_CASE("Test case 561") {
    VkCheckpointData2NV tmp = MAKE_VK_CHECKPOINT_DATA_2_NV();
    CHECK(offsetof(VkCheckpointData2NV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV);
}

TEST_CASE("Test case 562") {
    VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL();
    CHECK(offsetof(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL);
}

TEST_CASE("Test case 563") {
    VkInitializePerformanceApiInfoINTEL tmp = MAKE_VK_INITIALIZE_PERFORMANCE_API_INFO_INTEL();
    CHECK(offsetof(VkInitializePerformanceApiInfoINTEL, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL);
}

TEST_CASE("Test case 564") {
    VkQueryPoolPerformanceQueryCreateInfoINTEL tmp = MAKE_VK_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL();
    CHECK(offsetof(VkQueryPoolPerformanceQueryCreateInfoINTEL, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL);
}

TEST_CASE("Test case 565") {
    VkPerformanceMarkerInfoINTEL tmp = MAKE_VK_PERFORMANCE_MARKER_INFO_INTEL();
    CHECK(offsetof(VkPerformanceMarkerInfoINTEL, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL);
}

TEST_CASE("Test case 566") {
    VkPerformanceStreamMarkerInfoINTEL tmp = MAKE_VK_PERFORMANCE_STREAM_MARKER_INFO_INTEL();
    CHECK(offsetof(VkPerformanceStreamMarkerInfoINTEL, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL);
}

TEST_CASE("Test case 567") {
    VkPerformanceOverrideInfoINTEL tmp = MAKE_VK_PERFORMANCE_OVERRIDE_INFO_INTEL();
    CHECK(offsetof(VkPerformanceOverrideInfoINTEL, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL);
}

TEST_CASE("Test case 568") {
    VkPerformanceConfigurationAcquireInfoINTEL tmp = MAKE_VK_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL();
    CHECK(offsetof(VkPerformanceConfigurationAcquireInfoINTEL, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL);
}

TEST_CASE("Test case 569") {
    VkPhysicalDevicePCIBusInfoPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDevicePCIBusInfoPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT);
}

TEST_CASE("Test case 570") {
    VkDisplayNativeHdrSurfaceCapabilitiesAMD tmp = MAKE_VK_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD();
    CHECK(offsetof(VkDisplayNativeHdrSurfaceCapabilitiesAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD);
}

TEST_CASE("Test case 571") {
    VkSwapchainDisplayNativeHdrCreateInfoAMD tmp = MAKE_VK_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD();
    CHECK(offsetof(VkSwapchainDisplayNativeHdrCreateInfoAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD);
}

TEST_CASE("Test case 572") {
    VkPhysicalDeviceFragmentDensityMapFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT);
}

TEST_CASE("Test case 573") {
    VkPhysicalDeviceFragmentDensityMapPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceFragmentDensityMapPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT);
}

TEST_CASE("Test case 574") {
    VkRenderPassFragmentDensityMapCreateInfoEXT tmp = MAKE_VK_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT();
    CHECK(offsetof(VkRenderPassFragmentDensityMapCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT);
}

TEST_CASE("Test case 575") {
    VkRenderingFragmentDensityMapAttachmentInfoEXT tmp = MAKE_VK_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT();
    CHECK(offsetof(VkRenderingFragmentDensityMapAttachmentInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT);
}

TEST_CASE("Test case 576") {
    VkPhysicalDeviceShaderCoreProperties2AMD tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD();
    CHECK(offsetof(VkPhysicalDeviceShaderCoreProperties2AMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD);
}

TEST_CASE("Test case 577") {
    VkPhysicalDeviceCoherentMemoryFeaturesAMD tmp = MAKE_VK_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD();
    CHECK(offsetof(VkPhysicalDeviceCoherentMemoryFeaturesAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD);
}

TEST_CASE("Test case 578") {
    VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT);
}

TEST_CASE("Test case 579") {
    VkPhysicalDeviceMemoryBudgetPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceMemoryBudgetPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT);
}

TEST_CASE("Test case 580") {
    VkPhysicalDeviceMemoryPriorityFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceMemoryPriorityFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT);
}

TEST_CASE("Test case 581") {
    VkMemoryPriorityAllocateInfoEXT tmp = MAKE_VK_MEMORY_PRIORITY_ALLOCATE_INFO_EXT();
    CHECK(offsetof(VkMemoryPriorityAllocateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT);
}

TEST_CASE("Test case 582") {
    VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV);
}

TEST_CASE("Test case 583") {
    VkPhysicalDeviceBufferDeviceAddressFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT);
}

TEST_CASE("Test case 584") {
    VkBufferDeviceAddressCreateInfoEXT tmp = MAKE_VK_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT();
    CHECK(offsetof(VkBufferDeviceAddressCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT);
}

TEST_CASE("Test case 585") {
    VkValidationFeaturesEXT tmp = MAKE_VK_VALIDATION_FEATURES_EXT();
    CHECK(offsetof(VkValidationFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT);
}

TEST_CASE("Test case 586") {
    VkCooperativeMatrixPropertiesNV tmp = MAKE_VK_COOPERATIVE_MATRIX_PROPERTIES_NV();
    CHECK(offsetof(VkCooperativeMatrixPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV);
}

TEST_CASE("Test case 587") {
    VkPhysicalDeviceCooperativeMatrixFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceCooperativeMatrixFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV);
}

TEST_CASE("Test case 588") {
    VkPhysicalDeviceCooperativeMatrixPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceCooperativeMatrixPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV);
}

TEST_CASE("Test case 589") {
    VkPhysicalDeviceCoverageReductionModeFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceCoverageReductionModeFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV);
}

TEST_CASE("Test case 590") {
    VkPipelineCoverageReductionStateCreateInfoNV tmp = MAKE_VK_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV();
    CHECK(offsetof(VkPipelineCoverageReductionStateCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV);
}

TEST_CASE("Test case 591") {
    VkFramebufferMixedSamplesCombinationNV tmp = MAKE_VK_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV();
    CHECK(offsetof(VkFramebufferMixedSamplesCombinationNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV);
}

TEST_CASE("Test case 592") {
    VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT);
}

TEST_CASE("Test case 593") {
    VkPhysicalDeviceYcbcrImageArraysFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT);
}

TEST_CASE("Test case 594") {
    VkPhysicalDeviceProvokingVertexFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceProvokingVertexFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT);
}

TEST_CASE("Test case 595") {
    VkPhysicalDeviceProvokingVertexPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceProvokingVertexPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT);
}

TEST_CASE("Test case 596") {
    VkPipelineRasterizationProvokingVertexStateCreateInfoEXT tmp = MAKE_VK_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT();
    CHECK(offsetof(VkPipelineRasterizationProvokingVertexStateCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT);
}

TEST_CASE("Test case 597") {
    VkHeadlessSurfaceCreateInfoEXT tmp = MAKE_VK_HEADLESS_SURFACE_CREATE_INFO_EXT();
    CHECK(offsetof(VkHeadlessSurfaceCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT);
}

TEST_CASE("Test case 598") {
    VkPhysicalDeviceShaderAtomicFloatFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT);
}

TEST_CASE("Test case 599") {
    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT);
}

TEST_CASE("Test case 600") {
    VkPhysicalDeviceMapMemoryPlacedFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT);
}

TEST_CASE("Test case 601") {
    VkPhysicalDeviceMapMemoryPlacedPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceMapMemoryPlacedPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT);
}

TEST_CASE("Test case 602") {
    VkMemoryMapPlacedInfoEXT tmp = MAKE_VK_MEMORY_MAP_PLACED_INFO_EXT();
    CHECK(offsetof(VkMemoryMapPlacedInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_MAP_PLACED_INFO_EXT);
}

TEST_CASE("Test case 603") {
    VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT);
}

TEST_CASE("Test case 604") {
    VkSurfacePresentModeEXT tmp = MAKE_VK_SURFACE_PRESENT_MODE_EXT();
    CHECK(offsetof(VkSurfacePresentModeEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT);
}

TEST_CASE("Test case 605") {
    VkSurfacePresentScalingCapabilitiesEXT tmp = MAKE_VK_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT();
    CHECK(offsetof(VkSurfacePresentScalingCapabilitiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT);
}

TEST_CASE("Test case 606") {
    VkSurfacePresentModeCompatibilityEXT tmp = MAKE_VK_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT();
    CHECK(offsetof(VkSurfacePresentModeCompatibilityEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT);
}

TEST_CASE("Test case 607") {
    VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT);
}

TEST_CASE("Test case 608") {
    VkSwapchainPresentFenceInfoEXT tmp = MAKE_VK_SWAPCHAIN_PRESENT_FENCE_INFO_EXT();
    CHECK(offsetof(VkSwapchainPresentFenceInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT);
}

TEST_CASE("Test case 609") {
    VkSwapchainPresentModesCreateInfoEXT tmp = MAKE_VK_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT();
    CHECK(offsetof(VkSwapchainPresentModesCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT);
}

TEST_CASE("Test case 610") {
    VkSwapchainPresentModeInfoEXT tmp = MAKE_VK_SWAPCHAIN_PRESENT_MODE_INFO_EXT();
    CHECK(offsetof(VkSwapchainPresentModeInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT);
}

TEST_CASE("Test case 611") {
    VkSwapchainPresentScalingCreateInfoEXT tmp = MAKE_VK_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT();
    CHECK(offsetof(VkSwapchainPresentScalingCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT);
}

TEST_CASE("Test case 612") {
    VkReleaseSwapchainImagesInfoEXT tmp = MAKE_VK_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT();
    CHECK(offsetof(VkReleaseSwapchainImagesInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT);
}

TEST_CASE("Test case 613") {
    VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV);
}

TEST_CASE("Test case 614") {
    VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV);
}

TEST_CASE("Test case 615") {
    VkGraphicsShaderGroupCreateInfoNV tmp = MAKE_VK_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV();
    CHECK(offsetof(VkGraphicsShaderGroupCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV);
}

TEST_CASE("Test case 616") {
    VkGraphicsPipelineShaderGroupsCreateInfoNV tmp = MAKE_VK_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV();
    CHECK(offsetof(VkGraphicsPipelineShaderGroupsCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV);
}

TEST_CASE("Test case 617") {
    VkIndirectCommandsLayoutTokenNV tmp = MAKE_VK_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV();
    CHECK(offsetof(VkIndirectCommandsLayoutTokenNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV);
}

TEST_CASE("Test case 618") {
    VkIndirectCommandsLayoutCreateInfoNV tmp = MAKE_VK_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV();
    CHECK(offsetof(VkIndirectCommandsLayoutCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV);
}

TEST_CASE("Test case 619") {
    VkGeneratedCommandsInfoNV tmp = MAKE_VK_GENERATED_COMMANDS_INFO_NV();
    CHECK(offsetof(VkGeneratedCommandsInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV);
}

TEST_CASE("Test case 620") {
    VkGeneratedCommandsMemoryRequirementsInfoNV tmp = MAKE_VK_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV();
    CHECK(offsetof(VkGeneratedCommandsMemoryRequirementsInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV);
}

TEST_CASE("Test case 621") {
    VkPhysicalDeviceInheritedViewportScissorFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceInheritedViewportScissorFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV);
}

TEST_CASE("Test case 622") {
    VkCommandBufferInheritanceViewportScissorInfoNV tmp = MAKE_VK_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV();
    CHECK(offsetof(VkCommandBufferInheritanceViewportScissorInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV);
}

TEST_CASE("Test case 623") {
    VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT);
}

TEST_CASE("Test case 624") {
    VkRenderPassTransformBeginInfoQCOM tmp = MAKE_VK_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM();
    CHECK(offsetof(VkRenderPassTransformBeginInfoQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM);
}

TEST_CASE("Test case 625") {
    VkCommandBufferInheritanceRenderPassTransformInfoQCOM tmp = MAKE_VK_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM();
    CHECK(offsetof(VkCommandBufferInheritanceRenderPassTransformInfoQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM);
}

TEST_CASE("Test case 626") {
    VkPhysicalDeviceDepthBiasControlFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDepthBiasControlFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT);
}

TEST_CASE("Test case 627") {
    VkDepthBiasInfoEXT tmp = MAKE_VK_DEPTH_BIAS_INFO_EXT();
    CHECK(offsetof(VkDepthBiasInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEPTH_BIAS_INFO_EXT);
}

TEST_CASE("Test case 628") {
    VkDepthBiasRepresentationInfoEXT tmp = MAKE_VK_DEPTH_BIAS_REPRESENTATION_INFO_EXT();
    CHECK(offsetof(VkDepthBiasRepresentationInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT);
}

TEST_CASE("Test case 629") {
    VkPhysicalDeviceDeviceMemoryReportFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT);
}

TEST_CASE("Test case 630") {
    VkDeviceMemoryReportCallbackDataEXT tmp = MAKE_VK_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT();
    CHECK(offsetof(VkDeviceMemoryReportCallbackDataEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT);
}

TEST_CASE("Test case 631") {
    VkDeviceDeviceMemoryReportCreateInfoEXT tmp = MAKE_VK_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT();
    CHECK(offsetof(VkDeviceDeviceMemoryReportCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT);
}

TEST_CASE("Test case 632") {
    VkPhysicalDeviceRobustness2FeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceRobustness2FeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT);
}

TEST_CASE("Test case 633") {
    VkPhysicalDeviceRobustness2PropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceRobustness2PropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT);
}

TEST_CASE("Test case 634") {
    VkSamplerCustomBorderColorCreateInfoEXT tmp = MAKE_VK_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT();
    CHECK(offsetof(VkSamplerCustomBorderColorCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT);
}

TEST_CASE("Test case 635") {
    VkPhysicalDeviceCustomBorderColorPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceCustomBorderColorPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT);
}

TEST_CASE("Test case 636") {
    VkPhysicalDeviceCustomBorderColorFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceCustomBorderColorFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT);
}

TEST_CASE("Test case 637") {
    VkPhysicalDevicePresentBarrierFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDevicePresentBarrierFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV);
}

TEST_CASE("Test case 638") {
    VkSurfaceCapabilitiesPresentBarrierNV tmp = MAKE_VK_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV();
    CHECK(offsetof(VkSurfaceCapabilitiesPresentBarrierNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV);
}

TEST_CASE("Test case 639") {
    VkSwapchainPresentBarrierCreateInfoNV tmp = MAKE_VK_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV();
    CHECK(offsetof(VkSwapchainPresentBarrierCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV);
}

TEST_CASE("Test case 640") {
    VkPhysicalDeviceDiagnosticsConfigFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceDiagnosticsConfigFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV);
}

TEST_CASE("Test case 641") {
    VkDeviceDiagnosticsConfigCreateInfoNV tmp = MAKE_VK_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV();
    CHECK(offsetof(VkDeviceDiagnosticsConfigCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV);
}

TEST_CASE("Test case 642") {
    VkCudaModuleCreateInfoNV tmp = MAKE_VK_CUDA_MODULE_CREATE_INFO_NV();
    CHECK(offsetof(VkCudaModuleCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CUDA_MODULE_CREATE_INFO_NV);
}

TEST_CASE("Test case 643") {
    VkCudaFunctionCreateInfoNV tmp = MAKE_VK_CUDA_FUNCTION_CREATE_INFO_NV();
    CHECK(offsetof(VkCudaFunctionCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CUDA_FUNCTION_CREATE_INFO_NV);
}

TEST_CASE("Test case 644") {
    VkCudaLaunchInfoNV tmp = MAKE_VK_CUDA_LAUNCH_INFO_NV();
    CHECK(offsetof(VkCudaLaunchInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CUDA_LAUNCH_INFO_NV);
}

TEST_CASE("Test case 645") {
    VkPhysicalDeviceCudaKernelLaunchFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceCudaKernelLaunchFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV);
}

TEST_CASE("Test case 646") {
    VkPhysicalDeviceCudaKernelLaunchPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceCudaKernelLaunchPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV);
}

TEST_CASE("Test case 647") {
    VkQueryLowLatencySupportNV tmp = MAKE_VK_QUERY_LOW_LATENCY_SUPPORT_NV();
    CHECK(offsetof(VkQueryLowLatencySupportNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV);
}

TEST_CASE("Test case 648") {
    VkPhysicalDeviceDescriptorBufferPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDescriptorBufferPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT);
}

TEST_CASE("Test case 649") {
    VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT);
}

TEST_CASE("Test case 650") {
    VkPhysicalDeviceDescriptorBufferFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDescriptorBufferFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT);
}

TEST_CASE("Test case 651") {
    VkDescriptorAddressInfoEXT tmp = MAKE_VK_DESCRIPTOR_ADDRESS_INFO_EXT();
    CHECK(offsetof(VkDescriptorAddressInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_ADDRESS_INFO_EXT);
}

TEST_CASE("Test case 652") {
    VkDescriptorBufferBindingInfoEXT tmp = MAKE_VK_DESCRIPTOR_BUFFER_BINDING_INFO_EXT();
    CHECK(offsetof(VkDescriptorBufferBindingInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_INFO_EXT);
}

TEST_CASE("Test case 653") {
    VkDescriptorBufferBindingPushDescriptorBufferHandleEXT tmp = MAKE_VK_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT();
    CHECK(offsetof(VkDescriptorBufferBindingPushDescriptorBufferHandleEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT);
}

TEST_CASE("Test case 654") {
    VkDescriptorGetInfoEXT tmp = MAKE_VK_DESCRIPTOR_GET_INFO_EXT();
    CHECK(offsetof(VkDescriptorGetInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_GET_INFO_EXT);
}

TEST_CASE("Test case 655") {
    VkBufferCaptureDescriptorDataInfoEXT tmp = MAKE_VK_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT();
    CHECK(offsetof(VkBufferCaptureDescriptorDataInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT);
}

TEST_CASE("Test case 656") {
    VkImageCaptureDescriptorDataInfoEXT tmp = MAKE_VK_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT();
    CHECK(offsetof(VkImageCaptureDescriptorDataInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT);
}

TEST_CASE("Test case 657") {
    VkImageViewCaptureDescriptorDataInfoEXT tmp = MAKE_VK_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT();
    CHECK(offsetof(VkImageViewCaptureDescriptorDataInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT);
}

TEST_CASE("Test case 658") {
    VkSamplerCaptureDescriptorDataInfoEXT tmp = MAKE_VK_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT();
    CHECK(offsetof(VkSamplerCaptureDescriptorDataInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT);
}

TEST_CASE("Test case 659") {
    VkOpaqueCaptureDescriptorDataCreateInfoEXT tmp = MAKE_VK_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT();
    CHECK(offsetof(VkOpaqueCaptureDescriptorDataCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT);
}

TEST_CASE("Test case 660") {
    VkAccelerationStructureCaptureDescriptorDataInfoEXT tmp = MAKE_VK_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT();
    CHECK(offsetof(VkAccelerationStructureCaptureDescriptorDataInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT);
}

TEST_CASE("Test case 661") {
    VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT);
}

TEST_CASE("Test case 662") {
    VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT);
}

TEST_CASE("Test case 663") {
    VkGraphicsPipelineLibraryCreateInfoEXT tmp = MAKE_VK_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT();
    CHECK(offsetof(VkGraphicsPipelineLibraryCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT);
}

TEST_CASE("Test case 664") {
    VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD();
    CHECK(offsetof(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD);
}

TEST_CASE("Test case 665") {
    VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV);
}

TEST_CASE("Test case 666") {
    VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV);
}

TEST_CASE("Test case 667") {
    VkPipelineFragmentShadingRateEnumStateCreateInfoNV tmp = MAKE_VK_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV();
    CHECK(offsetof(VkPipelineFragmentShadingRateEnumStateCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV);
}

TEST_CASE("Test case 668") {
    VkAccelerationStructureGeometryMotionTrianglesDataNV tmp = MAKE_VK_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV();
    CHECK(offsetof(VkAccelerationStructureGeometryMotionTrianglesDataNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV);
}

TEST_CASE("Test case 669") {
    VkAccelerationStructureMotionInfoNV tmp = MAKE_VK_ACCELERATION_STRUCTURE_MOTION_INFO_NV();
    CHECK(offsetof(VkAccelerationStructureMotionInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV);
}

TEST_CASE("Test case 670") {
    VkPhysicalDeviceRayTracingMotionBlurFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV);
}

TEST_CASE("Test case 671") {
    VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT);
}

TEST_CASE("Test case 672") {
    VkPhysicalDeviceFragmentDensityMap2FeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT);
}

TEST_CASE("Test case 673") {
    VkPhysicalDeviceFragmentDensityMap2PropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT);
}

TEST_CASE("Test case 674") {
    VkCopyCommandTransformInfoQCOM tmp = MAKE_VK_COPY_COMMAND_TRANSFORM_INFO_QCOM();
    CHECK(offsetof(VkCopyCommandTransformInfoQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM);
}

TEST_CASE("Test case 675") {
    VkPhysicalDeviceImageCompressionControlFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceImageCompressionControlFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT);
}

TEST_CASE("Test case 676") {
    VkImageCompressionControlEXT tmp = MAKE_VK_IMAGE_COMPRESSION_CONTROL_EXT();
    CHECK(offsetof(VkImageCompressionControlEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT);
}

TEST_CASE("Test case 677") {
    VkImageCompressionPropertiesEXT tmp = MAKE_VK_IMAGE_COMPRESSION_PROPERTIES_EXT();
    CHECK(offsetof(VkImageCompressionPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT);
}

TEST_CASE("Test case 678") {
    VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT);
}

TEST_CASE("Test case 679") {
    VkPhysicalDevice4444FormatsFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDevice4444FormatsFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT);
}

TEST_CASE("Test case 680") {
    VkPhysicalDeviceFaultFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_FAULT_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceFaultFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT);
}

TEST_CASE("Test case 681") {
    VkDeviceFaultCountsEXT tmp = MAKE_VK_DEVICE_FAULT_COUNTS_EXT();
    CHECK(offsetof(VkDeviceFaultCountsEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT);
}

TEST_CASE("Test case 682") {
    VkDeviceFaultInfoEXT tmp = MAKE_VK_DEVICE_FAULT_INFO_EXT();
    CHECK(offsetof(VkDeviceFaultInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT);
}

TEST_CASE("Test case 683") {
    VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT);
}

TEST_CASE("Test case 684") {
    VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT);
}

TEST_CASE("Test case 685") {
    VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT);
}

TEST_CASE("Test case 686") {
    VkMutableDescriptorTypeCreateInfoEXT tmp = MAKE_VK_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT();
    CHECK(offsetof(VkMutableDescriptorTypeCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT);
}

TEST_CASE("Test case 687") {
    VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT);
}

TEST_CASE("Test case 688") {
    VkVertexInputBindingDescription2EXT tmp = MAKE_VK_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT();
    CHECK(offsetof(VkVertexInputBindingDescription2EXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT);
}

TEST_CASE("Test case 689") {
    VkVertexInputAttributeDescription2EXT tmp = MAKE_VK_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT();
    CHECK(offsetof(VkVertexInputAttributeDescription2EXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT);
}

TEST_CASE("Test case 690") {
    VkPhysicalDeviceDrmPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDrmPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT);
}

TEST_CASE("Test case 691") {
    VkPhysicalDeviceAddressBindingReportFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceAddressBindingReportFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT);
}

TEST_CASE("Test case 692") {
    VkDeviceAddressBindingCallbackDataEXT tmp = MAKE_VK_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT();
    CHECK(offsetof(VkDeviceAddressBindingCallbackDataEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT);
}

TEST_CASE("Test case 693") {
    VkPhysicalDeviceDepthClipControlFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDepthClipControlFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT);
}

TEST_CASE("Test case 694") {
    VkPipelineViewportDepthClipControlCreateInfoEXT tmp = MAKE_VK_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT();
    CHECK(offsetof(VkPipelineViewportDepthClipControlCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT);
}

TEST_CASE("Test case 695") {
    VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT);
}

TEST_CASE("Test case 696") {
    VkPhysicalDevicePresentModeFifoLatestReadyFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDevicePresentModeFifoLatestReadyFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_EXT);
}

TEST_CASE("Test case 697") {
    VkSubpassShadingPipelineCreateInfoHUAWEI tmp = MAKE_VK_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI();
    CHECK(offsetof(VkSubpassShadingPipelineCreateInfoHUAWEI, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI);
}

TEST_CASE("Test case 698") {
    VkPhysicalDeviceSubpassShadingFeaturesHUAWEI tmp = MAKE_VK_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI();
    CHECK(offsetof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI);
}

TEST_CASE("Test case 699") {
    VkPhysicalDeviceSubpassShadingPropertiesHUAWEI tmp = MAKE_VK_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI();
    CHECK(offsetof(VkPhysicalDeviceSubpassShadingPropertiesHUAWEI, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI);
}

TEST_CASE("Test case 700") {
    VkPhysicalDeviceInvocationMaskFeaturesHUAWEI tmp = MAKE_VK_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI();
    CHECK(offsetof(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI);
}

TEST_CASE("Test case 701") {
    VkMemoryGetRemoteAddressInfoNV tmp = MAKE_VK_MEMORY_GET_REMOTE_ADDRESS_INFO_NV();
    CHECK(offsetof(VkMemoryGetRemoteAddressInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV);
}

TEST_CASE("Test case 702") {
    VkPhysicalDeviceExternalMemoryRDMAFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV);
}

TEST_CASE("Test case 703") {
    VkPipelinePropertiesIdentifierEXT tmp = MAKE_VK_PIPELINE_PROPERTIES_IDENTIFIER_EXT();
    CHECK(offsetof(VkPipelinePropertiesIdentifierEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_PROPERTIES_IDENTIFIER_EXT);
}

TEST_CASE("Test case 704") {
    VkPhysicalDevicePipelinePropertiesFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDevicePipelinePropertiesFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT);
}

TEST_CASE("Test case 705") {
    VkPhysicalDeviceFrameBoundaryFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceFrameBoundaryFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT);
}

TEST_CASE("Test case 706") {
    VkFrameBoundaryEXT tmp = MAKE_VK_FRAME_BOUNDARY_EXT();
    CHECK(offsetof(VkFrameBoundaryEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT);
}

TEST_CASE("Test case 707") {
    VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT);
}

TEST_CASE("Test case 708") {
    VkSubpassResolvePerformanceQueryEXT tmp = MAKE_VK_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT();
    CHECK(offsetof(VkSubpassResolvePerformanceQueryEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT);
}

TEST_CASE("Test case 709") {
    VkMultisampledRenderToSingleSampledInfoEXT tmp = MAKE_VK_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT();
    CHECK(offsetof(VkMultisampledRenderToSingleSampledInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT);
}

TEST_CASE("Test case 710") {
    VkPhysicalDeviceExtendedDynamicState2FeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT);
}

TEST_CASE("Test case 711") {
    VkPhysicalDeviceColorWriteEnableFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceColorWriteEnableFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT);
}

TEST_CASE("Test case 712") {
    VkPipelineColorWriteCreateInfoEXT tmp = MAKE_VK_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT();
    CHECK(offsetof(VkPipelineColorWriteCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT);
}

TEST_CASE("Test case 713") {
    VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT);
}

TEST_CASE("Test case 714") {
    VkPhysicalDeviceImageViewMinLodFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceImageViewMinLodFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT);
}

TEST_CASE("Test case 715") {
    VkImageViewMinLodCreateInfoEXT tmp = MAKE_VK_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT();
    CHECK(offsetof(VkImageViewMinLodCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT);
}

TEST_CASE("Test case 716") {
    VkPhysicalDeviceMultiDrawFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceMultiDrawFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT);
}

TEST_CASE("Test case 717") {
    VkPhysicalDeviceMultiDrawPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceMultiDrawPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT);
}

TEST_CASE("Test case 718") {
    VkPhysicalDeviceImage2DViewOf3DFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT);
}

TEST_CASE("Test case 719") {
    VkPhysicalDeviceShaderTileImageFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceShaderTileImageFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT);
}

TEST_CASE("Test case 720") {
    VkPhysicalDeviceShaderTileImagePropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceShaderTileImagePropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT);
}

TEST_CASE("Test case 721") {
    VkMicromapBuildInfoEXT tmp = MAKE_VK_MICROMAP_BUILD_INFO_EXT();
    CHECK(offsetof(VkMicromapBuildInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MICROMAP_BUILD_INFO_EXT);
}

TEST_CASE("Test case 722") {
    VkMicromapCreateInfoEXT tmp = MAKE_VK_MICROMAP_CREATE_INFO_EXT();
    CHECK(offsetof(VkMicromapCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MICROMAP_CREATE_INFO_EXT);
}

TEST_CASE("Test case 723") {
    VkPhysicalDeviceOpacityMicromapFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceOpacityMicromapFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT);
}

TEST_CASE("Test case 724") {
    VkPhysicalDeviceOpacityMicromapPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceOpacityMicromapPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT);
}

TEST_CASE("Test case 725") {
    VkMicromapVersionInfoEXT tmp = MAKE_VK_MICROMAP_VERSION_INFO_EXT();
    CHECK(offsetof(VkMicromapVersionInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MICROMAP_VERSION_INFO_EXT);
}

TEST_CASE("Test case 726") {
    VkCopyMicromapToMemoryInfoEXT tmp = MAKE_VK_COPY_MICROMAP_TO_MEMORY_INFO_EXT();
    CHECK(offsetof(VkCopyMicromapToMemoryInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_MICROMAP_TO_MEMORY_INFO_EXT);
}

TEST_CASE("Test case 727") {
    VkCopyMemoryToMicromapInfoEXT tmp = MAKE_VK_COPY_MEMORY_TO_MICROMAP_INFO_EXT();
    CHECK(offsetof(VkCopyMemoryToMicromapInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_MEMORY_TO_MICROMAP_INFO_EXT);
}

TEST_CASE("Test case 728") {
    VkCopyMicromapInfoEXT tmp = MAKE_VK_COPY_MICROMAP_INFO_EXT();
    CHECK(offsetof(VkCopyMicromapInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_MICROMAP_INFO_EXT);
}

TEST_CASE("Test case 729") {
    VkMicromapBuildSizesInfoEXT tmp = MAKE_VK_MICROMAP_BUILD_SIZES_INFO_EXT();
    CHECK(offsetof(VkMicromapBuildSizesInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MICROMAP_BUILD_SIZES_INFO_EXT);
}

TEST_CASE("Test case 730") {
    VkAccelerationStructureTrianglesOpacityMicromapEXT tmp = MAKE_VK_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT();
    CHECK(offsetof(VkAccelerationStructureTrianglesOpacityMicromapEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT);
}

TEST_CASE("Test case 731") {
    VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI tmp = MAKE_VK_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI();
    CHECK(offsetof(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI);
}

TEST_CASE("Test case 732") {
    VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI tmp = MAKE_VK_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI();
    CHECK(offsetof(VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI);
}

TEST_CASE("Test case 733") {
    VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI tmp = MAKE_VK_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI();
    CHECK(offsetof(VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI);
}

TEST_CASE("Test case 734") {
    VkPhysicalDeviceBorderColorSwizzleFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT);
}

TEST_CASE("Test case 735") {
    VkSamplerBorderColorComponentMappingCreateInfoEXT tmp = MAKE_VK_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT();
    CHECK(offsetof(VkSamplerBorderColorComponentMappingCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT);
}

TEST_CASE("Test case 736") {
    VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT);
}

TEST_CASE("Test case 737") {
    VkPhysicalDeviceShaderCorePropertiesARM tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM();
    CHECK(offsetof(VkPhysicalDeviceShaderCorePropertiesARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM);
}

TEST_CASE("Test case 738") {
    VkDeviceQueueShaderCoreControlCreateInfoARM tmp = MAKE_VK_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM();
    CHECK(offsetof(VkDeviceQueueShaderCoreControlCreateInfoARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM);
}

TEST_CASE("Test case 739") {
    VkPhysicalDeviceSchedulingControlsFeaturesARM tmp = MAKE_VK_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM();
    CHECK(offsetof(VkPhysicalDeviceSchedulingControlsFeaturesARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM);
}

TEST_CASE("Test case 740") {
    VkPhysicalDeviceSchedulingControlsPropertiesARM tmp = MAKE_VK_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM();
    CHECK(offsetof(VkPhysicalDeviceSchedulingControlsPropertiesARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM);
}

TEST_CASE("Test case 741") {
    VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT);
}

TEST_CASE("Test case 742") {
    VkImageViewSlicedCreateInfoEXT tmp = MAKE_VK_IMAGE_VIEW_SLICED_CREATE_INFO_EXT();
    CHECK(offsetof(VkImageViewSlicedCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT);
}

TEST_CASE("Test case 743") {
    VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE tmp = MAKE_VK_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE();
    CHECK(offsetof(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE);
}

TEST_CASE("Test case 744") {
    VkDescriptorSetBindingReferenceVALVE tmp = MAKE_VK_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE();
    CHECK(offsetof(VkDescriptorSetBindingReferenceVALVE, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE);
}

TEST_CASE("Test case 745") {
    VkDescriptorSetLayoutHostMappingInfoVALVE tmp = MAKE_VK_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE();
    CHECK(offsetof(VkDescriptorSetLayoutHostMappingInfoVALVE, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE);
}

TEST_CASE("Test case 746") {
    VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT);
}

TEST_CASE("Test case 747") {
    VkPhysicalDeviceRenderPassStripedFeaturesARM tmp = MAKE_VK_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM();
    CHECK(offsetof(VkPhysicalDeviceRenderPassStripedFeaturesARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM);
}

TEST_CASE("Test case 748") {
    VkPhysicalDeviceRenderPassStripedPropertiesARM tmp = MAKE_VK_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM();
    CHECK(offsetof(VkPhysicalDeviceRenderPassStripedPropertiesARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM);
}

TEST_CASE("Test case 749") {
    VkRenderPassStripeInfoARM tmp = MAKE_VK_RENDER_PASS_STRIPE_INFO_ARM();
    CHECK(offsetof(VkRenderPassStripeInfoARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_INFO_ARM);
}

TEST_CASE("Test case 750") {
    VkRenderPassStripeBeginInfoARM tmp = MAKE_VK_RENDER_PASS_STRIPE_BEGIN_INFO_ARM();
    CHECK(offsetof(VkRenderPassStripeBeginInfoARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_BEGIN_INFO_ARM);
}

TEST_CASE("Test case 751") {
    VkRenderPassStripeSubmitInfoARM tmp = MAKE_VK_RENDER_PASS_STRIPE_SUBMIT_INFO_ARM();
    CHECK(offsetof(VkRenderPassStripeSubmitInfoARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_SUBMIT_INFO_ARM);
}

TEST_CASE("Test case 752") {
    VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM);
}

TEST_CASE("Test case 753") {
    VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM);
}

TEST_CASE("Test case 754") {
    VkSubpassFragmentDensityMapOffsetEndInfoQCOM tmp = MAKE_VK_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM();
    CHECK(offsetof(VkSubpassFragmentDensityMapOffsetEndInfoQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM);
}

TEST_CASE("Test case 755") {
    VkPhysicalDeviceCopyMemoryIndirectFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV);
}

TEST_CASE("Test case 756") {
    VkPhysicalDeviceCopyMemoryIndirectPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceCopyMemoryIndirectPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV);
}

TEST_CASE("Test case 757") {
    VkPhysicalDeviceMemoryDecompressionFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceMemoryDecompressionFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV);
}

TEST_CASE("Test case 758") {
    VkPhysicalDeviceMemoryDecompressionPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceMemoryDecompressionPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV);
}

TEST_CASE("Test case 759") {
    VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV);
}

TEST_CASE("Test case 760") {
    VkComputePipelineIndirectBufferInfoNV tmp = MAKE_VK_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV();
    CHECK(offsetof(VkComputePipelineIndirectBufferInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV);
}

TEST_CASE("Test case 761") {
    VkPipelineIndirectDeviceAddressInfoNV tmp = MAKE_VK_PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV();
    CHECK(offsetof(VkPipelineIndirectDeviceAddressInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV);
}

TEST_CASE("Test case 762") {
    VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_RAY_TRACING_LINEAR_SWEPT_SPHERES_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_LINEAR_SWEPT_SPHERES_FEATURES_NV);
}

TEST_CASE("Test case 763") {
    VkAccelerationStructureGeometryLinearSweptSpheresDataNV tmp = MAKE_VK_ACCELERATION_STRUCTURE_GEOMETRY_LINEAR_SWEPT_SPHERES_DATA_NV();
    CHECK(offsetof(VkAccelerationStructureGeometryLinearSweptSpheresDataNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_LINEAR_SWEPT_SPHERES_DATA_NV);
}

TEST_CASE("Test case 764") {
    VkAccelerationStructureGeometrySpheresDataNV tmp = MAKE_VK_ACCELERATION_STRUCTURE_GEOMETRY_SPHERES_DATA_NV();
    CHECK(offsetof(VkAccelerationStructureGeometrySpheresDataNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_SPHERES_DATA_NV);
}

TEST_CASE("Test case 765") {
    VkPhysicalDeviceLinearColorAttachmentFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceLinearColorAttachmentFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV);
}

TEST_CASE("Test case 766") {
    VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT);
}

TEST_CASE("Test case 767") {
    VkImageViewSampleWeightCreateInfoQCOM tmp = MAKE_VK_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM();
    CHECK(offsetof(VkImageViewSampleWeightCreateInfoQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM);
}

TEST_CASE("Test case 768") {
    VkPhysicalDeviceImageProcessingFeaturesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceImageProcessingFeaturesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM);
}

TEST_CASE("Test case 769") {
    VkPhysicalDeviceImageProcessingPropertiesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceImageProcessingPropertiesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM);
}

TEST_CASE("Test case 770") {
    VkPhysicalDeviceNestedCommandBufferFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceNestedCommandBufferFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT);
}

TEST_CASE("Test case 771") {
    VkPhysicalDeviceNestedCommandBufferPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceNestedCommandBufferPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT);
}

TEST_CASE("Test case 772") {
    VkExternalMemoryAcquireUnmodifiedEXT tmp = MAKE_VK_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT();
    CHECK(offsetof(VkExternalMemoryAcquireUnmodifiedEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT);
}

TEST_CASE("Test case 773") {
    VkPhysicalDeviceExtendedDynamicState3FeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT);
}

TEST_CASE("Test case 774") {
    VkPhysicalDeviceExtendedDynamicState3PropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceExtendedDynamicState3PropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT);
}

TEST_CASE("Test case 775") {
    VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT);
}

TEST_CASE("Test case 776") {
    VkRenderPassCreationControlEXT tmp = MAKE_VK_RENDER_PASS_CREATION_CONTROL_EXT();
    CHECK(offsetof(VkRenderPassCreationControlEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT);
}

TEST_CASE("Test case 777") {
    VkRenderPassCreationFeedbackCreateInfoEXT tmp = MAKE_VK_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT();
    CHECK(offsetof(VkRenderPassCreationFeedbackCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT);
}

TEST_CASE("Test case 778") {
    VkRenderPassSubpassFeedbackCreateInfoEXT tmp = MAKE_VK_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT();
    CHECK(offsetof(VkRenderPassSubpassFeedbackCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT);
}

TEST_CASE("Test case 779") {
    VkDirectDriverLoadingInfoLUNARG tmp = MAKE_VK_DIRECT_DRIVER_LOADING_INFO_LUNARG();
    CHECK(offsetof(VkDirectDriverLoadingInfoLUNARG, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_INFO_LUNARG);
}

TEST_CASE("Test case 780") {
    VkDirectDriverLoadingListLUNARG tmp = MAKE_VK_DIRECT_DRIVER_LOADING_LIST_LUNARG();
    CHECK(offsetof(VkDirectDriverLoadingListLUNARG, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG);
}

TEST_CASE("Test case 781") {
    VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT);
}

TEST_CASE("Test case 782") {
    VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT);
}

TEST_CASE("Test case 783") {
    VkPipelineShaderStageModuleIdentifierCreateInfoEXT tmp = MAKE_VK_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT();
    CHECK(offsetof(VkPipelineShaderStageModuleIdentifierCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT);
}

TEST_CASE("Test case 784") {
    VkShaderModuleIdentifierEXT tmp = MAKE_VK_SHADER_MODULE_IDENTIFIER_EXT();
    CHECK(offsetof(VkShaderModuleIdentifierEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT);
}

TEST_CASE("Test case 785") {
    VkPhysicalDeviceOpticalFlowFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceOpticalFlowFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV);
}

TEST_CASE("Test case 786") {
    VkPhysicalDeviceOpticalFlowPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceOpticalFlowPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV);
}

TEST_CASE("Test case 787") {
    VkOpticalFlowImageFormatInfoNV tmp = MAKE_VK_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV();
    CHECK(offsetof(VkOpticalFlowImageFormatInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV);
}

TEST_CASE("Test case 788") {
    VkOpticalFlowImageFormatPropertiesNV tmp = MAKE_VK_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV();
    CHECK(offsetof(VkOpticalFlowImageFormatPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV);
}

TEST_CASE("Test case 789") {
    VkOpticalFlowSessionCreateInfoNV tmp = MAKE_VK_OPTICAL_FLOW_SESSION_CREATE_INFO_NV();
    CHECK(offsetof(VkOpticalFlowSessionCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_INFO_NV);
}

TEST_CASE("Test case 790") {
    VkOpticalFlowSessionCreatePrivateDataInfoNV tmp = MAKE_VK_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV();
    CHECK(offsetof(VkOpticalFlowSessionCreatePrivateDataInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV);
}

TEST_CASE("Test case 791") {
    VkOpticalFlowExecuteInfoNV tmp = MAKE_VK_OPTICAL_FLOW_EXECUTE_INFO_NV();
    CHECK(offsetof(VkOpticalFlowExecuteInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_OPTICAL_FLOW_EXECUTE_INFO_NV);
}

TEST_CASE("Test case 792") {
    VkPhysicalDeviceLegacyDitheringFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceLegacyDitheringFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT);
}

TEST_CASE("Test case 793") {
    VkPhysicalDeviceAntiLagFeaturesAMD tmp = MAKE_VK_PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD();
    CHECK(offsetof(VkPhysicalDeviceAntiLagFeaturesAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD);
}

TEST_CASE("Test case 794") {
    VkAntiLagPresentationInfoAMD tmp = MAKE_VK_ANTI_LAG_PRESENTATION_INFO_AMD();
    CHECK(offsetof(VkAntiLagPresentationInfoAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ANTI_LAG_PRESENTATION_INFO_AMD);
}

TEST_CASE("Test case 795") {
    VkAntiLagDataAMD tmp = MAKE_VK_ANTI_LAG_DATA_AMD();
    CHECK(offsetof(VkAntiLagDataAMD, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ANTI_LAG_DATA_AMD);
}

TEST_CASE("Test case 796") {
    VkPhysicalDeviceShaderObjectFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceShaderObjectFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT);
}

TEST_CASE("Test case 797") {
    VkPhysicalDeviceShaderObjectPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceShaderObjectPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT);
}

TEST_CASE("Test case 798") {
    VkShaderCreateInfoEXT tmp = MAKE_VK_SHADER_CREATE_INFO_EXT();
    CHECK(offsetof(VkShaderCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SHADER_CREATE_INFO_EXT);
}

TEST_CASE("Test case 799") {
    VkPhysicalDeviceTilePropertiesFeaturesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceTilePropertiesFeaturesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM);
}

TEST_CASE("Test case 800") {
    VkTilePropertiesQCOM tmp = MAKE_VK_TILE_PROPERTIES_QCOM();
    CHECK(offsetof(VkTilePropertiesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_TILE_PROPERTIES_QCOM);
}

TEST_CASE("Test case 801") {
    VkPhysicalDeviceAmigoProfilingFeaturesSEC tmp = MAKE_VK_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC();
    CHECK(offsetof(VkPhysicalDeviceAmigoProfilingFeaturesSEC, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC);
}

TEST_CASE("Test case 802") {
    VkAmigoProfilingSubmitInfoSEC tmp = MAKE_VK_AMIGO_PROFILING_SUBMIT_INFO_SEC();
    CHECK(offsetof(VkAmigoProfilingSubmitInfoSEC, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC);
}

TEST_CASE("Test case 803") {
    VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM);
}

TEST_CASE("Test case 804") {
    VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV);
}

TEST_CASE("Test case 805") {
    VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV);
}

TEST_CASE("Test case 806") {
    VkPhysicalDeviceCooperativeVectorPropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceCooperativeVectorPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_PROPERTIES_NV);
}

TEST_CASE("Test case 807") {
    VkPhysicalDeviceCooperativeVectorFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceCooperativeVectorFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_FEATURES_NV);
}

TEST_CASE("Test case 808") {
    VkCooperativeVectorPropertiesNV tmp = MAKE_VK_COOPERATIVE_VECTOR_PROPERTIES_NV();
    CHECK(offsetof(VkCooperativeVectorPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COOPERATIVE_VECTOR_PROPERTIES_NV);
}

TEST_CASE("Test case 809") {
    VkConvertCooperativeVectorMatrixInfoNV tmp = MAKE_VK_CONVERT_COOPERATIVE_VECTOR_MATRIX_INFO_NV();
    CHECK(offsetof(VkConvertCooperativeVectorMatrixInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CONVERT_COOPERATIVE_VECTOR_MATRIX_INFO_NV);
}

TEST_CASE("Test case 810") {
    VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV);
}

TEST_CASE("Test case 811") {
    VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV);
}

TEST_CASE("Test case 812") {
    VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT);
}

TEST_CASE("Test case 813") {
    VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT);
}

TEST_CASE("Test case 814") {
    VkLayerSettingsCreateInfoEXT tmp = MAKE_VK_LAYER_SETTINGS_CREATE_INFO_EXT();
    CHECK(offsetof(VkLayerSettingsCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_LAYER_SETTINGS_CREATE_INFO_EXT);
}

TEST_CASE("Test case 815") {
    VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM();
    CHECK(offsetof(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM);
}

TEST_CASE("Test case 816") {
    VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM();
    CHECK(offsetof(VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM);
}

TEST_CASE("Test case 817") {
    VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT);
}

TEST_CASE("Test case 818") {
    VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT);
}

TEST_CASE("Test case 819") {
    VkLatencySleepModeInfoNV tmp = MAKE_VK_LATENCY_SLEEP_MODE_INFO_NV();
    CHECK(offsetof(VkLatencySleepModeInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_LATENCY_SLEEP_MODE_INFO_NV);
}

TEST_CASE("Test case 820") {
    VkLatencySleepInfoNV tmp = MAKE_VK_LATENCY_SLEEP_INFO_NV();
    CHECK(offsetof(VkLatencySleepInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_LATENCY_SLEEP_INFO_NV);
}

TEST_CASE("Test case 821") {
    VkSetLatencyMarkerInfoNV tmp = MAKE_VK_SET_LATENCY_MARKER_INFO_NV();
    CHECK(offsetof(VkSetLatencyMarkerInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SET_LATENCY_MARKER_INFO_NV);
}

TEST_CASE("Test case 822") {
    VkLatencyTimingsFrameReportNV tmp = MAKE_VK_LATENCY_TIMINGS_FRAME_REPORT_NV();
    CHECK(offsetof(VkLatencyTimingsFrameReportNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_LATENCY_TIMINGS_FRAME_REPORT_NV);
}

TEST_CASE("Test case 823") {
    VkGetLatencyMarkerInfoNV tmp = MAKE_VK_GET_LATENCY_MARKER_INFO_NV();
    CHECK(offsetof(VkGetLatencyMarkerInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GET_LATENCY_MARKER_INFO_NV);
}

TEST_CASE("Test case 824") {
    VkLatencySubmissionPresentIdNV tmp = MAKE_VK_LATENCY_SUBMISSION_PRESENT_ID_NV();
    CHECK(offsetof(VkLatencySubmissionPresentIdNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_LATENCY_SUBMISSION_PRESENT_ID_NV);
}

TEST_CASE("Test case 825") {
    VkSwapchainLatencyCreateInfoNV tmp = MAKE_VK_SWAPCHAIN_LATENCY_CREATE_INFO_NV();
    CHECK(offsetof(VkSwapchainLatencyCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SWAPCHAIN_LATENCY_CREATE_INFO_NV);
}

TEST_CASE("Test case 826") {
    VkOutOfBandQueueTypeInfoNV tmp = MAKE_VK_OUT_OF_BAND_QUEUE_TYPE_INFO_NV();
    CHECK(offsetof(VkOutOfBandQueueTypeInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_OUT_OF_BAND_QUEUE_TYPE_INFO_NV);
}

TEST_CASE("Test case 827") {
    VkLatencySurfaceCapabilitiesNV tmp = MAKE_VK_LATENCY_SURFACE_CAPABILITIES_NV();
    CHECK(offsetof(VkLatencySurfaceCapabilitiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_LATENCY_SURFACE_CAPABILITIES_NV);
}

TEST_CASE("Test case 828") {
    VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM);
}

TEST_CASE("Test case 829") {
    VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM tmp = MAKE_VK_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM();
    CHECK(offsetof(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM);
}

TEST_CASE("Test case 830") {
    VkPhysicalDevicePerStageDescriptorSetFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDevicePerStageDescriptorSetFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV);
}

TEST_CASE("Test case 831") {
    VkPhysicalDeviceImageProcessing2FeaturesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceImageProcessing2FeaturesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM);
}

TEST_CASE("Test case 832") {
    VkPhysicalDeviceImageProcessing2PropertiesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceImageProcessing2PropertiesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM);
}

TEST_CASE("Test case 833") {
    VkSamplerBlockMatchWindowCreateInfoQCOM tmp = MAKE_VK_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM();
    CHECK(offsetof(VkSamplerBlockMatchWindowCreateInfoQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM);
}

TEST_CASE("Test case 834") {
    VkPhysicalDeviceCubicWeightsFeaturesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceCubicWeightsFeaturesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM);
}

TEST_CASE("Test case 835") {
    VkSamplerCubicWeightsCreateInfoQCOM tmp = MAKE_VK_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM();
    CHECK(offsetof(VkSamplerCubicWeightsCreateInfoQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM);
}

TEST_CASE("Test case 836") {
    VkBlitImageCubicWeightsInfoQCOM tmp = MAKE_VK_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM();
    CHECK(offsetof(VkBlitImageCubicWeightsInfoQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM);
}

TEST_CASE("Test case 837") {
    VkPhysicalDeviceYcbcrDegammaFeaturesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM);
}

TEST_CASE("Test case 838") {
    VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM tmp = MAKE_VK_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM();
    CHECK(offsetof(VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM);
}

TEST_CASE("Test case 839") {
    VkPhysicalDeviceCubicClampFeaturesQCOM tmp = MAKE_VK_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM();
    CHECK(offsetof(VkPhysicalDeviceCubicClampFeaturesQCOM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM);
}

TEST_CASE("Test case 840") {
    VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT);
}

TEST_CASE("Test case 841") {
    VkPhysicalDeviceLayeredDriverPropertiesMSFT tmp = MAKE_VK_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT();
    CHECK(offsetof(VkPhysicalDeviceLayeredDriverPropertiesMSFT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT);
}

TEST_CASE("Test case 842") {
    VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV);
}

TEST_CASE("Test case 843") {
    VkDisplaySurfaceStereoCreateInfoNV tmp = MAKE_VK_DISPLAY_SURFACE_STEREO_CREATE_INFO_NV();
    CHECK(offsetof(VkDisplaySurfaceStereoCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_SURFACE_STEREO_CREATE_INFO_NV);
}

TEST_CASE("Test case 844") {
    VkDisplayModeStereoPropertiesNV tmp = MAKE_VK_DISPLAY_MODE_STEREO_PROPERTIES_NV();
    CHECK(offsetof(VkDisplayModeStereoPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_DISPLAY_MODE_STEREO_PROPERTIES_NV);
}

TEST_CASE("Test case 845") {
    VkPhysicalDeviceRawAccessChainsFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceRawAccessChainsFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV);
}

TEST_CASE("Test case 846") {
    VkPhysicalDeviceCommandBufferInheritanceFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceCommandBufferInheritanceFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV);
}

TEST_CASE("Test case 847") {
    VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV);
}

TEST_CASE("Test case 848") {
    VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT);
}

TEST_CASE("Test case 849") {
    VkPhysicalDeviceRayTracingValidationFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceRayTracingValidationFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV);
}

TEST_CASE("Test case 850") {
    VkPhysicalDeviceClusterAccelerationStructureFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceClusterAccelerationStructureFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_FEATURES_NV);
}

TEST_CASE("Test case 851") {
    VkPhysicalDeviceClusterAccelerationStructurePropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceClusterAccelerationStructurePropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_PROPERTIES_NV);
}

TEST_CASE("Test case 852") {
    VkClusterAccelerationStructureClustersBottomLevelInputNV tmp = MAKE_VK_CLUSTER_ACCELERATION_STRUCTURE_CLUSTERS_BOTTOM_LEVEL_INPUT_NV();
    CHECK(offsetof(VkClusterAccelerationStructureClustersBottomLevelInputNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CLUSTER_ACCELERATION_STRUCTURE_CLUSTERS_BOTTOM_LEVEL_INPUT_NV);
}

TEST_CASE("Test case 853") {
    VkClusterAccelerationStructureTriangleClusterInputNV tmp = MAKE_VK_CLUSTER_ACCELERATION_STRUCTURE_TRIANGLE_CLUSTER_INPUT_NV();
    CHECK(offsetof(VkClusterAccelerationStructureTriangleClusterInputNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CLUSTER_ACCELERATION_STRUCTURE_TRIANGLE_CLUSTER_INPUT_NV);
}

TEST_CASE("Test case 854") {
    VkClusterAccelerationStructureMoveObjectsInputNV tmp = MAKE_VK_CLUSTER_ACCELERATION_STRUCTURE_MOVE_OBJECTS_INPUT_NV();
    CHECK(offsetof(VkClusterAccelerationStructureMoveObjectsInputNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CLUSTER_ACCELERATION_STRUCTURE_MOVE_OBJECTS_INPUT_NV);
}

TEST_CASE("Test case 855") {
    VkClusterAccelerationStructureInputInfoNV tmp = MAKE_VK_CLUSTER_ACCELERATION_STRUCTURE_INPUT_INFO_NV();
    CHECK(offsetof(VkClusterAccelerationStructureInputInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CLUSTER_ACCELERATION_STRUCTURE_INPUT_INFO_NV);
}

TEST_CASE("Test case 856") {
    VkClusterAccelerationStructureCommandsInfoNV tmp = MAKE_VK_CLUSTER_ACCELERATION_STRUCTURE_COMMANDS_INFO_NV();
    CHECK(offsetof(VkClusterAccelerationStructureCommandsInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_CLUSTER_ACCELERATION_STRUCTURE_COMMANDS_INFO_NV);
}

TEST_CASE("Test case 857") {
    VkAccelerationStructureBuildSizesInfoKHR tmp = MAKE_VK_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR();
    CHECK(offsetof(VkAccelerationStructureBuildSizesInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR);
}

TEST_CASE("Test case 858") {
    VkRayTracingPipelineClusterAccelerationStructureCreateInfoNV tmp = MAKE_VK_RAY_TRACING_PIPELINE_CLUSTER_ACCELERATION_STRUCTURE_CREATE_INFO_NV();
    CHECK(offsetof(VkRayTracingPipelineClusterAccelerationStructureCreateInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CLUSTER_ACCELERATION_STRUCTURE_CREATE_INFO_NV);
}

TEST_CASE("Test case 859") {
    VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_FEATURES_NV);
}

TEST_CASE("Test case 860") {
    VkPhysicalDevicePartitionedAccelerationStructurePropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDevicePartitionedAccelerationStructurePropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_PROPERTIES_NV);
}

TEST_CASE("Test case 861") {
    VkPartitionedAccelerationStructureFlagsNV tmp = MAKE_VK_PARTITIONED_ACCELERATION_STRUCTURE_FLAGS_NV();
    CHECK(offsetof(VkPartitionedAccelerationStructureFlagsNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PARTITIONED_ACCELERATION_STRUCTURE_FLAGS_NV);
}

TEST_CASE("Test case 862") {
    VkWriteDescriptorSetPartitionedAccelerationStructureNV tmp = MAKE_VK_WRITE_DESCRIPTOR_SET_PARTITIONED_ACCELERATION_STRUCTURE_NV();
    CHECK(offsetof(VkWriteDescriptorSetPartitionedAccelerationStructureNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_PARTITIONED_ACCELERATION_STRUCTURE_NV);
}

TEST_CASE("Test case 863") {
    VkPartitionedAccelerationStructureInstancesInputNV tmp = MAKE_VK_PARTITIONED_ACCELERATION_STRUCTURE_INSTANCES_INPUT_NV();
    CHECK(offsetof(VkPartitionedAccelerationStructureInstancesInputNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PARTITIONED_ACCELERATION_STRUCTURE_INSTANCES_INPUT_NV);
}

TEST_CASE("Test case 864") {
    VkBuildPartitionedAccelerationStructureInfoNV tmp = MAKE_VK_BUILD_PARTITIONED_ACCELERATION_STRUCTURE_INFO_NV();
    CHECK(offsetof(VkBuildPartitionedAccelerationStructureInfoNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_BUILD_PARTITIONED_ACCELERATION_STRUCTURE_INFO_NV);
}

TEST_CASE("Test case 865") {
    VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT);
}

TEST_CASE("Test case 866") {
    VkPhysicalDeviceDeviceGeneratedCommandsPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_EXT);
}

TEST_CASE("Test case 867") {
    VkGeneratedCommandsMemoryRequirementsInfoEXT tmp = MAKE_VK_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_EXT();
    CHECK(offsetof(VkGeneratedCommandsMemoryRequirementsInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_EXT);
}

TEST_CASE("Test case 868") {
    VkIndirectExecutionSetPipelineInfoEXT tmp = MAKE_VK_INDIRECT_EXECUTION_SET_PIPELINE_INFO_EXT();
    CHECK(offsetof(VkIndirectExecutionSetPipelineInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_PIPELINE_INFO_EXT);
}

TEST_CASE("Test case 869") {
    VkIndirectExecutionSetShaderLayoutInfoEXT tmp = MAKE_VK_INDIRECT_EXECUTION_SET_SHADER_LAYOUT_INFO_EXT();
    CHECK(offsetof(VkIndirectExecutionSetShaderLayoutInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_SHADER_LAYOUT_INFO_EXT);
}

TEST_CASE("Test case 870") {
    VkIndirectExecutionSetShaderInfoEXT tmp = MAKE_VK_INDIRECT_EXECUTION_SET_SHADER_INFO_EXT();
    CHECK(offsetof(VkIndirectExecutionSetShaderInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_SHADER_INFO_EXT);
}

TEST_CASE("Test case 871") {
    VkIndirectExecutionSetCreateInfoEXT tmp = MAKE_VK_INDIRECT_EXECUTION_SET_CREATE_INFO_EXT();
    CHECK(offsetof(VkIndirectExecutionSetCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_CREATE_INFO_EXT);
}

TEST_CASE("Test case 872") {
    VkGeneratedCommandsInfoEXT tmp = MAKE_VK_GENERATED_COMMANDS_INFO_EXT();
    CHECK(offsetof(VkGeneratedCommandsInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_EXT);
}

TEST_CASE("Test case 873") {
    VkWriteIndirectExecutionSetPipelineEXT tmp = MAKE_VK_WRITE_INDIRECT_EXECUTION_SET_PIPELINE_EXT();
    CHECK(offsetof(VkWriteIndirectExecutionSetPipelineEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_WRITE_INDIRECT_EXECUTION_SET_PIPELINE_EXT);
}

TEST_CASE("Test case 874") {
    VkIndirectCommandsLayoutTokenEXT tmp = MAKE_VK_INDIRECT_COMMANDS_LAYOUT_TOKEN_EXT();
    CHECK(offsetof(VkIndirectCommandsLayoutTokenEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_EXT);
}

TEST_CASE("Test case 875") {
    VkIndirectCommandsLayoutCreateInfoEXT tmp = MAKE_VK_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_EXT();
    CHECK(offsetof(VkIndirectCommandsLayoutCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_EXT);
}

TEST_CASE("Test case 876") {
    VkGeneratedCommandsPipelineInfoEXT tmp = MAKE_VK_GENERATED_COMMANDS_PIPELINE_INFO_EXT();
    CHECK(offsetof(VkGeneratedCommandsPipelineInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GENERATED_COMMANDS_PIPELINE_INFO_EXT);
}

TEST_CASE("Test case 877") {
    VkGeneratedCommandsShaderInfoEXT tmp = MAKE_VK_GENERATED_COMMANDS_SHADER_INFO_EXT();
    CHECK(offsetof(VkGeneratedCommandsShaderInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_GENERATED_COMMANDS_SHADER_INFO_EXT);
}

TEST_CASE("Test case 878") {
    VkWriteIndirectExecutionSetShaderEXT tmp = MAKE_VK_WRITE_INDIRECT_EXECUTION_SET_SHADER_EXT();
    CHECK(offsetof(VkWriteIndirectExecutionSetShaderEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_WRITE_INDIRECT_EXECUTION_SET_SHADER_EXT);
}

TEST_CASE("Test case 879") {
    VkPhysicalDeviceImageAlignmentControlFeaturesMESA tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA();
    CHECK(offsetof(VkPhysicalDeviceImageAlignmentControlFeaturesMESA, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA);
}

TEST_CASE("Test case 880") {
    VkPhysicalDeviceImageAlignmentControlPropertiesMESA tmp = MAKE_VK_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA();
    CHECK(offsetof(VkPhysicalDeviceImageAlignmentControlPropertiesMESA, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA);
}

TEST_CASE("Test case 881") {
    VkImageAlignmentControlCreateInfoMESA tmp = MAKE_VK_IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA();
    CHECK(offsetof(VkImageAlignmentControlCreateInfoMESA, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA);
}

TEST_CASE("Test case 882") {
    VkPhysicalDeviceDepthClampControlFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceDepthClampControlFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT);
}

TEST_CASE("Test case 883") {
    VkPipelineViewportDepthClampControlCreateInfoEXT tmp = MAKE_VK_PIPELINE_VIEWPORT_DEPTH_CLAMP_CONTROL_CREATE_INFO_EXT();
    CHECK(offsetof(VkPipelineViewportDepthClampControlCreateInfoEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLAMP_CONTROL_CREATE_INFO_EXT);
}

TEST_CASE("Test case 884") {
    VkPhysicalDeviceHdrVividFeaturesHUAWEI tmp = MAKE_VK_PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI();
    CHECK(offsetof(VkPhysicalDeviceHdrVividFeaturesHUAWEI, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI);
}

TEST_CASE("Test case 885") {
    VkHdrVividDynamicMetadataHUAWEI tmp = MAKE_VK_HDR_VIVID_DYNAMIC_METADATA_HUAWEI();
    CHECK(offsetof(VkHdrVividDynamicMetadataHUAWEI, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_HDR_VIVID_DYNAMIC_METADATA_HUAWEI);
}

TEST_CASE("Test case 886") {
    VkCooperativeMatrixFlexibleDimensionsPropertiesNV tmp = MAKE_VK_COOPERATIVE_MATRIX_FLEXIBLE_DIMENSIONS_PROPERTIES_NV();
    CHECK(offsetof(VkCooperativeMatrixFlexibleDimensionsPropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_FLEXIBLE_DIMENSIONS_PROPERTIES_NV);
}

TEST_CASE("Test case 887") {
    VkPhysicalDeviceCooperativeMatrix2FeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDeviceCooperativeMatrix2FeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV);
}

TEST_CASE("Test case 888") {
    VkPhysicalDeviceCooperativeMatrix2PropertiesNV tmp = MAKE_VK_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_PROPERTIES_NV();
    CHECK(offsetof(VkPhysicalDeviceCooperativeMatrix2PropertiesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_PROPERTIES_NV);
}

TEST_CASE("Test case 889") {
    VkPhysicalDevicePipelineOpacityMicromapFeaturesARM tmp = MAKE_VK_PHYSICAL_DEVICE_PIPELINE_OPACITY_MICROMAP_FEATURES_ARM();
    CHECK(offsetof(VkPhysicalDevicePipelineOpacityMicromapFeaturesARM, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_OPACITY_MICROMAP_FEATURES_ARM);
}

TEST_CASE("Test case 890") {
    VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT);
}

TEST_CASE("Test case 891") {
    VkSetPresentConfigNV tmp = MAKE_VK_SET_PRESENT_CONFIG_NV();
    CHECK(offsetof(VkSetPresentConfigNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_SET_PRESENT_CONFIG_NV);
}

TEST_CASE("Test case 892") {
    VkPhysicalDevicePresentMeteringFeaturesNV tmp = MAKE_VK_PHYSICAL_DEVICE_PRESENT_METERING_FEATURES_NV();
    CHECK(offsetof(VkPhysicalDevicePresentMeteringFeaturesNV, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_METERING_FEATURES_NV);
}

TEST_CASE("Test case 893") {
    VkAccelerationStructureGeometryTrianglesDataKHR tmp = MAKE_VK_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR();
    CHECK(offsetof(VkAccelerationStructureGeometryTrianglesDataKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR);
}

TEST_CASE("Test case 894") {
    VkAccelerationStructureGeometryAabbsDataKHR tmp = MAKE_VK_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR();
    CHECK(offsetof(VkAccelerationStructureGeometryAabbsDataKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR);
}

TEST_CASE("Test case 895") {
    VkAccelerationStructureGeometryInstancesDataKHR tmp = MAKE_VK_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR();
    CHECK(offsetof(VkAccelerationStructureGeometryInstancesDataKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR);
}

TEST_CASE("Test case 896") {
    VkAccelerationStructureGeometryKHR tmp = MAKE_VK_ACCELERATION_STRUCTURE_GEOMETRY_KHR();
    CHECK(offsetof(VkAccelerationStructureGeometryKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR);
}

TEST_CASE("Test case 897") {
    VkAccelerationStructureBuildGeometryInfoKHR tmp = MAKE_VK_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR();
    CHECK(offsetof(VkAccelerationStructureBuildGeometryInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR);
}

TEST_CASE("Test case 898") {
    VkAccelerationStructureCreateInfoKHR tmp = MAKE_VK_ACCELERATION_STRUCTURE_CREATE_INFO_KHR();
    CHECK(offsetof(VkAccelerationStructureCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR);
}

TEST_CASE("Test case 899") {
    VkWriteDescriptorSetAccelerationStructureKHR tmp = MAKE_VK_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR();
    CHECK(offsetof(VkWriteDescriptorSetAccelerationStructureKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR);
}

TEST_CASE("Test case 900") {
    VkPhysicalDeviceAccelerationStructureFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceAccelerationStructureFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR);
}

TEST_CASE("Test case 901") {
    VkPhysicalDeviceAccelerationStructurePropertiesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR();
    CHECK(offsetof(VkPhysicalDeviceAccelerationStructurePropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR);
}

TEST_CASE("Test case 902") {
    VkAccelerationStructureDeviceAddressInfoKHR tmp = MAKE_VK_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR();
    CHECK(offsetof(VkAccelerationStructureDeviceAddressInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR);
}

TEST_CASE("Test case 903") {
    VkAccelerationStructureVersionInfoKHR tmp = MAKE_VK_ACCELERATION_STRUCTURE_VERSION_INFO_KHR();
    CHECK(offsetof(VkAccelerationStructureVersionInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR);
}

TEST_CASE("Test case 904") {
    VkCopyAccelerationStructureToMemoryInfoKHR tmp = MAKE_VK_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR();
    CHECK(offsetof(VkCopyAccelerationStructureToMemoryInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR);
}

TEST_CASE("Test case 905") {
    VkCopyMemoryToAccelerationStructureInfoKHR tmp = MAKE_VK_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR();
    CHECK(offsetof(VkCopyMemoryToAccelerationStructureInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR);
}

TEST_CASE("Test case 906") {
    VkCopyAccelerationStructureInfoKHR tmp = MAKE_VK_COPY_ACCELERATION_STRUCTURE_INFO_KHR();
    CHECK(offsetof(VkCopyAccelerationStructureInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR);
}

TEST_CASE("Test case 907") {
    VkRayTracingShaderGroupCreateInfoKHR tmp = MAKE_VK_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR();
    CHECK(offsetof(VkRayTracingShaderGroupCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR);
}

TEST_CASE("Test case 908") {
    VkRayTracingPipelineInterfaceCreateInfoKHR tmp = MAKE_VK_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR();
    CHECK(offsetof(VkRayTracingPipelineInterfaceCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR);
}

TEST_CASE("Test case 909") {
    VkRayTracingPipelineCreateInfoKHR tmp = MAKE_VK_RAY_TRACING_PIPELINE_CREATE_INFO_KHR();
    CHECK(offsetof(VkRayTracingPipelineCreateInfoKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR);
}

TEST_CASE("Test case 910") {
    VkPhysicalDeviceRayTracingPipelineFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceRayTracingPipelineFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR);
}

TEST_CASE("Test case 911") {
    VkPhysicalDeviceRayTracingPipelinePropertiesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR();
    CHECK(offsetof(VkPhysicalDeviceRayTracingPipelinePropertiesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR);
}

TEST_CASE("Test case 912") {
    VkPhysicalDeviceRayQueryFeaturesKHR tmp = MAKE_VK_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR();
    CHECK(offsetof(VkPhysicalDeviceRayQueryFeaturesKHR, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR);
}

TEST_CASE("Test case 913") {
    VkPhysicalDeviceMeshShaderFeaturesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT();
    CHECK(offsetof(VkPhysicalDeviceMeshShaderFeaturesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT);
}

TEST_CASE("Test case 914") {
    VkPhysicalDeviceMeshShaderPropertiesEXT tmp = MAKE_VK_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT();
    CHECK(offsetof(VkPhysicalDeviceMeshShaderPropertiesEXT, sType) == 0);
    REQUIRE(tmp.sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT);
}

#if !MAKE_VK_USE_CATCH2
}

int main() {
    s_test1();
}
#endif
