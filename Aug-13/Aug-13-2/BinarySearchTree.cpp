#include"BinarySearchTree.h"
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

cTree::cTree()
{
	root = NULL;
}

cNode* cTree::getRoot()
{
	return root;
}

cNode* cTree::CreateNode(int data)
{
	cNode* record;
	record = new cNode();
	record->setData(data);
	record->setLeft(NULL);
	record->setRight(NULL);
	return record;
}

void cTree::AddNode(int data)
{
	{
		cNode* newnode = CreateNode(data);
		cNode* move;
		if (root == NULL)
		{
			root = newnode;
			cout << "\n\n\t Root Created !!!!";
		}
		else
		{
			move = root;
			while (1)
			{
				if (move->getData() > data)
				{
					if (move->getLeft() == NULL)
					{
						move->setLeft(newnode);
						cout << "\n\n\t Node Attached to left of " << move->getData();
						break;
					}
					else
					move = move->getLeft();
				}
				else
				{
					if (move->getRight() == NULL)
					{
						move->setRight(newnode);
						cout << "\n\n\t Node Attached to right of " << move->getData();
						break;
					}
					else
					move = move->getRight();
				}
				
			}
		}
	}

}
void cTree::Display()
{

	cout << "\n\n ************ Inorder ************\n\n\n";
	Inorder(getRoot());
	cout << "\n\n ************ Preorder ************\n\n\n";
	Preorder(getRoot());
	cout << "\n\n ************ Postorder ************\n\n\n";
	Postorder(getRoot());

}
void cTree::Inorder(cNode*r)
{
	if (r != NULL)
	{
		Inorder(r->getLeft());
		cout << "  " << r->getData();
		Inorder(r->getRight());
	}
}
void cTree::Preorder(cNode* r)
{
	if (r != NULL)
	{
		cout << "  " << r->getData();
		Preorder(r->getLeft());
		Preorder(r->getRight());

	}
}
void cTree::Postorder(cNode* r)
{
	if (r != NULL)
	{
		Postorder(r->getLeft());
		Postorder(r->getRight());
		cout << "  " << r->getData();
	}
}
