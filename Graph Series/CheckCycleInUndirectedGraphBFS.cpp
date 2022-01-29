#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isCycleInUndirectedGraph(int node, vector<int> adjacent[], vector<int> &visited)
{
    queue<pair<int, int>> q;
    q.push({node, -1}); //storing the node with previous node
    visited[node] = 1;  //marking node as visited

    while (!q.empty())
    {
        int topNode = q.front().first;
        int pre = q.front().second;
        q.pop();

        for (auto adjNode : adjacent[topNode]) //checking for adjacent node
        {
            if (!visited[adjNode])
            {
                q.push({adjNode, topNode}); //storing the adjNode with previous node
                visited[adjNode] = 1;    //marking node as visited
            }
            else if (adjNode != pre) //checking if adjNode is not equals to previous node means it's a cycle
                return true;
        }
    }
    return false;
}

bool checkCycleInUndirectedGraphBFS(int node, vector<int> adjacent[])
{
    vector<int> visited(node + 1, 0);

    for (int i = 1; i <= node; i++)
        if (!visited[i])
            if (isCycleInUndirectedGraph(i, adjacent, visited))
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

    //printing the answer (CycleInUndirectedGraphBFS)
    if (checkCycleInUndirectedGraphBFS(node, adjacent))
        cout << "Yes : Cycle In Undirected Graph Using BFS";
    else
        cout << "Not : No Cycle In Undirected Graph Using BFS";

    return 0;
}
/**
 * checkCycleInUndirectedGraphBFS (Breadth First Search): Traversing the adjacent node at first
 * T.C -> 0(N+E) : node + edges
 * S.C -> 0(N)+0(N) : visited array + queue
 */