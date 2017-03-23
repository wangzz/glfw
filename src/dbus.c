//========================================================================
// GLFW 3.3 D-Bus - www.glfw.org
//------------------------------------------------------------------------
// Copyright (c) 2002-2006 Marcus Geelnard
// Copyright (c) 2006-2016 Camilla Löwy <elmindreda@glfw.org>
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would
//    be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not
//    be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source
//    distribution.
//
//========================================================================

#include "internal.h"


//////////////////////////////////////////////////////////////////////////
//////                       GLFW internal API                      //////
//////////////////////////////////////////////////////////////////////////

void _glfwInitDBus(void)
{
    _glfw.dbus.handle = dlopen("libdbus-1-3.so", RTLD_LAZY | RTLD_GLOBAL);
    if (!_glfw.dbus.handle)
        return;

}

void _glfwTerminateDBus(void)
{
    if (_glfw.dbus.handle)
        dlclose(_glfw.dbus.handle);
}

void _glfwInhibitScreensaverDBus(void)
{
}

void _glfwDisableScreensaverDBus(void)
{
}

