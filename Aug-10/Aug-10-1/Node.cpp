#include"Node.h"

Node::Node()
{
	//data = 0;
	next = NULL;
}
void Node::setData(Book data)
{
	this->data = data;
}
void Node::setNext(Node* next)
{
	this->next = next;
}

Book Node::getData()
{
	return data;
}
Node* Node::getNext()
{
	return next;
}