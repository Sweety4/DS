#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cNode
{
	int data;
	cNode *left, *right;
public:
	cNode();
	void setData(int);
	void setLeft(cNode*);
	void setRight(cNode*);
	int getData();
	cNode* getLeft();
	cNode* getRight();
};