#include <iostream>
using namespace std;

void BubbleSort(int n, int A[])
{
for(int k=0;k<n-1;k++)
{
    int flag=0;
    for(int i=0;i<n-k-1;i++)
    {
        if(A[i]>A[i+1])
        {
            int temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            flag=1;
        }
    }
    if(flag==0)
    break;
}
}


int main()
{
int arr[5]={1,5,4,2,6};
int n=5;
BubbleSort(n,arr);
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
}