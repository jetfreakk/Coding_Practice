#include <bits/stdc++.h>
using namespaces std;

class Node
{
    Node *left;
    Node *right;
    int data;
};

Node * newNode(int d)
{
    Node* temp = new Node;
    temp->data = d;
    temp->left = temp->right = NULL;
    return temp;
}

Node * findLCA(Node * root, int n1,int n2)
{
    if(root==NULL)
    return NULL;

    if(root->data == n1 || root->data == n2)
    return root;

    Node *left_lca = findLCA(root->left,n1,n2);
    Node *right_lca = findLCA(root->right,n1,n2);

    if(left_lca && right_lca)
    return root;

    return(left_lca!=NULL)? left_lca:right_lca;
}