#include"CirQueue.h"
int main()
{
	CirQueue q1;
	int data;
	int ch;
	do
	{
		cout << "\n\t\t1.Enqueue\
               \n\t\t2.Dequeue\
                \n\t\t3.Display\
                 \n\t\t0.Exit\
                  \n\t Enter your choice :";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter Data to insert";
			cin >> data;
			q1.EnQueue(data);
			break;
		case 2:
			data = q1.DeQueue();
			if (data == ERROR)
				cout << "\n\n\t Queue is Empty !!!";
			else
				cout << "\n\n\t Delete ele is " << data;
			break;
		case 3:
			q1.Display();
			break;
		}
	} while (ch != 0);
}