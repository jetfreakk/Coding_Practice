#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        arr[0]=0;
        arr[1]=1;
        for(int j=2;j<=n;j++)
        {
            if(j%2==0)
            {
                arr[j]=min(arr[j/2]+1,arr[j-1]+1);
            }
            else
            {
                arr[j]=arr[j-1]+1;
            }
        }
        cout<<arr[n];
    }
}