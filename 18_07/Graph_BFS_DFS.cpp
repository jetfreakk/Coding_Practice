//GRAPHS
#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
    public:
    map<T,list<T>> adjList;
    graph(){}
    void addEdge(T u , T v, bool bidirec=true)
    {
        adjList[u].push_back(v);
        if(bidirec)
        adjList[v].push_back(u)/;;
    }

void dfs(T src)
{
    queue<T> q;
    map<T,bool> visited;
    q.push(src);
    visited[src]=true;
    while(!q.empty())
    {
        T node = q.front();
        cout<<node<<" ";
        q.pop();
        for(int n : adjList[node])
        {
            if(!visited[n])
            q.push(n);
            visited[n]=true;
        }
    }
}
void dfsssp(T src)
{
    queue<T> q;
    map<T,int> dist;
    map<T,T> parent;
    for(auto i: adjList)
    dist[i.first]=99999;
    q.push(src);
    dist[src]=0;
    parent[src]=src;
    while(!q.empty())
    {
        T node = q.front();
        cout<<node<<" ";
        q.pop();
        for(int n : adjList[node])
        {
            if(dist[n]==99999){
            q.push(n);
            dist[n]=dist[node]+1;
            parent[n] = node;}
        }
    }
    for(auto i : adjList)
    {
        T node = i.first;
        cout<<"Distance of "<<node<<" from "<<src<<" is "<<dist[node]<<endl;
    }
}
    
};