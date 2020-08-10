#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
#ifndef Book_
#define Book_
class Book
{
private:
	static int cnt;
	int BookNo;
	char B_name[20];
	float price;
public:
	//constuctors
	Book();
	Book(const char*, float);

	void Accept();
	void Display();

	void setPrice(float);
	float getPrice();

	friend ostream& operator<<(ostream&, Book&);

	friend istream& operator>>(istream&, Book&);


};
#endif //!Book_