#include <iostream>
#include <bits/stdc++.h>
using namespace std;
Node class{
    public:
        int data;
        Node* next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
int detectLoop(Node* h)
{
    Node *slow=h;
    Node* fast=h;
    while(slow and fast and fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            cout<<"Found Loop";
            return 1;
        }
    }
    return 0;
}
