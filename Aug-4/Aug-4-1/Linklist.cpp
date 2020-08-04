#include"Linklist.h"
Linklist::Linklist()
{
	head = NULL;
}
Node* Linklist:: CreateNode(int data)
{
	Node *record;
	record = new Node;
	record->setData(data);
	record->setNext(NULL);
	return record;
}
void Linklist::CreatLinkList(int terms)
{
	int i, data;
	Node *newnode, *move;
	for (i = 1; i <= terms; i++)
	{
		cout << "\n\n\t Enter Data";
		cin >> data;
		newnode = CreateNode(data);
		if (head == NULL)
			head == newnode;
		else
		{
			move = head;
			while (move->getNext() != NULL)
			{
				move = move->getNext();
			}
			move->setNext(newnode);
		}
	}
}
void Linklist::Display()
{
	Node *move;
	move = head;
	while (move != NULL)
	{
		cout << "\n\n\t" << move << "\t" << move->getData() << "\t" << move->getNext();
		move = move->getNext();
	}
}