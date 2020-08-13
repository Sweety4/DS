#include"CirQueue_Linklist.h"

CirQueue::CirQueue()
{
	rear = front = NULL;
}
Node* CirQueue::CreateNode(int data)
{
	Node *record;
	record = new Node();
	record->setData(data);
	record->setNext(NULL);
	return record;
}
int CirQueue::IsEmpty()
{
	if (front == NULL)
	return 1;
	else
	return 0;
}
void CirQueue::EnQueue(int data)
{
	Node* newnode;
	newnode = CreateNode(data);
	if (!IsFull())
	{
		if (front ==-1)
		{
			front = rear = newnode;
		}
		else
		{
			rear = (rear + 1) % size;
			arr[rear] = data;
		}
	}
	else
		cout << "\n\n\t Queue Is Full !!!!";

}

int CirQueue::DeQueue()
{
	Node *del;
	int data = ERROR;
	if (!IsEmpty())
	{
		
		front = (front + 1) % size;
	}
	return data;
}

void CirQueue::Display()
{
	int i;
	if (front == -1)
		cout << "\n\n\t Queue is Empty !!!";
	else
		cout << "\n\n\t ********Queue Is **************\n\n\t<--";
	for (i = front; i != rear; i = (i + 1) % size)
		cout << " " <<data ;
	if (i == rear)
		cout << " " << data << "<--";

}
