#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	struct node * left;
	struct node * right;
};
struct node * insert(int data)
{
	struct node * newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
void print(struct node *root)
{
	if(root==NULL)
	  return;
print(root->left);
cout<<root->data<<endl;
print(root->right);
}
int main()
{
	struct node * root=(struct node*)malloc(sizeof(struct node));
	root=insert(1);
	root->left=insert(2);
	root->right=insert(3);
	root->left->left=insert(4);
	root->left->right=insert(5);
	root->right->right=insert(6);
	root->right->left=insert(7);
	
	
	print(root);
	
	return 0;
}
