#include"Stack.h"
cStack::cStack()
{
	top = NULL;
}

Node* cStack::CreateNode(Book data)
{
	Node *record;
	record = new Node;
	record -> setData(data);
	record -> setNext(NULL);
	return record;
}
void cStack::Push(Book data)
{
	Node *newnode;
	
	newnode = CreateNode(data);
	if (top == NULL)
		top = newnode;
	else
	{
		newnode->setNext(top);
		top = newnode;
	}
}
Book cStack::pop()
{
	Book ele ;
	Node *del;
	if (!ISEmpty())
	{
		del = top;
		top = top->getNext();
		ele = del->getData();
		delete del;
	}
	return ele;
}
void cStack::Display()
{
	
	cout << "\n\n ================= stack ======================";
	Node *move;
	move = top;
	while (move != NULL)
	{
		cout << "\n\t\t";
		(move->getData().Display());
		move = move->getNext();
	}
	
}
int cStack::ISEmpty()
{
	if (top == NULL)
		return 1;
	else
		return 0;
}