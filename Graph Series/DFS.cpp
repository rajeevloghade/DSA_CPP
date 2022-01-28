#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adjacent[], vector<int> &visited, vector<int> &storeDfs)
{
    storeDfs.push_back(node);
    visited[node] = 1;

    for (auto adjNode : adjacent[node])
        if (!visited[adjNode])
            dfs(adjNode, adjacent, visited, storeDfs);
}

vector<int> dfsOfGraph(int node, vector<int> adjacent[])
{
    vector<int> storeDfs;
    vector<int> visited(node + 1, 0);

    for (int i = 1; i <= node; i++)
        if (!visited[i])
            dfs(i, adjacent, visited, storeDfs);

    return storeDfs;
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

    vector<int> answer = dfsOfGraph(node, adjacent);

    //printing the answer (BFS)
    cout << "DFS : ";
    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";

    return 0;
}
/**
 * DFS (Depth First Search): Traversing the adjacent node at complete depth first
 * T.C -> 0(N+E) : node + edges
 * S.C -> 0(N)   : visited array
 */