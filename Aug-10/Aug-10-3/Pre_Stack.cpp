#include"Pre_Stack.h"
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
void cStack::push(char ele)
{
	char res;
	res = IsFull();
	if (res == 0)
	{
		top++;
		arr[top] = ele;
	}
	else
		cout << "\n\n\t Stack Is full !!! ";
}
char cStack::Peek()
{
	return arr[top];
}

char cStack::pop()
{
	char ele = -9999;
	int res;
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
	cout << "\n\n\t *********** Stack Is **********\n";
	for (int i = top; i >= 0; i--)
		cout << "\n\  " << arr[i];

}
cStack::~cStack()
{
	delete[]arr;
}
int Priority(char ch)
{
	switch (ch)
	{
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
	case '%':
		return 2;
	}
}

void Convert(char *in, char *pre)
{
  cStack st(strlen(in) + 1);
   int i, j = 0;
  char ch;
  //reverse(in.begin(), in.end());

  for (int i = 0; in[i] != '\0'; i++) {
	if (in[i] == '(') {
		in[i] = ')';
	}
	else if (in[i] == ')') {
		in[i] = '(';
	}
  }
  for (int i = 0; in[i] != '\0'; i++) {
	if ((in[i] >= 'a' && in[i] <= 'z') || (in[i] >= 'A' && in[i] <= 'Z')) {
		pre += ch;
	}
	else if (in[i] == '(') {
		st.push(in[i]);
	}
	else if (in[i] == ')') {
		while ((st.Peek() != '(') && (!st.IsEmpty())) {
			pre += ch;
			st.pop();
		}

		if (st.Peek == '(') {
			st.pop();
		}
	}
	else if (Priority(in[i])) {
		if (st.IsEmpty()) {
			st.push(in[i]);
		}
		else {
			if (Priority(in[i]) > Priority(st.Peek())) {
				st.push(in[i]);
			}
			else if ((Priority(in[i]) == Priority(st.Peek()))
				&& (in[i] == '^')) {
				while ((Priority(in[i]) == Priority(st.Peek()))
					&& (in[i] == '^')) {
					pre += ch;
					st.pop();
				}
				st.push(in[i]);
			}
			else if (Priority(in[i]) == Priority(st.Peek())) {
				st.push(in[i]);
			}
			else {
				while ((!st.IsEmpty()) && (Priority(in[i]) < Priority(st.Peek()))) {
					pre += ch;
					st.pop();
				}
				st.push(in[i]);
			}
		}
	}
  }

   while (!st.IsEmpty()) {
	   pre += ch;
	st.pop();
   }

  //reverse(ch.begin(), ch.end());
  //return ch;
}















