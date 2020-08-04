#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Employee.h"
using namespace std;

class Node
{
	Employee data;
	Node *next;
public:
	Node();

	void nodeDisplay();
	
	void setData(Employee);
	void setNext(Node*);
	
	Employee getData();
	Node* getNext();
};