#include<iostream>
#include"Book.h"
#include"Node.h"
using namespace std;
#define ERROR -9999

class cStack
{
	Node *top;
	Node *CreateNode(Book);
public:
	cStack();
	void Push(int);
	int pop();
	void Display();
	int ISEmpty();
	//Node *createNode(Book);


};