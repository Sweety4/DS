#include"Node.h"
Node::Node()
{
	data = 1;
	next = NULL;

}

Node::Node(int d, Node* n)
{
	data = d;
	next = n;
}

int Node::getData()
{
	return data;
}

Node* Node::getNext()
{
	return next;
}

void Node::setData(int data)
{
	this->data;
}

void Node::setNext(Node* next)
{
	this->next;
}
