#include"CirQueue.h"
CirQueue::CirQueue()
{
	size = 5;
	rear = front = -1;
	arr = new int[size];
}
CirQueue::CirQueue(int sz)
{
	size = sz;
	rear = front = -1;
	arr = new int[size];

}
int CirQueue::IsEmpty()
{
	if (rear == -1 && front == -1)
		return 1;
	else
		return 0;
}
int CirQueue::IsFull()
{
	if (front == (rear + 1) % size)
		return 1;
	else
		return 0;
}
void CirQueue::EnQueue(int data)
{
	if (!IsFull())
	{
		if (front == -1)
		{
			front = 0;
			rear = 0;
			arr[rear] = data;
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
	int data = ERROR;
	if (!IsEmpty())
	{
		data = arr[front];
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
		cout << " " << arr[i];
	if (i == rear)
		cout << " " << arr[i]<<"<--";

}