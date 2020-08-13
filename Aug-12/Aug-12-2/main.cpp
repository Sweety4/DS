#include"CirQueue_Linklist.h"
void main()
{
	int ele;
	int ch;
	CirQueue q1;

	do {
		cout << "\n\n\t\t1.EnQueue\
              \n\t\t2.Dequeue\
               \n\t\t3.Display\
                \n\t\t0.Exit\
                 \n\t Enter your choice :";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter data to insert ";
			cin >> ele;
			q1.EnQueue(ele);
			break;
		case 2:
			ele = q1.DeQueue();
			if (ele == -9999)
				cout << "\n\n\t Queue is Empty !!!";
			else
				cout << "\n\n\t Deleted ele is " << ele;
			break;
		case 3:
			q1.Display();
			break;
		default:
			cout << "\n\n\t Invalid choice !!!";
			break;
		}
	} while (ch != 0);
}