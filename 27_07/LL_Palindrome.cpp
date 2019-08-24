#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data =d;
        }
};
bool isPalin(Node *head){
Node* pt =head;
stack<int> s;
while(pt!=NULL)
{
    s.push(pt->data);
    pt=pt->next;
}
while(head!=NULL)
{
    int i=s.top();
    if(head->data!=i)
    return false;
    head=head->next;
}
return true;
}