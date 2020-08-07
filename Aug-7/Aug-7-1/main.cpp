#include"Stack.h"

void main()
{
	cStack s1;
	int ch, data;
	do {
		cout << "\n\n\t\t1.Push\
               \n\t\t2.Pop\
                \n\t\t3.Display\
                 \n\t\t0.Exit\
                  \n\t Enter your choice :";

		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter  data to insert";
			cin >> data;
			s1.Push(data);
			break;
		case 2:
			data = s1.pop();
			if (data == ERROR)
				cout << "\n\n\t Stack is Empty !!!";
			else
				cout << "\n\n\t DEleted data is" << data;
			break;
		case 3:
			s1.Display();
			break;
		default:
			cout << "\n\n Wrong choice !!!";
		}
	} while (ch != 0);
}