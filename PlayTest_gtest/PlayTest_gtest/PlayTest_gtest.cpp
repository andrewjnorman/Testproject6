// PlayTest_gtest.cpp : Defines the entry point for the console application.

//Moved Github repo to TestProject6
#include "stdafx.h"
#include <gtest/gtest.h>

static int x = 1;

TEST(MyTest, FirstTests)
{
	EXPECT_EQ(2, x);
}

int main(int argc, char* argv[])
{

	testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}

