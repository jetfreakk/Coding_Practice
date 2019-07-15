#include <bits/stdc++.h>
using namespace std;
//Method 1
class Node
{
    int data;
    Node* left;
    Node* right;
};
Node * newNode(int k)
{
    Node * temp = new Node;
    temp->data = k;
    temp->left = temp->right = NULL;
    return temp;
}
bool findPath(Node *root, vector<int> &path, int k)
{
    if(root==NULL)
    return false;

    path.push_back(root->data);
    if(root->data==k)
    return true;
    if((root->left && findPath(root->left,path,k))||(root->right && findPath(root->right,path,k)))
    return true;
    path.pop_back();
    return false;
}