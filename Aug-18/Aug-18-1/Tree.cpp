#include"Tree.h"
#include<stack>
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
	cNode *newnode, *move;
	char ch;
	newnode = CreateNode(data);
	if (root == NULL)
	{
		root = newnode;
		cout << "\n\n\t Root Created !!!!";
	}
	else
	{
		move = root;
		while (1)   //infinite loop
		{
			cout << "\n\n\t Where you want to Attach node at left or right of (L/R) :";
			move->getData();
			cin >> ch;
			if (ch == 'L' || ch == 'l')
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
			else if (ch == 'R' || ch == 'r')
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
			else
			{
				cout << "\n\n\t wrong option selected !!!!";
				break;
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
void cTree::NonRecInorder(cNode* r)
{
	stack<cNode*>st;
	cNode *move;
	move = root;
	while (move != NULL || st.empty() != 1)
	{
		while (move != NULL)
		{
			st.push(move);
			move = move->getLeft();
		}
		move = st.top();
		st.pop();
		cout << " " << move->getData();
		move = move->getRight();
	}
}
void cTree::NonRecPreorder(cNode* r)
{
	stack<cNode*>st;
	cNode *move;
	move = root;
	while (move != NULL || st.empty() != 1)
	{
		while (move != NULL)
		{
			cout << " " << move->getData();
			st.push(move);
			move = move->getLeft();
		}
		move = st.top();
		st.pop();
		
		move = move->getRight();
	}

}
void cTree::NonREcPostorder(cNode* r)
{
	stack<cNode*>s1, s2;
	cNode *move, *temp;
	move = root;
	cout << "\n\t ************** Postorder Without Recrsion **********\n\n\t";
	s1.push(move);
	while (!s1.empty())
	{
		temp = s1.top();
		s1.pop();
		s2.push(temp);

		if (temp->getLeft())
			s1.push(temp->getLeft());
		if (temp->getRight())
			s1.push(temp->getRight());

		while (!s2.empty())
		{
			temp = s2.top();
			s2.pop();
			cout << temp->getData() << " ";
		}
		
	}
}