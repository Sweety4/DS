#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#define ERROR -9999

class CirQueue
{
	int size, rear, front;
	int *arr;
public:
	CirQueue();
	CirQueue(int);
	int IsEmpty();
	int IsFull();
	void EnQueue(int);
	int DeQueue();
	void Display();
};

