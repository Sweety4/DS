#include<iostream>
#include<stack>
using namespace std;

void Reverse(char str[], int n)
{
	stack<char>st;
	for (int i = 0; i < n; i++)
	{
		st.push(str[i]);
	}
	for (int i = 0; i < n; i++)
	{
		str[i] = st.top();
		st.pop();
	}
}

void main()
{
	char str[30];
	cout << "\n\n Enter a String :";
	cin >> str;
	Reverse(str, strlen(str));
	cout << "\n\t Reverse string is :" << str;
	cout << "\n\n";
}