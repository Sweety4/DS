#include<iostream>
#include"Employee.h"
//#define ERROR -9999
using namespace std;

class Queue
{
	Employee *arr;
	int size,rear, front;
	
public:
	Queue();
	Queue(Employee);
	void EnQueue(Employee);
	Employee DeQueue();
	void Display();
	int IsFull();
	int IsEmpty();
	//~Queue();
};

