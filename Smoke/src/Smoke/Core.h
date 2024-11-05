#pragma once

#ifdef SMK_PLATFORM_WINDOWS
	#ifdef SMK_BUILD_DLL
		#define SMOKE_API __declspec(dllexport)
	#else
		#define SMOKE_API __declspec(dllimport)
	#endif
#else
	#error Smoke only supports Windows!
#endif