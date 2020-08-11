#include<iostream>
#include"Node.h"
using namespace std;

class Queue
{
	Node *rear,*front;
	Node* CreateNode(char);
public:
	Queue();
	void EnQueue(char);
	char DeQueue();
	void Display();
	int IsEmpty();
};
