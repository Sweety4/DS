#include<iostream>
//#define ERROR -9999
using namespace std;

class Queue
{
	int *arr;
	int size, rear, front;

public:
	Queue();
	Queue(int);
	void EnQueue(int);
	int DeQueue();
	void Display();
	int IsFull();
	int IsEmpty();
	//~Queue();
};
