#include <bits/stdc++.h>
using namespace std;

int getNthUglyNo(int n)
{
    int ugly[n];
    int i2,i3,i5;
    i2=i3=i5=0;
    int next2=2;
    int next3=3;
    int next5=5;
    int next_ugly=1;
    ugly[0]=1;
    for(int i=1;i<n;i++)
    {
        next_ugly=min(next2,min(next3,next5));
        ugly[i]=next_ugly;
        if(next_ugly == next2)
        {i2=i2+1;
        next2=ugly[i2]*2;}
        if(next_ugly == next3)
        {i3=i3+1;
        next3=ugly[i3]*3;}
        if(next_ugly == next5)
        {i5=i5+1;
        next2=ugly[i5]*5;}
    }
    return next_ugly;
}
int main()
{
    int n=130;
    cout<<getNthUglyNo(n);
    return 0;
}