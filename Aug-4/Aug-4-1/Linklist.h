#pragma once
#include"Node.h"
class Linklist
{
	Node *head;
public:
	Linklist();
	Node* CreateNode(int);
	void CreatLinkList(int);
	void Display();
};