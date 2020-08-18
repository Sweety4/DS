#include"TBST.h"
Node::Node()
{
	data = 1;
	rthread = lthread = 'T';
	Left = Right = NULL;
}
void Node::setData(int d)
{
	data = d;
}
void Node::setRThread(char ch)
{
	rthread = ch;
}
void Node::setLThread(char ch)
{
	lthread = ch;
}
void Node::setLeft(Node* l)
{
	Left = l;
}
void Node::setRight(Node* r)
{
	Right = r;
}
int  Node::getData()
{
	return data;
}
char Node::getRThread()
{
	return rthread;
}
char Node::getLThread()
{
	return lthread;
}
Node* Node::getLeft()
{
	return Left;
}
Node* Node::getRight()
{
	return Right;
}
ThreadBinaryTree::ThreadBinaryTree()
{
	root = NULL;
}
Node* ThreadBinaryTree::getRoot()
{
	return root;
}
Node* ThreadBinaryTree::CreateNode(int ele)
{
	Node *record;
	record = new Node();
	record->setData(ele);
	record->setLeft(NULL);
	record->setRight(NULL);
	record->setRThread('T');
	record->setLThread('T');
	return record;
}
void ThreadBinaryTree::AddNode(int data)
{
	Node *newnode, *move;
	newnode = CreateNode(data);
	if (root == NULL)
	{
		root = newnode;
		cout << "\n\n\t Root Created !!!!";
		return;
	}
	else
	{
		move = root;
		while (1)
		{
			if (Data < move->getData())
			{
				if (move->getLThread == 'T')
				{
					newnode->setLeft(move->getLeft());
					newnode->setRight(move);
					move->setLeft(newnode);
					move->setLThread('L');
					cout << "\n\n\t Node Added At Left of " << move->getData();
					break;
				}
				else
					move = move->getLeft();
			}
			else
				if (Data > move->getData())
				{
					if (move->getRThread == 'T')
					{
						newnode->setRight(move->getRight());
						newnode->setLeft(move);
						move->setRight(newnode);
						move->setLThread('L');
						cout << "\n\n\t Node Added At Right of " << move->getData();
						break;
					}
					else
						move = move->getRight();
				}
				else
				{
					cout << "\n\n\t Duplicate Not Allowed ";
					break;
				}
		}
	}
 
}
/*void ThreadBinaryTree::Display()
{

}*/
void ThreadBinaryTree::Inorder(Node* root)
{
	Node *move = root;
	if (move == NULL)
	{
		cout << "\n Tree is Empty .....";
		return;
	}
	while (move->getLThread() != 'L')
		move = move->getLeft();
	cout << "\n\t Inorder Traversal : \n\n\n";
	do
	{
		cout << " " << move->getData();
		if (move->getRThread() == 'T')
		{
			move = move->getRight();
			while (move->getLThread() != 'L')
				move = move->getLeft();

		}
		else
			move = move->getRight();
	} while (move != NULL);
}
void ThreadBinaryTree::Preorder(Node* root)
{
	Node *curr = root;
	
	while (curr->getLthread() == 'L')
	{
		cout << "   " << curr->getData();
		curr = curr->getLeft();
	}
	while (curr != NULL)
	{
		if (curr->getLthread() == 'T')
			cout << "   " << curr->getData();
		if (curr->getRthread() == 'T')
		{
			curr = curr->getRight();
		}
		else
		{
			curr = curr->getRight();
			cout << "   " << curr->getData();
			while (curr->getLthread() == 'L')
				curr = curr->getLeft();
		}
	}
}