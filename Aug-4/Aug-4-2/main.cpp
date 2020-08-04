#include"LinkList.h"
void main()
{
	LinkList list1;
	int noofNodes;
	cout << "\n\n\t Enter Number of Nodes";
	cin >> noofNodes;

	list1.CreateLinkList(noofNodes);
	list1.Display();
	cout << "\n\n\n";
}