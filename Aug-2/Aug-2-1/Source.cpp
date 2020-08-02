#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int length(char* s)
{
	int cnt = 0;
	while (*s!='0')
	{
		cnt++;
		s++;
	}
	return cnt;
}
void copy(char* s, char*sp)
{
	while (*s != '\0')
	{
		*sp = *s;
		s++;
		sp++;
	}
	*sp = '\0';
		
}
void Reverse(char* s)
{
	char rev[20];
	int i, j, k;
	for (i = 0; s[i] != '\0'; i++);
	rev[i];
	{
		k = i - 1;
	}
	for (j = 0; j <= i - 1; j++)
	{
		rev[j] = s[k];
		k--;
	}
	rev[j] = '\0';
	cout << "\nReverse string is :" << rev;
}
void strconcat(char* str1, char* str2)
{
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
}
void palindrome(char* str)
{
	char* START = str;
	char* END = str;
	while (*END != '\0')
	{
		END++;
	}
	END--;
	while (START < END)
	{
		if (*START !=*END)
		{
			break;
		}
		START++;
		END--;
	}
	if (START < END)
	{
		cout << "\nString is not palindrome ";
	}
	else
	{
		cout << "\nString is palindrome ";
	}
}
void strCompare(char*src, char*dest)
{
	while ((*src != '\0') && (*dest != '\0'))
	{
		if (*src != *dest)
		{
			break;
		}
		src++;
		dest++;
	}
	if ((*src == '\0') && (*dest == '\0'))
	{
		cout << "\n String are same ";
	}
	else
	{
		cout << "\nString are not same ";
	}

}
int main()
{
	int len;
	char str1[10];
	char str2[10];
	char str3[20]; 
	char str4[20];
	cout << "\nEnter a string :";
	cin >> str1;

	//lenght of string
	len = length(str1);
	cout << "\nLength of string :" << len;

	//copy of string
	copy(str1, str2);
	cout << "\nSecond string is :" << str2;

	//compare string
	strCompare(str1, str2);
	
	//Reverse string
	Reverse(str2);
	cout<<"\nEnter 3rd string :";
	cin >> str3;

	//palindrome

	palindrome(str3);

	//string concatination
	strcpy(str4, str1);
	strcat(str4, " ");
	strcat(str4, str3);
	cout << "\nString After concatination :"<< str4;
	cout << "\n\n";

}