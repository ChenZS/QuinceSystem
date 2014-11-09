#pragma once

#include "QuinceCore.h"

#ifdef QUINCECONTEXT_STATIC
	#define QUINCECONTEXT_DLLAPI
#else
	#ifdef QUINCECONTEXT_EXPORTS
		#define QUINCECONTEXT_DLLAPI __declspec(dllexport)
	#else
		#define QUINCECONTEXT_DLLAPI __declspec(dllimport)
	#endif
#endif