#include"Book.h"
#include<iostream>
using namespace std;
class Node
{
	Book data;
	Node *next;
public:
	Node();
	void setData(Book);
	void setNext(Node*);
	Book getData();
	Node* getNext();
	

};
