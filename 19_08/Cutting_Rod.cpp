#include <bits/stdc++.h>
using namespace std;
int cutRod(int price[], int n)
{
    if(n<=0)
        return 0;
    int max_sol=INT_MIN;
    for(int i=0;i<n;i++)
    {
        max_sol=max(max_sol,price[i]+cutRod(price,n-i-1));
    }
    return max_sol;
}
int main()
{
    int arr[] = {1,5,8,9,10,17,17,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<cutRod(arr,n);
    return 0;
}