#include <iostream>
using namespace std;
int maxsum(int a[],int size)
{
    int max_so_far = -11111, max_ending_here = 0;
    for(int i=0;i<size;i++)
    {
        max_ending_here = max_ending_here +a[i];
        if(max_so_far<max_ending_here)
        max_so_far=max_ending_here
        if(max_ending_here<0)
        max_ending_here=0;
    }
    return max_so_far;
}