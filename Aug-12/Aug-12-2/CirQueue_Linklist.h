#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Node.h"
using namespace std;
#define ERROR -9999

class CirQueue
{
	Node *rear, *front;
	Node* CreateNode(int);
public:
	CirQueue();
	CirQueue(int);
	int IsEmpty();
	int IsFull();
	void EnQueue(int);
	int DeQueue();
	void Display();
};


