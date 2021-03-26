#pragma once

#ifdef MS_PLATFORM_WINDOWS
	#ifdef MS_BUILD_DLL
		#define MOSS_API __declspec(dllexport)
	#else
		#define MOSS_API __declspec(dllimport)
	#endif
#else
	#error Moss only support Windows!
#endif