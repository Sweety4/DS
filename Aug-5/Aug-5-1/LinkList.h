#define _CRT_SECURE_NO_WARNINGS
#include"node.h"
class Linklist
{
	Node *head;
	//Node *createNode(char);
	int countNode();
public:
	Linklist();
	Node *createNode(int);
	void createLinklist(int);
	void add_beg(int);
	void add_mid(int,int);
	void add_end(int);

	void Display();
};