#include<iostream>
#define ERROR -9999
using namespace std;

class DQueue
{
	int rear, front;
	int *arr;
	int size;
public:
	DQueue()
	{
		rear = front = -1;
		size = 10;
		arr = new int[size];

	}
	DQueue(int sz)
	{
		rear = front = -1;
		size = sz;
		arr = new int[size];

	}
	int IsFull()
	{
		if ((rear == size - 1) && (front == rear + 1))
			return 1;
		else
			return 0;
	}

	void EnQueueFront(int ele)
	{
		if (!IsFull())
		{
			if (front == -1)
			{
				front = 0;
				rear = 0;
				arr[front] = ele;
			}
			else
			{
				if (front == 0)
					front = size - 1;
				else
					front = front - 1;
				arr[front] = ele;
			}
		}
		else
			cout << "\n\n\t Queue Is Full !!!!";
	}
	void EnQueueRear(int ele)
	{
		if (!IsFull())
		{
			if (front == -1)
			{
				front = 0;
				rear = 0;
				arr[front] = ele;
			}
			else
			{
				rear = rear + 1;
				arr[rear] = ele;
			}
		}
		else
			cout << "\n\n\t Queue Is Full !!!!";
	}
	int IsEmpty()
	{
		if (front == rear)
			return 1;
		else
			return 0;
	}
	int DeQueueFront()
	{
		int ele = ERROR;
		if (!IsEmpty())
		{
			ele = arr[front++];
		}
		if (front == rear)
			front = rear = -1;
		return ele;
	}
	int DeQueueRear()
	{
		int ele = ERROR;
		if (!IsEmpty())
		{
			if (rear == 0)
			{
				ele = arr[rear];
				rear = -1;
					
			}
			ele = arr[rear];
			rear = rear - 1;
		}
		return ele;
	}

	void Display()
	{
		int i;
		cout << "\n\n\t *************** Queue Is *****************\n\n";
		for (i = front; i != rear; i = (i + 1) % size)
			cout << "<---" << arr[i];
		if (i == rear)
			cout << " " << arr[i];
	}

};

void main()
{
	DQueue d1;
	d1.EnQueueFront(10);
	d1.EnQueueFront(20);
	d1.EnQueueRear(30);
	d1.EnQueueRear(40);
	d1.EnQueueFront(50);
	d1.EnQueueFront(60);
	//d1.EnQueueFront(70);
	//d1.EnQueueRear(80);
	//d1.EnQueueRear(90);
	//d1.EnQueueFront(100);


	d1.Display();
	d1.DeQueueFront();
	d1.DeQueueRear();
	d1.Display();
	
	d1.EnQueueRear(130);
	d1.EnQueueFront(140);
	d1.Display();

	d1.EnQueueFront(110);
	d1.EnQueueRear(120);
	d1.Display();
	cout << "\n\n\n";

}