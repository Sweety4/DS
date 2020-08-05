#include"linklist.h"
int main()
{
	int ch, choice, pos;
	Linklist list1;
	int no;
	cout << "\n\n\t Enter Number of node for linklist ";
	cin >> no;
	list1.createLinklist(no);
	//list1.Display();
	do
	{
		cout << "\n\n\t1.add_beg\
                 \n\n\t2.add_mid\
                 \n\t3.add_end\
                 \n\t4.Display\
                   \n\t0.Exit\
                    \n\t Enter your choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\n\n\t Enter data :";
			cin >> ch;
			list1.add_beg(ch);
			break;
		case 2:
			cout << "\n\n\t Enter data and position :";
			cin >> ch >> pos;
			list1.add_mid(pos,ch);
			break;
		case 3:
			cout << "\n\n\t Enter data :";
			cin >> ch;
			list1.add_end(ch);
			break;
		case 4:
			list1.Display();
		default:
			cout << "\n\n\t wromg choice !!!!!!";
		}
		
	} while (choice != 0);
	cout << "\n\n\t";

}