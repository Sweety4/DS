#include"Employee.h"
Employee::Employee()
{
	id = 88;
	strcpy(name, " ");
}

Employee::Employee(int i, const char* nm)
{
	id = i;
	strcpy(name, nm);
}

void Employee::Accept()
{
	cout << "\n\n Enter Employee id :";
	cin >> id;
	cout << "\n\t Enter Employee name :";
	cin >> name;

}

void Employee::Display()
{
	cout << "\n\t Employee ID :" << id;
	cout << "\n\t Employee Name :" << name;
}

ostream& operator<<(ostream& out, Employee& e)
{
	out << "\t " << e.id << "\t" << e.name;
	return out;
}

istream& operator>>(istream& in, Employee& e)
{
	cout << "\n\n\t Enter Id and Name";
	in >> e.id >> e.name;
	return in;
}