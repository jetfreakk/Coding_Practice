#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
void rotate(Node **head_ref, int k)
{
    if(k==0)
    return;
    Node*current = *head_ref;
    int count=1;
    while(count<k && current!=NULL)
    {
        current=current->next;
        count++;
    }
    if(current==NULL)
    return;
    Node *kthNode= current;
    while(current->next!=NULL)
    current=current->next;
    current->next=*head_ref;
    *head_ref=kthNode->next;
    kthNode->next=NULL;
}