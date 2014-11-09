#pragma once

#include "QuinceCore.h"

#ifdef QUINCEDOC_STATIC
	#define QUINCEDOC_DLLAPI
#else
	#ifdef QUINCEDOC_EXPORTS
		#define QUINCEDOC_DLLAPI __declspec(dllexport)
	#else
		#define QUINCEDOC_DLLAPI __declspec(dllimport)
	#endif
#endif