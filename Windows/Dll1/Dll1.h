// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DLL1_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DLL1_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef game_EXPORTS
#define game_API __declspec(dllexport)
#else
#define game_API __declspec(dllimport)
#endif

// This class is exported from the dll
class game_API CDll1 {
public:
	CDll1(void);
	// TODO: add your methods here.
};

extern game_API int nDll1;

game_API int fngame(void);
