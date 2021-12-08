#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_13.1\Lab_13.1\Source.cpp"
#include "C:\Users\LEGION\source\repos\Lab_13.1\Lab_13.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsVar;


namespace UnitTestlab131
{
    TEST_CLASS(UnitTestlab131)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            a = 3;
            x = 2;
            n = 1;
            dod();
            Assert::AreEqual(a, 0.);
        }
    };
}
