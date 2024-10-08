#include "pch.h"

#include "CppUnitTest.h"
#include "../main.cpp/main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
  TEST_CLASS(UnitTest1)
  {
  public:
    
    TEST_METHOD(TestMethod1)
    {
      double result, expected;
      result = g(2, 3);
      expected = (sin(2) * sin(2) + (cos(3) + cos(3))) / (1 + fabs(2 * 3));
      Assert::AreEqual(expected, result);
    }
  };
}