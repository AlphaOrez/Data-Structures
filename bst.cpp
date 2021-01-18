#include <iostream>
using namespace std;


struct Node {

	int data;
	Node* left;
	Node* right;
};


Node* newnode(int key) {
	Node* daaba = new Node;
	daaba->data = key;
	daaba->right = NULL;
	daaba->left = NULL;
	return daaba;
}


void inorder(Node* root) {
	if (root == NULL) {
		return;
	}
	else {
		inorder(root->left);
		cout << root->data << endl;
		inorder(root->right);


	}
}


Node* insert(Node* root, int key)
{

	if (root == NULL)
		return newnode(key);

	if (key < root->data)
		root->left = insert(root->left, key);


	else

		root->right = insert(root->right, key);
	return root;


}
void search(Node* root, int key, Node* parent)
{
	// if key is not present in the key
	if (root == NULL)
	{
		cout << "nahi hai bhai nahi hai!";
		return;
	}

	// if key is found
	if (root->data == key)
	{
		if (parent == NULL)
			cout << "The node  " << key << " is root node";

		else if (key < parent->data)
			cout << "Given key" << key << "is left node of node " << parent->data;

		else	cout << "Given key" << key << "is right node of node" << parent->data;

		return;
	}//recur call of right and left root
	if (key < root->data)
		search(root->left, key, root);

	else
		search(root->right, key, root);

}
int main()
{
	Node* root = NULL;
	//int keys[] = { 50,30,45,48,47,32 };
	//for (int key : keys)
	//	root = insert(root, key);
	insert(root, 50);
	insert(root, 30);
	insert(root, 45);
	insert(root, 48);
	insert(root, 47);
	insert(root, 32);
		root = insert(root,  int key);
	inorder(root);
//	search(root, 96, nullptr);
	//insert(root, 43);
	return 0;

}
