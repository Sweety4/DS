#include"Tree.h"
void main()
{
	cTree t1;
	int ch;
	int data;
	do
	{
		cout << "\n\n\t\t1.AddNode\
                 \n\t\t2.Display\
                  \n\t\t3.Nonrecrsive Inorder\
                   \n\t\t4.Nonrecrsive Preorder\
                    \n\t\t0.Exit\
                     \n\t Enter your choice :";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter data to insert :";
			cin >> data;
			t1.AddNode(data);
			break;
		case 2:
			t1.Display();
			break;
		case 3:
			t1.NonRecInorder(t1.getRoot());
			break;
		case 4:
			t1.NonRecPreorder(t1.getRoot());
			break;
		default:
			cout << "\n\n \t wrong choice !!!!";
			break;
		}
	} while (ch != 0);
}