#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/lab5.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest2
{
 TEST_CLASS(UnitTest2)
    {
        public:

        TEST_METHOD(TestMethod1)
        {
            int t;
            t = sum(2, 3);
            Assert::AreEqual(t, 5);
        }
    };
}