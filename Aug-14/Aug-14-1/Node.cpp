#include"Tree.h"
cNode::cNode()
{
	data = 1;
	right = left = NULL;
}
void cNode::setData(int d)
{
	data = d;
}
void cNode::setLeft(cNode* l)
{
	left = l;
}
void cNode::setRight(cNode* r)
{
	right = r;
}
int cNode::getData()
{
	return data;
}
cNode* cNode::getLeft()
{
	return left;
}
cNode* cNode::getRight()
{
	return right;
}