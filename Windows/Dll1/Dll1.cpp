// Dll1.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "Dll1.h"


// This is an example of an exported variable
game_API int ngame =0;

// This is an example of an exported function.
game_API int fngame(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDll1::CDll1()
{
    return;
}
