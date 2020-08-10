#include"Stack.h"
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
void Convert(char *in, char *post)
{
	//cStack s1(20);
	cStack st(strlen(in) + 1);
	int i, j = 0;
	char ch;
	//Step 1
	//Read string character by character
	for (i = 0; in[i] != '\0'; i++)
	{
		//step 2: if character is operand put it into postfix
		if ((in[i] >= 65 && in[i] <= 90) || (in[i] >= 97 && in[i] <= 122))
		{
			post[j++] = in[i];
		}
		//Step 3 if character is '(' push into stack
		else if (in[i] == '(')
		{
			st.push(in[i]);
		}
		//step 4: if character is ')' .. pop all till '('
		else if (in[i] == ')')
		{
			while ((ch = st.pop()) != '(')
			{
				post[j++] = ch;
			}
		}
		//Step 5 : if character is 1st operator or 1st operator after '(' Push
		else if (st.IsEmpty() == 1 || (ch = st.Peek()) == '(')
			st.push(in[i]);
		//Step 6 If character's pri > stack top   ... push
		else if (Priority(in[i]) > Priority(st.Peek()))
			st.push(in[i]);
		//step 7 if character's pri<= stack top.. Pop all and Push character
		else if (Priority(in[i]) <= Priority(st.Peek()))
		{
			while ((Priority(in[i] <= Priority(st.Peek()))) && !st.IsEmpty())
			{
				ch = st.pop();
				post[j++] = ch;
			}
			st.push(in[i]);
		}
	}
	while (!st.IsEmpty())
	{
		ch = st.pop();
		post[j++] = ch;
	}
	post[j] = '\0';

}














