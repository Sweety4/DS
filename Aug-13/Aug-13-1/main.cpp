#include"Tree.h"
void main()
{
	cTree t1;
	int ch;
	char data;
	do
	{
		cout << "\n\n\t\t1.AddNode\
                 \n\t\t2.Display\
                \n\t\t0.Exit\
                 \n\t Enter your choice :";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter Charcater to insert :";
			cin >> data;
			t1.AddNode(data);
			break;
		case 2:
			t1.Display();
			break;
		default:
			cout << "\n\n \t wrong choice !!!!";
			break;
		}
	} while (ch != 0);
}