#include"Stack.h"
cStack::cStack()
{
	size = 5;
	top = -1;
	str = new char[size];
}

cStack::cStack(int sz)
{
	size = sz;
	top = -1;
	str = new char[size];
}
int cStack::IsEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}
int cStack::IsFull()
{
	if (top == size - 1)
		return 1;
	else
		return 0;
}
void cStack::Push(char ele)
{
	if (!IsFull())
		str[++top] = ele;
	else
		cout << "\n\n\t stack is Full   !!!";
}
char cStack::pop()
{
	int res, ele = ERROR;
	res = IsEmpty();
	if (res == 0)
	{
		ele = str[top];
		top--;

	}
	return ele;
}
void cStack::Display()
 
{
	//int i;
	cout << "\n\n\t *****************Stack is**********\n";
	for (int i = top; i >= 0; i--)
		cout << "\n\n " << str[i];
	//str[i] = pop();
	//cout << str[i];
}
/*void cStack::Reverse(char str[])
{
	// Create a stack of capacity  
	//equal to length of string  
	int n = strlen(str);
	//Stack* stack = createStack(n);

	// Push all characters of string to stack  
	int i;
	for (i = 0; i < n; i++)
		Push(ele, str[i]);

	// Pop all characters of string and  
	// put them back to str  
	for (i = 0; i < n; i++)
		str[i] = pop(ele);
}*/
