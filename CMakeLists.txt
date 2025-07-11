cmake_minimum_required(VERSION 3.28)

file(READ ${CMAKE_SOURCE_DIR}/VK_VERSION PRJ_VERSION_RAW)
string(STRIP "${PRJ_VERSION_RAW}" PRJ_VERSION)
project(make_vk VERSION ${PRJ_VERSION} LANGUAGES C CXX)

set(LIBRARY_NAMESPACE "wkstk")
add_library(${PROJECT_NAME} INTERFACE)
add_library(${LIBRARY_NAMESPACE}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

option(MAKE_VK_BUILD_TESTS "Build the tests" OFF)
option(MAKE_VK_ENABLE_INSTALL "Install ${PROJECT_NAME}" ${PROJECT_IS_TOP_LEVEL})

if(MAKE_VK_ENABLE_INSTALL)
    include(GNUInstallDirs)
    include(CMakePackageConfigHelpers)
    
    install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include/" DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
    install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE" DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/..)
    install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}Config INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
    install(EXPORT ${PROJECT_NAME}Config NAMESPACE "${LIBRARY_NAMESPACE}::" DESTINATION "share/cmake/${PROJECT_NAME}")
    
    write_basic_package_version_file(${PROJECT_NAME}ConfigVersion.cmake COMPATIBILITY SameMajorVersion ARCH_INDEPENDENT)
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake" DESTINATION "share/cmake/${PROJECT_NAME}")
endif()

if(MAKE_VK_BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()