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
void cStack::Push(int)
{
	Node *newnode;
	Book data;
	newnode = CreateNode(data);
	if (top == NULL)
		top = newnode;
	else
	{
		newnode->setNext(top);
		top = newnode;
	}
}
int cStack::pop()
{
	//Book data;
	Book ele ;
	Node *del;
	if (!ISEmpty())
	{
		del = top;
		top = top->getNext();
		ele = del->getData();
		delete del;
	}
	return 22;
}
void cStack::Display()
{
	//Node *move;
	//move = top;
	cout << "\n\n\t ***************stack**************";
	Node *move;
	move = top;
	while (move != NULL)
	{
		cout << "\n\n\t" << move << "\t";
		move->getData().Display();
		cout << "\t" << move->getNext();
		move = move->getNext();
	}
	/*while (move != NULL)
	{
		cout << "\n\n\t" << move->getData();
		move = move->getData();
	}*/
	//for (move = top; move != NULL; move = move->getNext())
		//cout << "\n\t" << move->getData();
}
int cStack::ISEmpty()
{
	if (top == NULL)
		return 1;
	else
		return 0;
}