/*Given an undirected graph, return a vector of all nodes by
traversing the graph using breadth-first search (BFS).*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> bfs_graph(int v, vector<int> adj[])
    {
        int visited[v] = {0};
        visited[0] = 1;
        queue<int> q;
        // push initial start node
        q.push(0);
        vector<int> bfs;
        // iterate thill queue is empty
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            // traversal in neighbours
            for (auto it : adj[node])
            {
                if (!visited[it])
                {
                    visited[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    vector<int> adj[6];
    addedge(adj, 0, 1);
    addedge(adj, 1, 2);
    addedge(adj, 1, 3);
    addedge(adj, 2, 3);
    addedge(adj, 3, 4);
    addedge(adj, 3, 3);
    Solution obj;
    vector<int> ans = obj.bfs_graph(6, adj);
    print(ans);
    return 0;
}