#pragma once

enum HookStatus
{
	FHSuccess,
	FHDecodeFailed,
	FHMprotectFail,
	FHAllocFailed,
	FHPatchFailed,
	FHTooManyPatches,
	FHUnrecognizedRIP,
};

#ifdef __cplusplus 
extern "C" {
#endif
 HookStatus FakeIt(void* oldfunc, void** poutold);
#ifdef __cplusplus 
}
#endif 
