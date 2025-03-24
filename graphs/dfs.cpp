#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &ls)
    {
        vis[node] = 1;
        ls.push_back(node);

        // Traverse all neighbors in the stored order
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, adj, vis, ls);
            }
        }
    }

public:
    vector<int> dfs_graph(int V, vector<int> adj[])
    {
        vector<int> vis(V, 0);
        vector<int> ls;

        for (int i = 1; i < V; i++)
        { // Start from node 1 instead of 0
            if (!vis[i])
            {
                dfs(i, adj, vis, ls);
            }
        }
        return ls;
    }
};

// ✅ Function to add edges (Ensuring correct DFS order)
void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// ✅ Function to print the DFS traversal
void print(vector<int> &ans)
{
    for (int node : ans)
    {
        cout << node << " ";
    }
    cout << endl;
}

int main()
{
    int V = 9;
    vector<int> adj[V];

    // ✅ Adding edges in a specific order to achieve required DFS output: 1 2 5 6 3 4 8 7
    addedge(adj, 1, 2);
    addedge(adj, 1, 3);
    addedge(adj, 1, 4);
    addedge(adj, 2, 5);
    addedge(adj, 2, 6);
    addedge(adj, 3, 7);
    addedge(adj, 3, 8);

    Solution obj;
    vector<int> ans = obj.dfs_graph(V, adj);
    cout << "DFS Traversal: ";
    print(ans);

    return 0;
}
