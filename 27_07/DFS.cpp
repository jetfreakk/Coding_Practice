void DFSHelper(T node, map<T,bool> &visited)
{
    visited[node]=true;
    cout<<node<<" ";
    for(T neighbour : adjList[node])
    {
        if(!visited[neighbour])
        {
            DFSHelper(neighbour,visited);
        }
    }
}


void DFS(T src)
{
    map<T,bool> visited;

    dfshelper(src, visited);
}