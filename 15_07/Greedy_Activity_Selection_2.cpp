#include <bits/stdc++.h>
using namespace std;

class Activity
{
    int start,finish;

}

bool activityCompare(Activity s1, Activity s2)
{
    return (s1.finish<s2.finish);
}

void maxActivities(Activity arr[],int n)
{
    sort(arr,arr+n,activityCompare);
    int i,int j;
    i=0;
    cout<<arr[i].start<<", "<<arr[i].finish<<endl;
    for(j=1;j<n;j++)
    {
        if(arr[j].start>=arr[i].finish)
        {
            cout<<arr[j].start<<", "<<arr[j].finish<<endl;
            i=j;
        }
    }
}
int main()
{
    Activity arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxActivities(arr,n);
    return 0;
}