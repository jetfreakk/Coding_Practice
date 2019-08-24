#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int data)
{
    Node * temp = new Node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
Node * flipBinary(Node * root)
{
    if(root==NULL)
    return root;
    if(root->left==NULL && root->right==NULL)
    return root;
    Node* flippedRoot = flipBinary(root->left); 
    root->left->left = root->right; 
    root->left->right = root; 
    root->left = root->right = NULL; 
  
    return flippedRoot;
}