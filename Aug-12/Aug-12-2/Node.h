#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Node
{
	int data;
	Node* next;
public:
	Node();
	void setData(int);
	void setNext(Node*);
	int getData();
	Node* getNext();

};

