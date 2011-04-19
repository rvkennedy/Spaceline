// OrbitalMechanics.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "OrbitalMechanics.h"


// This is an example of an exported variable
ORBITALMECHANICS_API int nOrbitalMechanics=0;

// This is an example of an exported function.
ORBITALMECHANICS_API int fnOrbitalMechanics(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see OrbitalMechanics.h for the class definition
COrbitalMechanics::COrbitalMechanics()
{
	return;
}
