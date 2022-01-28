#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfsOfGraph(int node, vector<int> adjacent[])
{
    //taking bfs to store elements
    vector<int> bfs;
    //taking visited array for monitoring if node is visited or not
    vector<int> visited(node + 1, 0);

    //taking for loop till node may be we have multiple components
    for (int i = 1; i <= node; i++)
        if (!visited[i]) //if not visited
        {
            //taking queue to store nodes
            queue<int> q;
            q.push(i);
            visited[i] = 1; //mark node to be visited

            while (!q.empty())
            {
                int topNode = q.front();
                q.pop();
                bfs.push_back(topNode); //storing final node to bfs

                //checking for adjacent nodes
                for (auto adjNode : adjacent[topNode])
                {
                    if (!visited[adjNode]) //if not visited
                    {
                        q.push(adjNode);
                        visited[adjNode] = 1; //mark node to be visited
                    }
                }
            }
        }

    return bfs;
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

    vector<int> answer = bfsOfGraph(node, adjacent);

    //printing the answer (BFS)
    cout << "BFS : ";
    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";

    return 0;
}
/**
 * BFS (Breadth First Search): Traversing the adjacent node at first
 * T.C -> 0(N+E) : node + edges
 * S.C -> 0(N)   : visited array
 */