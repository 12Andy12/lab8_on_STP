#pragma once
#include <algorithm>

enum EOporation {
	none,
	add,
	sub,
	mul,
	dvd
};

enum EFunction {
	rev,
	sqr
};

template<class T>
class TProc
{
private:
	int operation = 0;
	T accumulator;
	T parametr;
public:
	TProc();
	void resetProcessor();
	void resetOperation();
	void runOperation();
	void runFunction(int func);
	T getAccumulator();
	T getParametr();
	int getOperation();
	void setAccumulator(T a);
	void setParametr(T a);
	void setOperation(int a);
};

template<class T>
TProc<T>::TProc()
{
	resetProcessor();
}

template<class T>
void TProc<T>::resetProcessor()
{
	operation = none;
	accumulator = T();
	parametr = T();
}

template<class T>
void TProc<T>::resetOperation()
{
	operation = none;
}

template<class T>
void TProc<T>::runOperation()
{
	switch (operation) {
	case none:
		return;
	case add:
		accumulator = accumulator + parametr;
		return;
	case sub:
		accumulator = accumulator - parametr;
		return;
	case mul:
		accumulator = accumulator * parametr;
		return;
	case dvd:
		accumulator = accumulator / parametr;
		return;
	default:
		return;
	}
}

template<class T>
void TProc<T>::runFunction(int func)
{
	switch (func) {
	case rev:
		accumulator = -accumulator;
		return;
	case sqr:
		accumulator = sqrt(accumulator);
		return;
	default:
		return;
	}
}

template<class T>
T TProc<T>::getAccumulator()
{
	return accumulator;
}

template<class T>
T TProc<T>::getParametr()
{
	return parametr;
}

template<class T>
int TProc<T>::getOperation()
{
	return operation;
}

template<class T>
void TProc<T>::setAccumulator(T a)
{
	accumulator = a;
}

template<class T>
void TProc<T>::setParametr(T a)
{
	parametr = a;
}

template<class T>
void TProc<T>::setOperation(int a)
{
	operation = a;
}
