#include"LinkList.h"
LinkList::LinkList()
{
	head = NULL;
}
Node *LinkList::CreateNode(Employee data)
{
	Node *record;
	record = new Node;
	record->setData(data);
	record->setNext(NULL);
	return record;
}
void LinkList::CreateLinkList(int terms)
{
	int i;
	Employee data;
	Node *newnode, *move;
	for (i = 1; i <= terms; i++)
	{
		cout << "\n\n\t Enter Employee Data";
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
void LinkList::Display()
{
	Node *move;
	move = head;
	while (move != NULL)
	{
		cout << "\n\n\t" << move << "\t";
		move->getData().Display();
		cout<< "\t" << move->getNext();
		move = move->getNext();
	}
}