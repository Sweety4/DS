#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cNode
{
	char data;
	cNode *left, *right;
public:
	cNode();
	void setData(char);
	void setLeft(cNode*);
	void setRight(cNode*);
	char getData();
	cNode* getLeft();
	cNode* getRight();
};

class cTree
{
	cNode *root;
	cNode *CreateNode(char);
public:
	cTree();
	void AddNode(char);
	cNode* getRoot();
	void Display();
	void Inorder(cNode*);
	void Preorder(cNode*);
	void Postorder(cNode*);


};
