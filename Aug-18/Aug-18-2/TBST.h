#include<iostream>
using namespace std;

class Node
{
	int data;
	char rthread, lthread;
	Node *Left, *Right;
public:
	Node();
	void setData(int);
	void setRThread(char);
	void setLThread(char);
	void setLeft(Node*);
	void setRight(Node*);
	int  getData();
	char getRThread();
	char getLThread();
	Node* getLeft();
	Node* getRight();
};

class ThreadBinaryTree
{
	Node *root;
public:
	ThreadBinaryTree();
	Node* getRoot();
	Node* CreateNode(int);
	void AddNode(int);
	//void Display();
	void Inorder(Node*);
	void Preorder(Node*);

};