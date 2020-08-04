#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include"Node.h"
class LinkList
{
	Node* head;
public:
	LinkList();
	Node *CreateNode(Employee);
	void CreateLinkList(int);
	void Display();
};
