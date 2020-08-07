#include"Node.h"

#ifndef LL_
#define LL_

class LinkedList
{
	Node* head;
public:
	LinkedList();
	Node* getHead()
	{
		return head;
	}
	void createLinkedList(int);
	Node* createNode(int);
	
	int countNode();
	void Add_Beg(int);
	void Add_Mid(int, int);
	void Add_End(int);

	void delete_End();
	void delete_Mid(int);
	void delete_Beg();
	void Display();
	
	void printReverse();
};
#endif


