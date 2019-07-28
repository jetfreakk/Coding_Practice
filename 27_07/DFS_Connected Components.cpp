void dfshelper(T node, visited)
{
    visited[node]=true;
    cout<<node;
    for(T neighbour : adjList[node])
    {
        if(!visited[neighbour])
        dfshelper(neighbour,visited)
    }

}



void dfs(T src)
{
    map<T, bool> visited;
    int component=1;
    dfshelper(src, visited);
    cout<<endl;
    for(auto i: adjList)
    {
        T city = i.first;
        if(!visited[city])
        {
            dfshelper(city,visited);
            component++;
        }
    }
cout<<"The current graph had "<<component<<" components"; 
}