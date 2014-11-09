#pragma once

#ifdef QUINCECORE_STATIC
	#define QUINCECORE_DLLAPI
#else
	#ifdef QUINCECORE_EXPORTS
		#define QUINCECORE_DLLAPI __declspec(dllexport)
	#else
		#define QUINCECORE_DLLAPI __declspec(dllimport)
	#endif
#endif