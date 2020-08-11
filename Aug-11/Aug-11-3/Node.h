#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Node
{
	char data;
	Node* next;
public:
	Node();
	void setData(char);
	void setNext(Node*);
	char getData();
	Node* getNext();

};
