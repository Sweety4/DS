#include"Stack.h"
void main()
{

	char infix[20], post[20];
	cout << "\n\n\t Enter Infix String :";
	cin >> infix;
	Convert(infix, post);
	cout << "\n\n\t Postfix Expression :" << post;
	cout << "\n\n\n";
}