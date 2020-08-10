#pragma once
#include<iostream>
#include<stack>
using namespace std;
class cStack
{
	int size, top;
	char *arr;
public:
	cStack();
	cStack(int);
	int IsEmpty();
	int IsFull();
	void push(char);
	char pop();
	char Peek();
	void Display();
	~cStack();
};
int Priority(char*);
void Convert(char*, char*);
