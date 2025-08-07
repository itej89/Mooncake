#pragma once

#include <hip/hip_runtime.h>


#define curand_uniform hiprand_uniform
#define curand_init hiprand_init
#define curandState_t hiprandState_t

#define cub hipcub
#define check_cuda_value ROCM_CHECK

#define cudaStream_t hipStream_t
#define cudaStreamSynchronize hipStreamSynchronize

#define cudaEvent_t hipEvent_t

#define cudaGetDevice hipGetDevice
#define cudaSetDevice hipSetDevice
#define cudaGetDeviceCount hipGetDeviceCount
#define cudaDeviceEnablePeerAccess hipDeviceEnablePeerAccess
#define cudaDeviceDisablePeerAccess hipDeviceDisablePeerAccess
#define cudaDeviceCanAccessPeer hipDeviceCanAccessPeer
#define cudaDeviceGetAttribute hipDeviceGetAttribute
#define cudaDevAttrMultiProcessorCount hipDeviceAttributeMultiprocessorCount
#define cudaDevAttrMaxSharedMemoryPerMultiprocessor hipDeviceAttributeMaxSharedMemoryPerMultiprocessor

#define cudaFuncSetAttribute hipFuncSetAttribute
#define cudaFuncAttributeMaxDynamicSharedMemorySize hipFuncAttributeMaxDynamicSharedMemorySize
#define cudaOccupancyMaxActiveBlocksPerMultiprocessor hipOccupancyMaxActiveBlocksPerMultiprocessor
#define cudaDeviceSynchronize hipDeviceSynchronize

#define cudaFree hipFree
#define cudaMalloc hipMalloc
#define cudaMemcpy hipMemcpy
#define cudaMemset hipMemset
#define cudaMemsetAsync hipMemsetAsync
#define cudaMemcpyAsync hipMemcpyAsync
#define cudaMemcpyDeviceToHost hipMemcpyDeviceToHost
#define cudaMemcpyHostToDevice hipMemcpyHostToDevice
#define cudaMemcpyDeviceToDevice hipMemcpyDeviceToDevice
#define cudaMalloc hipMalloc
#define cudaMallocAsync hipMallocAsync
#define cudaFree hipFree
#define cudaFreeAsync hipFreeAsync


#define cudaEventSynchronize hipEventSynchronize
#define cudaEventCreate hipEventCreate
#define cudaEventRecord hipEventRecord
#define cudaEventDestroy hipEventDestroy
#define cudaEventElapsedTime hipEventElapsedTime

#define cudaError_t hipError_t
#define cudaGetErrorString hipGetErrorString
#define cudaSuccess hipSuccess
#define check_cuda_error() rocm::syncAndCheckInDebug(__FILE__, __LINE__)
#define cudaDeviceProp hipDeviceProp_t

#define cudaErrorNotReady hipErrorNotReady
#define cudaErrorPeerAccessAlreadyEnabled hipErrorPeerAccessAlreadyEnabled

#define cudaStreamQuery hipStreamQuery
#define cudaStreamCreate hipStreamCreate
#define cudaStreamDestroy hipStreamDestroy

#define CUDA_IPC_HANDLE_SIZE HIP_IPC_HANDLE_SIZE
#define cudaIpcGetMemHandle hipIpcGetMemHandle
#define cudaIpcOpenMemHandle hipIpcOpenMemHandle
#define cudaIpcCloseMemHandle hipIpcCloseMemHandle
#define cudaIpcMemHandle_t hipIpcMemHandle_t
#define cudaIpcOpenMemHandle hipIpcOpenMemHandle
#define cudaIpcMemLazyEnablePeerAccess hipIpcMemLazyEnablePeerAccess

#define cudaPointerAttributes hipPointerAttribute_t
#define cudaPointerGetAttributes hipPointerGetAttributes
#define cudaMemoryTypeDevice  hipMemoryTypeDevice
#define cudaDeviceGetPCIBusId hipDeviceGetPCIBusId
#define cudaMemoryTypeHost hipMemoryTypeHost
#define cudaMemoryTypeUnregistered hipMemoryTypeUnregistered
#define cuMemGetAddressRange hipMemGetAddressRange

#define cudaMemcpyDefault hipMemcpyDefault
#define CUmemGenericAllocationHandle hipMemGenericAllocationHandle_t
#define CUdeviceptr hipDeviceptr_t

#define cuMemRelease hipMemRelease
#define cuMemUnmap hipMemUnmap
#define cuMemAddressFree hipMemAddressFree
#define cuMemRetainAllocationHandle hipMemRetainAllocationHandle
#define cuMemExportToShareableHandle hipMemExportToShareableHandle
#define cuMemImportFromShareableHandle hipMemImportFromShareableHandle
#define cuMemAddressReserve hipMemAddressReserve
#define cuMemMap hipMemMap                                                                                                                                                                                                        
#define cuMemSetAccess hipMemSetAccess
#define CUdevice hipDevice_t
#define CUmemAllocationProp hipMemAllocationProp
#define CUmemGenericAllocationHandle hipMemGenericAllocationHandle_t
#define CUresult hipError_t
#define cuDeviceGetAttribute hipDeviceGetAttribute
#define cuMemGetAllocationGranularity hipMemGetAllocationGranularity
#define cuMemCreate hipMemCreate
#define CUmemAccessDesc hipMemAccessDesc
#define cuDeviceGet hipDeviceGet
#define CU_MEM_ALLOC_GRANULARITY_MINIMUM hipMemAllocationGranularityMinimum
#define CUDA_SUCCESS hipSuccess

// To be recheck
#define CUmemFabricHandle void*
#define CU_MEM_HANDLE_TYPE_FABRIC hipMemHandleTypePosixFileDescriptor 
#define CU_DEVICE_ATTRIBUTE_GPU_DIRECT_RDMA_WITH_CUDA_VMM_SUPPORTED hipDeviceAttributeVirtualMemoryManagementSupported 
#define CU_MEM_ACCESS_FLAGS_PROT_READWRITE hipMemAccessFlagsProtReadWrite 
#define CU_MEM_LOCATION_TYPE_DEVICE hipMemLocationTypeDevice
#define CU_MEM_ALLOCATION_TYPE_PINNED hipMemAllocationTypePinned
  
// Taken from cuda_utils.h