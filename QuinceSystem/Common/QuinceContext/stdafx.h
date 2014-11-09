#pragma once

#define QUINCECONTEXT_EXPORTS

#ifndef WINVER				// Allow use of features specific to Windows XP or later.
#define WINVER 0x0501		// Change this to the appropriate value to target other versions of Windows.
#endif

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions

#include <GL/freeglut.h>
#include "Common/Common.h"
#include "QuinceContext.h"