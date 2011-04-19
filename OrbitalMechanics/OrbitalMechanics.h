// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ORBITALMECHANICS_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ORBITALMECHANICS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ORBITALMECHANICS_EXPORTS
#define ORBITALMECHANICS_API __declspec(dllexport)
#else
#define ORBITALMECHANICS_API __declspec(dllimport)
#endif

// This class is exported from the OrbitalMechanics.dll
class ORBITALMECHANICS_API COrbitalMechanics {
public:
	COrbitalMechanics(void);
	// TODO: add your methods here.
};

extern ORBITALMECHANICS_API int nOrbitalMechanics;

ORBITALMECHANICS_API int fnOrbitalMechanics(void);
