#include <iostream>
using namespace std;

void reverse(Node *root)
{
    Node *current=head;
    Node *next,*prev=NULL;

    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}