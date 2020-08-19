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

int Linear_Search(int a[], int n, int key) {
	int i;
	for (i = 0; i < n; i++) {
		if (a[i] == key)
			return i;
	}
	return -1;
}


int main()
{
	int arr[] = { 2,4,5,7,8,9,12,44,76,98 };
	int pos;
	Display(arr, 10);

	pos= Linear_Search(arr, 10, 44);

	if (pos == -1)
	cout << "\n\n\t Element not found" << endl;
	else
	cout << "\n\n\t Element found at Position " << pos << endl;
	return 0;

	cout << "\n\n";


}
 