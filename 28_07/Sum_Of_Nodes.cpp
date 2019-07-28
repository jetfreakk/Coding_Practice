int addNodes(Node* root)
{
    if(root==NULL)
        return 0;
        return (root->data + addNodes(root->left)+addNodes(root->right));
}