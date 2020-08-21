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
void Merge_Sort(int a[], int left, int right) {
	
	if (left >= right)
		return;
	
	int m = (left + right) / 2;
	
	Merge_Sort(a, left, m);
	Merge_Sort(a, m + 1, right);
	
	int n = right - left + 1;
	int* temp = new int[n]; 
	int i = left, j = m + 1, k = 0;
	while (i <= m && j <= right)
		temp[k++] = a[i] < a[j] ? a[i++] : a[j++];
	while (i <= m)
		temp[k++] = a[i++];
	while (j <= right)
		temp[k++] = a[j++];
	
	for (i = 0; i < n; i++)
		a[left + i] = temp[i];
	delete[] temp;
}

int main() {
	int arr[9] = { 6, 3, 9, 1, 7, 2, 8, 4, 5 };
	Merge_Sort(arr, 0, 9 - 1);
	for (int i = 0; i < 9; i++)
		cout << arr[i] << ", ";
	cout << endl;
	return 0;
}