#include"Emp.h"
#include<vector>
void main()
{
	int n;
	vector <Employee> v;
	Employee e;
	cout << "\n\t Enter How many records you want to Enter :";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		e.Accept();
		v.push_back(e);
	}
	cout << "\n****************** Display Records ****************";
	for (int i = 0; i < v.size(); i++)
		cout << v[i];
	cout << "\n\n";
}