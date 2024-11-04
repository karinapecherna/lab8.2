#include "pch.h" 
#include "CppUnitTest.h"
#include <string>
#include "../lab8.2/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace WordFinderTests
{
    TEST_CLASS(WordFinderTests)
    {
    public:
        TEST_METHOD(TestFindFirstWordWithA_Iterative)
        {
           
            struct TestCase {
                std::string input;
                std::string expected;
            };

            TestCase testCases[] = {
                { "apple banana apricot", "apple" },
                { "banana apple apricot", "apple" },
                { "hello world", "" },
                { "grape orange", "" },
                { "a big apple is here", "a" },
                { "", "" },
                { " a", "a" }
            };

            for (const auto& testCase : testCases) {
                std::string result = FindFirstWordWithA_Iterative(testCase.input);
                Assert::AreEqual(testCase.expected, result);
            }
        }
    };
}

