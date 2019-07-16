#include <bits/stdc++.h>
using namespace std;
void parentheses(string str,int n,int open,int close)
{
    if(close==n)
    {
        cout<<str<<endl;
        return;
    }
	    if(open>close)
        {
            parentheses(str+')',n,open,close+1);
        }
        if(open<n)
        {
            parentheses(str+'(',n,open+1,close);
        }
}

int main() {
    int n;
    cin>>n;
    parentheses("",n,0,0);
	return 0;
}