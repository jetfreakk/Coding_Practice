#include <iostream>
#include <vector>
using namespace std;

class Heap{
    vector <int> v;
    bool minHeap;
    bool compare(int a,int b)
    {
        if(minheap)
        return a<b;
        else
        return a>b;
    }
    public:
        Heap(bool type=true)
        {
            minHeap=false;
            v.push_back(-1);
        }
        void push(int data)
        {
            v.push_back(data);
            int index= v.size()-1;
            int parent = index/2;
            while(parent>1 && compare(v[index],v[parent]))
            {
                swap(v[index],v[parent]);
                index=parent;
                parent=parent/2;
            }
        }
        bool empty()
        {
            return v.size()==1;
        }
        int top()
        {
            returnv[1];
        }
};
int main()
{
    Heap h;
    h.push(5);
    h.push(15);
    h.push(2);
    h.push(20);
    h.push(51);
    cout<<s.top();
}