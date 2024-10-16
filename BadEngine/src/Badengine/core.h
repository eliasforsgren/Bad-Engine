#pragma once

#ifdef BE_PLATFORM_WINDOWS
	#ifdef BE_BUILD_DLL
		#define Badengine_API __declspec(dllexport)
	#else
		#define Badengine_API __declspec(dllimport)
	#endif
#endif