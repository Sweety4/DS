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
void ThreadBinaryTree::AddNode(int ele)
{
	Node *temp, *newnode;
	newnode = CreateNode(ele);
	if (root == NULL)
	{
		root = newnode;
		cout << "\nRoot is Created";
		return;
	}
	temp = root;
	while (1)
	{
		if (ele < temp->getData())
		{
			if (temp->getLThread() == 'T')
			{
				newnode->setLeft(temp->getLeft());
				newnode->setRight(temp);
				temp->setLeft(newnode);
				temp->setLThread('L');
				cout << "\n\n\t Node Added At Left Of " << temp->getData();
				break;
			}
			else
				temp = temp->getLeft();
		}
		else if (ele > temp->getData())
		{
			if (temp->getRThread() == 'T')
			{
				newnode->setRight(temp->getRight());
				newnode->setLeft(temp);
				temp->setRight(newnode);
				temp->setRThread('L');
				cout << "\n\n\t Node Added At Right Of " << temp->getData();
				break;
			}
			else
				temp = temp->getRight();
		}
		else
		{
			cout<<"\n\tDuplicate data not allowed";
			break;
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
	
	while (curr->getLThread() == 'L')
	{
		cout << "   " << curr->getData();
		curr = curr->getLeft();
	}
	while (curr != NULL)
	{
		if (curr->getLThread() == 'T')
			cout << "   " << curr->getData();
		if (curr->getRThread() == 'T')
		{
			curr = curr->getRight();
		}
		else
		{
			curr = curr->getRight();
			cout << "   " << curr->getData();
			while (curr->getLThread() == 'L')
				curr = curr->getLeft();
		}
	}
}