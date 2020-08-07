#include"Linklist.h"

void main()
{
	int choice, no, data, pos;
	LinkedList list1;

	cout << "\n\n\t Enter Terms: ";
	cin >> no;

	//list1.createLinkedList(no);
	do
	{
		cout << "\n\t1.Add_Begining\
				\n\t2.Add_END\
				\n\t3.Insert\
				\n\t0.Exit\
				\n\t4.Delete_Begining\
				\n\t5.Delete(position)\
				\n\t6.Display\
				\n\t7.Modify\
                \n\t8.Reverse\
                \n\t9.sort\
				\n\t Enter Your Choice ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\n\n\t Enter Data ";
			cin >> data;
			list1.Add_beg(data);
			break;
		case 2:
			cout << "\n\n\t Enter Position and Data ";
			cin >> pos >> data;
			list1.Add_End( data);
			break;
		case 3:
			cout << "\n\n\t Enter Data ";
			cin >> data;
			list1.InsertNode(pos,data);
			break;
		case 4:
			list1.delfirst();
			break;
		case 5:
			cout << "\n\n\t Enter Position to Delete Data ";
			cin >> pos;
			list1.Delete(pos);
			break;
		case 6:
			list1.Display();
			break;
		case 7:
			list1.Modify();
			break;
		case 8:
			list1.Reverse();
			break;
		case 9:
			list1.sort();
			break;
		default:
			break;
		}
	} while (choice != 0);

	cout << "\n\n\n";
}