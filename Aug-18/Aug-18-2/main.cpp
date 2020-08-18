#include"TBST.h"

void main()
{
	int ch, ele;
	Node *root = NULL;
	ThreadBinaryTree t1;
	do
	{
		cout << "\n\n\t\t1. Add Node\
                \n\t\t2.Inorder\
                 \n\t\t3.Preorder\
                  \n\t\t4.Display\
                   \n\t\t0,Exit\
                    \n\t Enter Your choice :";

		cin >> ch;
		switch(ch)
		{
		case 1:
			cout << "\n Enter the element";
			cin >> ele;
			t1.AddNode(ele);
			break;
		case 2:
			t1.Inorder(t1.getRoot());
			break;
		case 3:
			t1.Preorder(t1.getRoot());
			break;
		case 4:
			//t1.Display();
		default:
			cout << "\n\t Wrong choice !!!!";
			break;
		}

	} while (ch != 0);
}