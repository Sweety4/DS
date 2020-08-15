#include"Tree.h"
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

void cTree::DelNode(int data)
{
	cNode *temp, *tag = NULL, *tr;
	if (root == NULL)
	{
		cout << "\n\tTree is empty....";
		return;
	}
	//Search Node
	for (temp = root; temp != NULL && temp->getData() != data;)
	{
		tag = temp;
		if (temp->getData() > data)
			temp = temp->getLeft();
		else
			temp = temp->getRight();
	}
	if (temp == NULL)
	{
		cout << "\n\tData Not Found.....";
		return;
	}
	if (temp->getRight() == NULL)
	{
		if (tag->getData() < data)
			tag->setRight(temp->getLeft());
		else
			tag->setLeft(temp->getLeft());

	}
	else if (temp->getRight() != NULL)
	{
		if (temp->getLeft() != NULL)
		{
			for (tr = temp->getRight(); tr->getLeft() != NULL; tr = tr->getLeft());
			tr->setLeft(temp->getLeft());
		}
		if (tag->getData() > temp->getData())
			tag->setLeft(temp->getLeft());
		else
			tag->setRight(temp->getLeft());
	}
	delete temp;
}
void cTree::Search(int ele)
{
	cNode *Temp = getRoot();
	while (Temp != NULL && Temp->getData() != ele)
	{
		if (ele<Temp->getData())
			Temp = Temp->getLeft();
		else
			Temp = Temp->getRight();
	}
	if (Temp == NULL)
		cout << "\nData Not found";
	else
		cout << "\n\n\n  data found" << Temp->getData();
}