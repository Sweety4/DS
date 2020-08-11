#include"Queue.h"
//#include"Employee.h"
void main()
{
	Queue q1;
	Employee value;
	int ch;
	

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
			cin >> value;
			q1.EnQueue(value);
			break;
		case 2:
		 value = q1.DeQueue();
				cout << "\n\n\t Deleted ele is " << value;
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