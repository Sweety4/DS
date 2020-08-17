#include"Stack.h"
#include"Queue.h"

void main()
{
	cStack s1;
	Queue q1;
	int arr[10];
	int n, remainder;

	cout << "Enter 10  number : ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	
	
	remainder = n % 2;

	if (remainder == 0)
		cout << n << " is an even integer " << endl;
	else
		cout << n << " is an odd integer " << endl;

	


}