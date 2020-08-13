#include<iostream>
using namespace std;

void q_sort(int numbers[], int left, int right)
{
	int pivot, l_hold, r_hold;
	l_hold = left;
	r_hold = right;
	pivot = numbers[left];
	
	while (left < right);
	{
		while ((numbers[right] > pivot) && (left < right))
			right--;
		if (left != right)
		{
			numbers[left] = numbers[right];
			left++;
		}
		while ((numbers[left] > pivot) && (left < right))
			left++;
		if (left != right)
		{
			numbers[right] = numbers[left];
			right--;
		}

	}
	numbers[left] = pivot;
	if (l_hold < left)
		q_sort(numbers, l_hold, left - 1);

	if (r_hold > left)
		q_sort(numbers, right + 1, r_hold);
}

void Quick_Sort(int number[], int array_size)
{
	q_sort(number, 0, array_size - 1);
}

void main()
{
	int arr[10];
	int i;
	cout << "\n\n\t Enter 10 elements :";
	for (i = 0; i < 10; i++)
		cin >> arr[i];
	cout << "\n\n\t ************* Array Is *************\n\n\n";
	for (i = 0; i < 10; i++)
		cout << " "<<arr[i];
	Quick_Sort(arr, 10);
	cout << "\n\n\t*********** Array Is ******************\n\n\n";
	for (i = 0; i < 10; i++)
		cout << " " << arr[i];
	cout << "\n\n\n";

}