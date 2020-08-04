#pragma once
#include<iostream>
using namespace std;

#ifndef NODE_
#define NODE_
class Node
{
	int data;
	Node *next;
public:
	Node();
	Node(int, Node*);
	int getData();
	Node* getNext();
	void setData(int);
	void setNext(Node*);

};
#endif
