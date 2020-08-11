#include"Node.h"
Node::Node()
{
	data = 'S';
	next = NULL;
}
void Node::setData(char ch)
{
	data = ch;
}
void Node::setNext(Node* n)
{
	next = n;
}
char Node::getData()
{
	return data;
}
Node* Node::getNext()
{
	return next;
}