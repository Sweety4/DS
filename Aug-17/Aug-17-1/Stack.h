#include<iostream>
using namespace std;
#include<string.h>
#define ERROR -9999
class cStack
{
	int size, top;
	char *str;
public:
	cStack();
	cStack(int);
	int IsEmpty();
	int IsFull();
	void Push(char);
	char pop();
	void Display();
	void Reverse(char str[]);

};
