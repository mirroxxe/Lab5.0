#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.0/Lab5.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int a;
            a = mult(5, 7);
            Assert::AreEqual(a, 35);
        }
    };
}