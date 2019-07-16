#include <iostream>
using namespace std;
int subarraysum(int arr[],int n,int sum)
{
    int curr_sum=arr[0],start=0,i;
    for(i=1;i<=n;i++)
    {
        while(curr_sum>sum && start <i-1)
        {
            curr_sum=curr_sum-arr[start];
            start++;
        }
        if(curr_sum==sum)
        {
            cout<<start<<" "<<i-1;
            return 1;
        }
        if(i<n)
        {
            curr_sum=curr_sum+arr[i];
        }
    }
    return 0;
}