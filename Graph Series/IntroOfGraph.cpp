#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /**
     * UnDirected Graph
     * 1) ADJACENCY MATRIX : It is only for smaller no. of values
     * Input : n-> no. of nodes
     *         m-> no. of edges 
     * S.C -> O(N^2)
     **/
    int node, edge;
    cin >> node >> edge;
    //declaring the adjacent matrix
    int adj[node + 1][node + 1];
    //initializing adjacent matrix with 0
    for (int i = 1; i < node + 1; i++)
        for (int j = 1; j < node + 1; j++)
            adj[i][j] = 0;

    for (int i = 1; i <= edge; i++)
    {
        //input for edges (1-2,2-4...)
        int u, v;
        cin >> u >> v;
        //for UnDirected Graph
        adj[u][v] = 1;
        adj[v][u] = 1;
        //for Directed Graph
        // adj[u][v] = 1;
    }
    //output of graph stored
    cout << "ADJACENCY MATRIX : " << endl;
    for (int i = 1; i < node + 1; i++)
    {
        for (int j = 1; j < node + 1; j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }

    /**
     * UnDirected Graph
     * 1) ADJACENCY LIST : better than adjacency matrix
     * Input : n-> no. of nodes
     *         m-> no. of edges 
     * S.C -> O(N+2E)
     **/
    //node,edges already declared above

    //declaring the adjacent list and initializing it with 0
    vector<vector<int>> adjacent(node + 1);

    for (int i = 0; i < adjacent.size(); i++)
        for (int j = 0; j < adjacent[i].size(); j++)
            adjacent[i][j] = 0;

    for (int i = 1; i <= edge; i++)
    {
        //input for edges (1-2,2-4...)
        int u, v;
        cin >> u >> v;
        //for UnDirected Graph
        adjacent[u].push_back(v);
        adjacent[v].push_back(u);
        //for Directed Graph
        // adjacent[u].push_back(v);
    }
    //output of graph stored
    cout << "ADJACENCY LIST : ";
    for (int i = 0; i < adjacent.size(); i++)
    {
        for (int j = 0; j < adjacent[i].size(); j++)
            cout << adjacent[i][j] << " ";
        cout << endl;
    }
    return 0;
}

/**
 * Graph is of two types : 
 *                        i)  UnDirected Graph
 *                        ii) Directed Graph
 * 
 * Degree : No. of edges which is incoming/outgoing.
 * Total Degree(UnDirected Graph) : 2*edges
 * 
 * Degree (Directed Graph): InDegree, OutDegree
 * 
 * Path : Sequence of node/vertex
 *        1->2->3->4
 *        
 * Cyclic graph : 1->2->3->4->1
 *                1->5->3->2->1
 * 
 * Acyclic graph : 1->2->3->4
 * 
 **/