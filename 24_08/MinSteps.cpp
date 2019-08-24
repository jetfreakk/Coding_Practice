#include <iostream>
using namespace std;
int reduce(int n)
{
    if(n==1)
    return 0;
    int q1=0,q2=0,q3=0;
    if(n%3==0)
    q1=1+reduce(n/3);
     if(n%2==0)
    q1=1+reduce(n/2);
  
    q3=1+reduce(n-1);
    return min(q1,min(q2,q3));
}
int main()
{
int n;
cin>>n;
int ans=reduce(n);
cout<<ans;
}