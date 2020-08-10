#include"Stack.h"
void main()
{
	cStack s1;
	int ele, ch;
	do {
		cout << "\n\n\t\t1. Push\
               \n\t\t2. Pop\
                \n\t\t3.Display\
                 \n\t\t0.Exit\
                  \n\t Enter your choice :";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter data to insert ";
			cin >> ele;
			s1.Push(ele);
		case 2:
			ele = s1.pop();
			if (ele == ERROR)
				cout << "\n\n\t Stack is empty !!!";
			else
				cout << "\n\n\t Deleted ele is " << ele;
			break;
		case 3:
			s1.Display();

		default:
			cout << "\n\n wrong choice !!!";
		}

	} while (ch != 0);
}