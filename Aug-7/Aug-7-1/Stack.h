#include<iostream>
using namespace std;
#define ERROR -9999
class cStack
{
	int size, top;
	int *arr;
public:
	cStack();
	cStack(int);
	int IsEmpty();
	int IsFull();
	void Push(int);
	int pop();
	void Display();

};

