#include"Linklist.h"
void main()
{
	Linklist list1;
	int noofNodes;
	cout << "\n\n\t Enter Number of Nodes";
	cin >> noofNodes;

	list1.CreatLinkList(noofNodes);
	list1.Display();
	cout << "\n\n\n";
}