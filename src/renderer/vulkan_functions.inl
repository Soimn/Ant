#ifdef VK_EXPORTED_FUNCTION
VK_EXPORTED_FUNCTION(vkGetInstanceProcAddr);
#endif

#ifdef VK_GLOBAL_LEVEL_FUNCTION
VK_GLOBAL_LEVEL_FUNCTION(vkCreateInstance);
VK_GLOBAL_LEVEL_FUNCTION(vkEnumerateInstanceExtensionProperties);
VK_GLOBAL_LEVEL_FUNCTION(vkEnumerateInstanceLayerProperties);
#endif

#ifdef VK_INSTANCE_LEVEL_FUNCTION
VK_INSTANCE_LEVEL_FUNCTION(vkDestroyInstance);

#ifdef PLATFORM_WINDOWS
VK_INSTANCE_LEVEL_FUNCTION(vkCreateWin32SurfaceKHR);
#endif

VK_INSTANCE_LEVEL_FUNCTION(vkGetPhysicalDeviceSurfaceSupportKHR);
VK_INSTANCE_LEVEL_FUNCTION(vkGetPhysicalDeviceSurfaceCapabilitiesKHR);
VK_INSTANCE_LEVEL_FUNCTION(vkGetPhysicalDeviceSurfaceFormatsKHR);
VK_INSTANCE_LEVEL_FUNCTION(vkGetPhysicalDeviceSurfacePresentModesKHR);
VK_INSTANCE_LEVEL_FUNCTION(vkDestroySurfaceKHR);
VK_INSTANCE_LEVEL_FUNCTION(vkCreateDevice);
VK_INSTANCE_LEVEL_FUNCTION(vkEnumeratePhysicalDevices);
VK_INSTANCE_LEVEL_FUNCTION(vkGetPhysicalDeviceProperties);
VK_INSTANCE_LEVEL_FUNCTION(vkGetPhysicalDeviceFeatures);
VK_INSTANCE_LEVEL_FUNCTION(vkGetPhysicalDeviceQueueFamilyProperties);
VK_INSTANCE_LEVEL_FUNCTION(vkGetDeviceProcAddr);
VK_INSTANCE_LEVEL_FUNCTION(vkEnumerateDeviceExtensionProperties);
#endif

#ifdef VK_DEVICE_LEVEL_FUNCTION
VK_DEVICE_LEVEL_FUNCTION(vkGetDeviceQueue);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyDevice);
VK_DEVICE_LEVEL_FUNCTION(vkDeviceWaitIdle);
VK_DEVICE_LEVEL_FUNCTION(vkCreateSwapchainKHR);
VK_DEVICE_LEVEL_FUNCTION(vkDestroySwapchainKHR);
VK_DEVICE_LEVEL_FUNCTION(vkCreateSemaphore);
VK_DEVICE_LEVEL_FUNCTION(vkCreateCommandPool);
VK_DEVICE_LEVEL_FUNCTION(vkCreateDescriptorPool);
VK_DEVICE_LEVEL_FUNCTION(vkCreateRenderPass);
VK_DEVICE_LEVEL_FUNCTION(vkCreateFramebuffer);
VK_DEVICE_LEVEL_FUNCTION(vkCreateShaderModule);
VK_DEVICE_LEVEL_FUNCTION(vkCreatePipelineLayout);
VK_DEVICE_LEVEL_FUNCTION(vkCreateGraphicsPipelines);
VK_DEVICE_LEVEL_FUNCTION(vkCreateFence);
VK_DEVICE_LEVEL_FUNCTION(vkCreateBuffer);
VK_DEVICE_LEVEL_FUNCTION(vkCreateImage);
VK_DEVICE_LEVEL_FUNCTION(vkCreateImageView);
VK_DEVICE_LEVEL_FUNCTION(vkCreateDescriptorSetLayout);
VK_DEVICE_LEVEL_FUNCTION(vkCreateSampler);
VK_DEVICE_LEVEL_FUNCTION(vkAllocateCommandBuffers);
VK_DEVICE_LEVEL_FUNCTION(vkBeginCommandBuffer);
VK_DEVICE_LEVEL_FUNCTION(vkCmdPipelineBarrier);
VK_DEVICE_LEVEL_FUNCTION(vkCmdClearColorImage);
VK_DEVICE_LEVEL_FUNCTION(vkEndCommandBuffer);
VK_DEVICE_LEVEL_FUNCTION(vkQueueSubmit);
VK_DEVICE_LEVEL_FUNCTION(vkFreeCommandBuffers);
VK_DEVICE_LEVEL_FUNCTION(vkCmdBeginRenderPass);
VK_DEVICE_LEVEL_FUNCTION(vkCmdBindPipeline);
VK_DEVICE_LEVEL_FUNCTION(vkCmdDraw);
VK_DEVICE_LEVEL_FUNCTION(vkCmdEndRenderPass);
VK_DEVICE_LEVEL_FUNCTION(vkGetBufferMemoryRequirements);
VK_DEVICE_LEVEL_FUNCTION(vkAllocateMemory);
VK_DEVICE_LEVEL_FUNCTION(vkBindBufferMemory);
VK_DEVICE_LEVEL_FUNCTION(vkMapMemory);
VK_DEVICE_LEVEL_FUNCTION(vkFlushMappedMemoryRanges);
VK_DEVICE_LEVEL_FUNCTION(vkUnmapMemory);
VK_DEVICE_LEVEL_FUNCTION(vkCmdSetViewport);
VK_DEVICE_LEVEL_FUNCTION(vkCmdSetScissor);
VK_DEVICE_LEVEL_FUNCTION(vkCmdBindVertexBuffers);
VK_DEVICE_LEVEL_FUNCTION(vkWaitForFences);
VK_DEVICE_LEVEL_FUNCTION(vkResetFences);
VK_DEVICE_LEVEL_FUNCTION(vkFreeMemory);
VK_DEVICE_LEVEL_FUNCTION(vkCmdCopyBuffer);
VK_DEVICE_LEVEL_FUNCTION(vkGetImageMemoryRequirements);
VK_DEVICE_LEVEL_FUNCTION(vkBindImageMemory);
VK_DEVICE_LEVEL_FUNCTION(vkCmdCopyBufferToImage);
VK_DEVICE_LEVEL_FUNCTION(vkAllocateDescriptorSets);
VK_DEVICE_LEVEL_FUNCTION(vkUpdateDescriptorSets);
VK_DEVICE_LEVEL_FUNCTION(vkCmdBindDescriptorSets);
VK_DEVICE_LEVEL_FUNCTION(vkGetSwapchainImagesKHR);
VK_DEVICE_LEVEL_FUNCTION(vkAcquireNextImageKHR);
VK_DEVICE_LEVEL_FUNCTION(vkQueuePresentKHR);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyBuffer);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyFence);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyShaderModule);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyPipelineLayout);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyPipeline);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyRenderPass);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyFramebuffer);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyImageView);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyCommandPool);
VK_DEVICE_LEVEL_FUNCTION(vkDestroySemaphore);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyDescriptorPool);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyDescriptorSetLayout);
VK_DEVICE_LEVEL_FUNCTION(vkDestroySampler);
VK_DEVICE_LEVEL_FUNCTION(vkDestroyImage);
#endif