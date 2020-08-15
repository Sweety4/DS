#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

#ifndef PER_
#define PER_
class cPerson
{
	char *name, *address;
	int size;
public:
	cPerson();
	cPerson(const char*, const char*);
	~cPerson();

	void Accept();
	void Display();
	friend ostream& operator<<(ostream&, cPerson&);
	/*char &operator[](int i)
	{
		if (i > size) {
			cout << "index out of bound" << endl;

			exit(0);
		}
		return name[i];
		return address[i];

	}*/
};
#endif


