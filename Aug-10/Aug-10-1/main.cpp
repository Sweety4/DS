#include"Stack.h"
void main()
{
	cStack s1;
	int ch;
	Book value;

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
			cout << "\n\n\t Enter data to push ";
			cin >> value;
			s1.Push(value);
			break;
		case 2:
			value = s1.pop();
				cout << "\n\n\t Poped ele is " << value;
			break;
		case 3:
			s1.Display();
			break;
		default:
			cout << "\n\n wrong choice !!!";
		}

	} while (ch != 0);
}