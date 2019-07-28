void dfsHelper(T Node, map<T,bool>)
{
    visited[node]=true;
    for(T neighbours : adjList[node])
    {
        if(!visited[neighbour])
        {
            dfsHelper(neighbour,visited, ordering);
        }
    }
    ordering.push_front(node);

}
void dfstopologicalsort(T src)
{
    map<T,bool> visited;
    list<T> ordering;
    for (auto i :adjList)
    {
        T node =i.first;
        if(!visited[node])
        {
            dfshelper(node,visited,ordering);
        }
    }
}