#include "pch.h"
#include "CppUnitTest.h"
#include "../ModernCodingProcessor/TProc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestResetProcessor)
		{
			TProc<int> a;
			a.resetProcessor();
			int result = a.getOperation();
			int expected = none;
			Assert::AreEqual(result, expected);
		}

		TEST_METHOD(TestResetOperation)
		{
			TProc<int> a;
			a.resetOperation();
			int result = a.getOperation();
			int expected = none;
			Assert::AreEqual(result, expected);
		}

		TEST_METHOD(TestAcumulator)
		{
			TProc<int> a;
			a.setAccumulator(5);
			int result = a.getAccumulator();
			int expected = 5;
			Assert::AreEqual(result, expected);
		}

		TEST_METHOD(TesParametr)
		{
			TProc<int> a;
			a.setParametr(5);
			int result = a.getParametr();
			int expected = 5;
			Assert::AreEqual(result, expected);
		}

		TEST_METHOD(TestOperation)
		{
			TProc<int> a;
			a.setOperation(add);
			int result = a.getOperation();
			int expected = add;
			Assert::AreEqual(result, expected);
		}

		TEST_METHOD(TestRev)
		{
			TProc<int> a;
			a.setAccumulator(25);
			
			a.runFunction(rev);
			int result = a.getAccumulator();
			int expected = -25;
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(TestSqr)
		{
			TProc<int> a;
			a.setAccumulator(25);
			a.runFunction(sqr);
			int result = a.getAccumulator();
			int expected = 5;
			Assert::AreEqual(result, expected);
		}

		TEST_METHOD(TestAdd)
		{
			TProc<int> a;
			a.setAccumulator(25);
			a.setParametr(5);
			a.setOperation(add);
			a.runOperation();
			int result = a.getAccumulator();
			int expected = 30;
			Assert::AreEqual(result, expected);
		}

		TEST_METHOD(TestSub)
		{
			TProc<int> a;
			a.setAccumulator(25);
			a.setParametr(5);
			a.setOperation(sub);
			a.runOperation();
			int result = a.getAccumulator();
			int expected = 20;
			Assert::AreEqual(result, expected);
		}

		TEST_METHOD(TestMul)
		{
			TProc<int> a;
			a.setAccumulator(25);
			a.setParametr(5);
			a.setOperation(mul);
			a.runOperation();
			int result = a.getAccumulator();
			int expected = 125;
			Assert::AreEqual(result, expected);
		}

		TEST_METHOD(TestDvd)
		{
			TProc<int> a;
			a.setAccumulator(25);
			a.setParametr(5);
			a.setOperation(dvd);
			a.runOperation();
			int result = a.getAccumulator();
			int expected = 5;
			Assert::AreEqual(result, expected);
		}

		TEST_METHOD(TestNone)
		{
			TProc<int> a;
			a.setAccumulator(25);
			a.setParametr(5);
			a.setOperation(none);
			a.runOperation();
			int result = a.getAccumulator();
			int expected = 25;
			Assert::AreEqual(result, expected);
		}
	};
}
