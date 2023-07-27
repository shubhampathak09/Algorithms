#include<bits/stdc++.h>
using namespace std;


struct node
{
	node*left;
	node*right;
	int data;
	node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL; 
	}
};

void inorder(struct node*root){
	if(root == NULL)
	return;
	
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}

struct node* findLCA(node*root,int n1,int n2){
	
	
	if(root == NULL){
		return NULL;
	}
	
	
    if(root->data == n1 || root->data == n2){
    	return root;
	}
	
	node* left_lca = findLCA(root->left,n1,n2);
	node* right_lca = findLCA(root->right,n1,n2);
	
	if(left_lca != NULL && right_lca!=NULL){
		return root;
	}
	
	
	return left_lca!=NULL ? left_lca: right_lca; 
		
}





int main(){

struct node*root = new node(1);

root->left = new node(2);

root->right = new node(3);

node * va = findLCA(root,1,2);

cout<<"LCA of given node is .."<< va->data;

	
}
