#include"Person.h"
#include<stack>
void main()
{
	int n;
	stack <cPerson> st;
	cPerson p;
	cout << "\n\t Enter How many records you want to Enter :";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		p.Accept();
		st.push(p);
	}
	cout << "\n****************** Display Records ****************";
	for (int i = 0; i < st.size(); i++)
		cout << st[i];
	cout << "\n\n";
}