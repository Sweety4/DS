#include"Queue.h"
Queue::Queue()
{
	size = 5;
	arr = new int[size];
	rear = front = -1;
}
Queue::Queue(int ch)
{
	size = 5;
	arr = new int[size];
	rear = front = -1;
}
int Queue::IsFull()
{
	if (rear == size - 1)
		return 1;
	else
		return 0;
}

int Queue::IsEmpty()
{
	if (front == rear)
		return 1;
	else
		return 0;
}
void Queue::EnQueue(int ch)
{
	if (!IsFull())
	{
		rear++;
		arr[rear] = ch;
	}
	else
		cout << "\n\n\t Queue is Full !!!!";

}
int Queue::DeQueue()
{
	int ele;
	if (!IsEmpty())
	{
		front++;
		ele = arr[front];
	}
	return ele;
}
void Queue::Display()
{
	cout << "\n\t <--";

	for (int i = front + 1; i <= rear; i++)
	{
		cout << " " << arr[i];
	}
	cout << "\t <--";

}