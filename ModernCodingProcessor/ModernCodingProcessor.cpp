#include <iostream>
#include "TProc.h"

int main()
{
	TProc<int> a;
	a.setAccumulator(25);
	a.setParametr(5);
	a.setOperation(sub);
	a.runOperation();
	int result = a.getAccumulator();
	int expected = 20;
}
