#include"Pre_Stack.h"

void main()
{
	char infix[20], pre[30];
	cout << "\n\n\t Enter Infix Expression ";
	cin >> infix;
	Convert_Infix_Pre(infix, pre);
	cout << "\n\n\t Prefix : " << pre;
	cout << "\n\n\n";

}