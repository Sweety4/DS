#include<iostream>
using namespace std;

class Data
{
	int ele;
	int pri;
public:
	Data();
	Data(int, int);
	void setEle(int);
	void setPri(int);
	int getEle();
	int getPri();
};

class PriQueue
{
	int rear, front;
	int size;
	Data *arr;
public:
	PriQueue();
	PriQueue(int);
	void EnQueue(Data);
	Data DeQueue();
	int IsEmpty();
	int IsFull();
	void Display();
};