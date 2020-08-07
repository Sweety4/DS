#pragma once
#include"Node.h"

#ifndef LL_
#define LL_

class LinkedList
{
	Node *head;
public:
	LinkedList();
	void Add_beg(int);
	void Add_End(int);
	void InsertNode(int,int);
	void delfirst();
	void Delete(int);
	void Display();
	void Modify();
	void Reverse();
	void sort();
	
	
	//~LinkedList();
};
#endif

