#include"Stack.h"
#include"Queue.h"

void main()
{
	cStack s1;
	Queue q1;
	int arr[10];
	
	cout << "Enter 10  numbers : ";
	for (int i = 0; i < 10; i++)
	{
		
		cin >> arr[i];
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << " " << arr[i];
	}
	
	for (int i = 0; i < 10; i++)
	{

		if (arr[i] % 2 == 0)
		{
			//cout << " is an even integer " << endl;
			s1.Push(arr[i]);
		}
		else

			//cout << " is an odd integer " << endl;
			q1.EnQueue(arr[i]);

	}
	s1.Display();
	q1.Display();
	cout << "\n\n";

}