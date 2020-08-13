#include"PriQueue.h"
Data::Data()
{
	ele = pri = 0;
}
Data::Data(int e, int p)
{
	ele = e;
	pri = p;
}
void Data::setEle(int e)
{
	this->ele = e;
}
void Data::setPri(int p)
{
	this->pri = p;
}
int Data::getEle()
{
	return ele;
}
int Data::getPri()
{
	return pri;
}
PriQueue::PriQueue()
{
  size = 5;
}
PriQueue::PriQueue(int sz)
{
	size = sz;
}
void PriQueue::EnQueue(Data data)
{
	int cnt, i, j;
	Data temp;
	if (!IsFull())
	{
		if (rear == -1)
		{
			rear = front = 0;
		}
		else
		{
			rear = rear + 1;
			arr[rear] = data;
			cnt = rear;
			for (i = 0; i < cnt; i++)
			{
				for (j = 0; j < cnt - i; j++)
				{
					if (arr[j].getPri() > arr[j + 1].getPri())
					{
						temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;

					}
				}
			}

		}

	}
	else
		cout << "\n\n\t Queue Is Full !!!!";
 
}
Data PriQueue::DeQueue()
{
	Data ele;
	if (!IsEmpty())
	{
		ele = arr[front];
		front = front + 1;
	}
	return ele;

}
int PriQueue::IsEmpty()
{
	if (front == -1)
		return 1;
	else
		return 0;
}
int PriQueue::IsFull()
{
	if (rear==size -1)
		return 1;
	else
		return 0;

}
void PriQueue::Display()
{
	int i;
	cout << "\n\n\t ************Queue Is**************\n\n\n";
	for (i = front; i <= rear; i++)
		cout << "\t" << arr[i].getEle();
	cout << "\n";
	for (i = front; i <= rear; i++)
		cout << "\t" << arr[i].getPri();
}