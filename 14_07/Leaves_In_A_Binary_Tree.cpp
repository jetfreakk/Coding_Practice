#include <iostream>
using namespace std;

int count_leafs(Node  *root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL and root->right==NULL)
    return 1;
    else
    return (count_leafs(root->left)+count_leafs(root->right));
}