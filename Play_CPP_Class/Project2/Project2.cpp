// Project2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "class1.h"


int main()
{
	class1 z;

	int p = z.class1::fn_1();

	printf("z.fn_1 in Project 2 = %d", p);

    return 0;
}

