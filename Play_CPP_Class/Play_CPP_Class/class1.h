#pragma once

#if defined(Play_CPP_Class_EXPORT) // inside DLL
#   define XYZAPI   __declspec(dllexport)
#else // outside DLL
#   define XYZAPI   __declspec(dllimport)
#endif  // XYZLIBRARY_EXPORT

class XYZAPI class1
{
public:
	class1();
	~class1();

	int x;

	int fn_1(void);
};

