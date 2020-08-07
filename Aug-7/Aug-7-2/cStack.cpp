#include"cStack.h"
cStack::cStack()
{
	size = 5;
	top = -1;
	arr = new char[size];
}

cStack::cStack(int sz)
{
	size = sz;
	top = -1;
	arr = new char[size];
}
char cStack::IsEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}
char cStack::IsFull()
{
	if (top == size - 1)
		return 1;
	else
		return 0;
}
void cStack::Push(char ele)
{
	if (!IsFull())
		arr[++top] = ele;
	else
		cout << "\n\n\t stack is Full   !!!";
}
int cStack::pop()
{
	char res, ele = ERROR;
	res = IsEmpty();
	if (res == 0)
	{
		ele = arr[top];
		top--;
	}
	return ele;
}
void cStack::Display()
{
	cout << "\n\n\t *****************Stack is**********\n";
	for (int i = top; i >= 0; i--)
		cout << "\n\n " << arr[i];

}

