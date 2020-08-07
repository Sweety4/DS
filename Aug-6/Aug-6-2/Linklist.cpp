#include"Linklist.h"

LinkedList::LinkedList()
{
	head = NULL;
}

Node* LinkedList::createNode(int data)
{
	Node* record;
	record = new Node;
	record->setData(data);
	record->setNext(NULL);
	return record;
}

void LinkedList::createLinkedList(int terms)
{
	int i, data;
	for (i = 0; i < terms; i++)
	{
		cout << "\n\n\t Enter Data ";
		cin >> data;
		Add_End(data);
	}
}

void LinkedList::Add_Beg(int data)
{
	Node* newNode;
	newNode = createNode(data);
	if (head == NULL)
	{
		head = newNode;
		head->setNext(head);
		cout << "\n\n\t New Node Added";
	}
	else
	{
		newNode->setNext(head);
		Node *trav = head;
		while (trav->getNext() != head)
			trav = trav->getNext();
		trav->setNext(newNode);
		head = newNode;
	}
}

void LinkedList::Add_Mid(int pos, int data)
{
	int cnt = countNode();
	cout << "***CNT****" << cnt;
	Node* newnode, *trav;
	if (pos == cnt + 1)
		Add_End(data);

	if (pos>cnt)
	{
		cout << "\n\n\t Not Allowed ";
		return;
	}
	if (pos == 1)
	{
		Add_Beg(data);
	}
	else
	{
		newnode = createNode(data);
		trav = head;
		for (int i = 1; i < pos - 1; i++)
			trav = trav->getNext();
		newnode->setNext(trav->getNext());
		trav->setNext(newnode);
	}
	cout << "***POS****" << pos;
}
ostream & operator << (ostream &o, LinkedList &s)
{
	Node *temp = s.getHead();
	if (s.getHead() == NULL)
		o << "\n\t*************Linked list is empty*************\n";
	else
	{
		cout << "\n\n\tLinked List::\n";
		while (temp != NULL)
		{
			o << "" << temp->getData() << "->";
			temp = temp->getNext();
		}
		o << "NULL\n\n";
	}
	return o;
}
void LinkedList::Add_End(int data)
{
	Node* newnode, *trav;
	newnode = createNode(data);

	if (head == NULL)
	{
		head = newnode;
		head->setNext(head);
		cout << "\n\n\t New Node Added";
	}
	else
	{
	  trav = head;
		while (trav->getNext() != head)
			trav = trav->getNext();
		trav->setNext(newnode);
		newnode->setNext(head);
	}
}

void LinkedList::delete_Beg()
{
	Node *trav, *del;
	del = head;
	trav= head;
	while (trav->getNext() != head)
		trav = trav->getNext();
	head = head->getNext();
	trav->setNext(head);
}
void LinkedList::delete_Mid(int pos)
{
	Node *trav, *del;
	int cnt = countNode();

	if (pos == 1)
		delete_Beg();
	else if (pos == cnt)
		delete_End();
	else
	{
		trav = head;
		for (int i = 0; i < pos - 1; i++)
			trav = trav->getNext();
		del = trav->getNext();
		trav->setNext(del->getNext());
		delete del;
	}
}
void LinkedList::delete_End()
{
	int pos = countNode();
	Node *trav, *del;
	trav = head;
	for (int i = 1; i < pos - 1; i++)
		trav = trav->getNext();

	del = trav->getNext();
	trav->setNext(head);
	delete del;
}

int LinkedList::countNode()
{
	int cnt = 0;
	Node *trav;
	trav = head;
	while (trav->getNext() != head)
	{
		cnt++;
		trav = trav->getNext();
	}
	return cnt + 1;
}

void LinkedList::Display()
{
	Node *trav;
	trav = head;
	while (trav->getNext() != head)
	{
		cout << "\n\n\t " << trav << "\t" << trav->getData() << "\t" << trav->getNext();
		trav = trav->getNext();
	}
	if (trav->getNext() == head)
		cout << "\n\n\t " << trav << "\t" << trav->getData() << "\t" << trav->getNext();

}