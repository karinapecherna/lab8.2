#include "pch.h" 
#include "CppUnitTest.h"
#include <string>
#include <fstream>
#include "../lab8.2/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// Declaration of ProcessTXT1 to test
int ProcessTXT1(char* fname);

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestProcessTXT1_CountsPlusMinusEqualSignsCorrectly)
		{
			// Create a temporary test file
			const char* testFileName = "testfile.txt";
			std::ofstream testFile(testFileName);

			// Write known content with +, -, and = signs
			testFile << "This + is a test - file = with some + signs - and = symbols.\n";
			testFile << "Extra line with + and - and =.\n";
			testFile.close();

			// Expected count of +, -, and = combined
			int expectedCount = 7;

			// Call the function under test
			int actualCount = ProcessTXT1((char*)testFileName);

			// Verify the result
			Assert::AreEqual(expectedCount, actualCount);

			// Clean up test file
			remove(testFileName);
		}
	};
}
