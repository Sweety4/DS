#include"Stack.h"

void main()
{
	cStack s1;
	int ch;
	char str;
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
			cout << "\n\n\t Enter  string to insert";
			cin >> str;
			s1.Push(str);
			break;
		case 2:
			str = s1.pop();
			if (str == ERROR)
				cout << "\n\n\t Stack is Empty !!!";
			else
				cout << "\n\n\t DEleted data is" << str;
			str = s1.pop();
			cout << str;
			break;
		case 3:
			s1.Display();
			break;
		default:
			cout << "\n\n Wrong choice !!!";
		}
	} while (ch != 0);
}