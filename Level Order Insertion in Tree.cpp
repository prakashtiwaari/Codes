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
struct node * insertkey(struct node * root,int key)
{
	queue <struct node*>q;
	q.push(root);
while(!q.empty())
{
	struct node* tmp=q.front();
  q.pop();

  if(!tmp->left)
  {
    tmp->left=insert(key);
    break;
  }
	  else
	  {
	  	q.push(tmp->left);
	 }
	 
	 
	 if(!tmp->right)
	 {
	 	tmp->right=insert(key);
	 	break;
	 }
	 else
	 {
	 	q.push(tmp->right);
	 	
	 }
	 	
}
	
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
	root->right->left=insert(6);
	int key;
	cout<<"Enter key to insert in the tree"<<endl;
	cin>>key;
   insertkey(root,key);
	
	
	
	print(root);
	
	return 0;
}
