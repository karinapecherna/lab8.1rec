#define _CRT_SECURE_NO_WARNINGS

#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1.rec/FileName.cpp"
#include <assert.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{ {
                char str1[] = "OGAGOAGA"; 
                char dest1[151] = { 0 };  
                char* result1 = Change(dest1, str1, dest1, 0); 
                assert (result1, "**G**GA");  

                char str2[] = "XXXOGOYYYAGA"; 
                char dest2[151] = { 0 };
                char* result2 = Change(dest2, str2, dest2, 0);
                assert(result2, "XXX**YYY**");

                char str3[] = "XYZ";  
                char dest3[151] = { 0 };
                char* result3 = Change(dest3, str3, dest3, 0);
                assert(result3, "XYZ");
            }

		}
	};
}
