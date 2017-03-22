// PlayTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

 class __declspec(dllexport) firstClass {

public:
	int x;
	int fn_1() { return 1; };
};


int main()
{
	firstClass y;

	printf("y.fn_1 = %d", y.fn_1());

    return 0;
}


