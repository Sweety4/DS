#include"Linklist.h"

LinkedList::LinkedList()
{
	head = NULL;
}
void LinkedList::Add_beg(int val)
{
	Node *newnode;
	newnode = new Node(val);
	if (head == NULL)
	{
		head = newnode;
		
	}
	else
	{
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}

}
void LinkedList::Add_End(int val)
{
	Node *newnode,*trav;
	newnode = new Node(val);
	if(head == NULL)
	{
		head = newnode;

	}
	else
	{
		trav = head;
		while (trav->next != NULL)
			trav = trav->next;
		trav->next = newnode;
		newnode->prev = trav;
	}
}
void LinkedList::InsertNode(int val,int pos)
{
	Node *newnode, *trav;
	if (head == NULL || pos == 1)
		Add_beg(val);
	else
	{
		newnode = new Node(val);
		trav = head;
		for (int i = 1; i < pos - 1; i++)
			trav = trav->next;
		newnode->next = trav->next;
		newnode->prev = trav;
		if (trav->next != NULL)
			trav->next->prev = newnode;
		trav->next = newnode;
	}

}
void LinkedList::delfirst()
{
	Node *trav=0;
	if (head != NULL)
		trav = head;
	head = head->next;
	delete trav;
	if (head != NULL)
		head->prev = NULL;
}
void LinkedList::Delete(int pos)
{
	Node *trav;
	if (pos == 1 || head == NULL)
		delfirst();
	else
	{
		trav = head;
		for (int i = 1; i < pos; i++)
			trav = trav->next;
		trav->prev->next = trav->next;
		if (trav->next != NULL)
			trav->next->prev = trav->prev;
		delete trav;
	}

}
/*void LinkedList::Display()
{

}*/
void LinkedList::Modify()
{

}
void LinkedList::Reverse()
{
	Node *trav;
	trav = head;
	while (trav->next != NULL)
		trav = trav->next;
	while (trav != NULL)
	{
		cout << trav->data;
		trav = trav->prev;

	}
}
void LinkedList::sort()
{
	Node * temp, *trav;
	int Swap;
	if (head != NULL)
	{
		for (temp = head; temp->next != NULL; temp = temp->next)
		{
			for ( trav= temp->next; trav != NULL; trav = trav->next)
			{
				if (temp->data >trav->data)
				{
					
					Swap = temp->data;;
					temp->data;
					trav->data;
				}
			}
		}
	}
}
/*LinkedList::~LinkedList()
{
	Node *temp = head;
	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next();
			delete temp;
		}
		head = NULL;
		temp = NULL;
	}
}*/

void LinkedList::Display()
{
	Node* trav;
	trav = head;
	while (trav != NULL)
	{
		cout << "\n\n\t " << trav << "\t" << trav->data<< "\t" << trav->next;
		trav = trav->next;
	}
}