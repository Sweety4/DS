#include<iostream>
using namespace std;

void Accept(int a[], int size)
{
	int i;
	cout << "\n\n\n Enter " << size << "Elements";

	for (i = 0; i < size; i++)
		cin >> a[i];
}

void Display(int a[], int size)
{
	int i;
	cout << "\n\n\t*********** Array Is *************\n\n";
	for (i = 0; i < size; i++)
		cout << " " << a[i];

}
void Insertion_Sort(int a[], int n) {
	int i, j, temp;
	for (i = 1; i < n; i++) {
		temp = a[i];
		for (j = i - 1; j >= 0 && a[j] > temp; j--)
			a[j + 1] = a[j];
		a[j + 1] = temp;
	}
}

int main()
{
	int arr[] = { 2,4,5,12,44,76,98,7,8,9 };
	int pos;
	Display(arr, 10);
	Insertion_Sort(arr, 10);
	Display(arr, 10);

	return 0;
}

