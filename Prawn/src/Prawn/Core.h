#pragma once

#ifdef PRW_PLATFORM_WINDOWS
	#ifdef PRW_BUILD_DLL
		#define PRW_API __declspec(dllexport)
	#else
		#define PRW_API __declspec(dllimport)
	#endif // PRW_BUILD_DLL
#else
	#error Windows support only!
#endif // PRW_PLATFORM_WINDOWS
