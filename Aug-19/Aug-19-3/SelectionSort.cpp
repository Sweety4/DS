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
void Selection_Sort(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
}
int main()
{
	int arr[] = { 2,4,5,12,44,76,98,7,8,9 };
	int pos;
	Display(arr, 10);
    Selection_Sort(arr, 10);
	Display(arr, 10);

	return 0;
}

