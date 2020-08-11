#include"Queue.h"
Queue::Queue()
{
	rear = front = NULL;
}
Node* Queue::CreateNode(char ch)
{
	Node *record;
	record = new Node();
	record->setData(ch);
	record->setNext(NULL);
	return record;
}
void Queue::EnQueue(char ch)
{
	Node *newnode;
	newnode = CreateNode(ch);
	if (rear == NULL)
	{
		rear = front = newnode;
	}
	else
	{
		rear->setNext(newnode);
		rear = newnode;
	}
}
char Queue::DeQueue()
{
	Node *del;
	char ele = -9999;
	if (!IsEmpty())
	{
		del = front;
		front = front->getNext();
		ele = del->getData();
		delete del;
	}
	return ele;
}
void Queue::Display()
{
	cout << "\n\n\t <--";
	Node *move;
	move = front;
	while (move != NULL)
	{
		cout << " " << move->getData();
		move = move->getNext();
	}
	cout << " <--";

}
int Queue::IsEmpty()
{
	if (front == NULL)
		return 1;
	else
		return 0;
}