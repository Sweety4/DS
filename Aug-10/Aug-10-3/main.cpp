#include"Pre_Stack.h"
void main()
{

	char infix[20], pre[20];
	cout << "\n\n\t Enter Infix String :";
	cin >> infix;
	Convert(infix, pre);
	cout << "\n\n\t Prefix Expression :" << pre;
	cout << "\n\n\n";
}