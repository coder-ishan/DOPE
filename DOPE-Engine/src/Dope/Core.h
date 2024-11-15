#pragma once
#ifdef D_PLATFORM_WINDOWS
	#ifdef D_BUILD_DLL
		#define DOPE_API __declspec(dllexport)
	#else
		#define DOPE_API __declspec(dllimport)
	#endif
#else
	#error Dope Ony Supports Windows
#endif