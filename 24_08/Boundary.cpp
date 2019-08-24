#include <iostream>
using namespace std;
void printBoundaryleft(Node *root)
{
    if(root==NULL)
    return;
    if(root->left)
    {
        cout<<root->data;
        printBoundaryleft(root->left);
    }
    else if(root->right)
    {
        cout<<root->data;
        printBoundaryleft(root->right);
    }
}
void printBoundaryright(Node* root)
{
    if(root==NULL)
    return;
    if(root->right)
    {
        printBoundaryleft(root->right);
        cout<<root->data;
    }
    else if(root->left)
    {
        printBoundaryleft(root->left);
        cout<<root->data;
    } 
}
void printleaves(Node* root)
{
    if(root==NULL)
        return;
    printleaves(root->left);
    if((!root->left) && !(root->right))
    cout<<root->data;
    printleaves(root->right);

}
void printBoundary(Node* root)
{
    if(root==NULL)
    return;
    cout<<root->data;
    printBoundaryleft(root->left);
    printleaves(root->left);
    printleaves(root->right);
    printBoundaryright(root->right);
}