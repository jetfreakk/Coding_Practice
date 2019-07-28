int getCount(Node* node)
{
    if(node==NULL)
        return 0;
    if(node->left == NULL && node->right==NULL)
        return 1;
    else
    {
            return getCount(node->left)+getCount(node->right);
    }
    
}