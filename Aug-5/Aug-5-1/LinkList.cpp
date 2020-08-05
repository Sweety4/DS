#include"Linklist.h"
Linklist::Linklist()
{
	head = NULL;
}
int Linklist::countNode()
{
	int cnt;
	Node *move = head;
	while (move != NULL)
	{
		cnt++;
		move = move->getNext();
	}
	return cnt;
}
Node *Linklist::createNode(int data)
{
	Node *record;
	record = new Node();
	record->setData(data);
	record->setNext(NULL);
	return record;
}
void Linklist::createLinklist(int no)
{
	int i, data;
	Node *newnode, *move;
	for (int i = 0; i < no; i++)
	{
		cout << "\n\n\t Enter interger data to insert ";
		cin >> data;
		newnode = createNode(data);
		//  check if it is first node or not
		if (head == NULL)
		{
			head = newnode;
			//cout << "\n\n\t ROOT Node Created !! ";
		}
		else
		{
			//link the node to linklist
			move = head;
			while (move->getNext() != NULL)
			{
				move = move->getNext();
			}
			move->setNext(newnode);
			//cout << "\n\t New Node Added !!! ";
		}

	}
}
void Linklist::add_beg(int ch)
{
	Node *newnode;
	newnode = createNode(ch);
	if (head == NULL)
	{
		head = newnode;

		cout << "\n\n\t Newnode Added !!!";
	}
	else
	{
		newnode->setNext(head);
		head = newnode;
	}
}
void Linklist::add_mid(int pos, int ch) 
{
	int i, cnt;
	Node *newnode, *move;
	newnode = createNode(ch);
	if (pos > cnt)
	{
		cout << "\n\n\t Not Allowed";
		return;
	}
	if (pos == 1)
	{
		add_beg(ch);
	}
	else
	{
		move = head;
		for (i = 1; i < pos - 1; i++)
			move = move->getNext();
		newnode->setNext(move->getNext());
		move->setNext(newnode);
	}

}
void Linklist::add_end(int no)
{
	int i, data;
	Node *newnode, *move;
	for (int i = 0; i < no; i++)
	{
		cout << "\n\n\t Enter interger data to insert ";
		cin >> data;
		newnode = createNode(data);
		//  check if it is first node or not
		if (head == NULL)
		{
			head = newnode;
			//cout << "\n\n\t ROOT Node Created !! ";
		}
		else
		{
			//link the node to linklist
			move = head;
			while (move->getNext() != NULL)
			{
				move = move->getNext();
			}
			move->setNext(newnode);
			//cout << "\n\t New Node Added !!! ";
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