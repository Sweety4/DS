#pragma once
#include<iostream>
using namespace std;

#ifndef NODE_
#define NODE_
class Node
{
	int data;
	Node *next,*prev;
public:
	Node();
	Node(int);
	friend class LinkedList;
	
};
#endif

