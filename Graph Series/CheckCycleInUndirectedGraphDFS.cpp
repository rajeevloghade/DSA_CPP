#include <iostream>
#include <vector>
using namespace std;

bool isCycleInUndirectedGraph(int node, int pre, vector<int> adjacent[], vector<int> &visited)
{
    visited[node] = 1; //marking node as visited

    for (auto adjNode : adjacent[node]) //checking for adjacent node
    {
        if (!visited[adjNode])
        {
            if (isCycleInUndirectedGraph(adjNode, node, adjacent, visited))
                return true;
        }
        else if (adjNode != pre) //checking if adjNode is not equals to previous node means it's a cycle
            return true;
    }
    return false;
}

bool checkCycleInUndirectedGraphDFS(int node, vector<int> adjacent[])
{
    vector<int> visited(node + 1, 0);

    for (int i = 1; i <= node; i++)
        if (!visited[i])
            if (isCycleInUndirectedGraph(i, -1, adjacent, visited))
                return true;

    return false;
}

int main()
{
    //input for nodes and edges
    int node, edge;
    cout << "Enter nodes : ";
    cin >> node;
    cout << "Enter edges : ";
    cin >> edge;

    //declaring the adjacent list
    vector<int> adjacent[node + 1];

    //take input for edges (u-v)
    for (int i = 1; i <= edge; i++)
    {
        cout << "Enter " << i << " edge (u-v) : ";
        int u, v;
        cin >> u >> v;

        //for UnDirected graph
        adjacent[u].push_back(v);
        adjacent[v].push_back(u); //comment it for directed graph
    }

    //printing the answer (CycleInUndirectedGraphDFS)
    if (checkCycleInUndirectedGraphDFS(node, adjacent))
        cout << "Yes : Cycle In Undirected Graph Using DFS";
    else
        cout << "Not : No Cycle In Undirected Graph Using DFS";

    return 0;
}
/**
 * checkCycleInUndirectedGraphDFS (Depth First Search): Traversing the adjacent node at complete depth first
 * T.C -> 0(N+E) : node + edges
 * S.C -> 0(N)   : visited array 
 */