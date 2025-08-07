file(GLOB NVLINK_SOURCES "*.cpp")


add_library(nvlink_transport OBJECT ${NVLINK_SOURCES})

if (USE_CUDA)
target_include_directories(nvlink_transport PUBLIC  CUDA::cudart "/usr/local/cuda/include")
endif()

if (USE_ROCM)
target_include_directories(nvlink_transport PUBLIC opt/rocm/include)
endif()