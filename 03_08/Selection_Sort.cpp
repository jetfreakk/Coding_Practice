#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp,int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}

void SelectionSort(int arr[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        if(arr[min]<arr[j])
            min=j;
        swap(&arr[min],&arr[i]);
    }
}
void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[]= {6,4,2,54,62,61,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
    printArray(arr,n);
    return 0;
}