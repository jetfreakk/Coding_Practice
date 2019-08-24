#include <iostream>
using namespace std;
void SelectionSort(int n, int A[])
{
    for(int i=0;i<n-2;i++)
    int iMin=i;
    for(int j=i+1;j<n;j++)
    {
        if(A[j]<A[iMin])
        {
            iMin=j;
        }
        int temp=A[i];
        A[i]=A[iMin];
        A[iMin]=temp;
    }
}