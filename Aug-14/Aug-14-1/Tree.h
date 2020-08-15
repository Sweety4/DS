#include"Node.h"
class cTree
{
	cNode *root;
	cNode *CreateNode(int);
public:
	cTree();
	void AddNode(int);
	cNode* getRoot();
	void Display();
	void Inorder(cNode*);
	void Preorder(cNode*);
	void Postorder(cNode*);
	void DelNode(int);
	void Search(int);
	
};