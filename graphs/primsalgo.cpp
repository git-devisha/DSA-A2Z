#include <bits/stdc++.h>
using namespace std;

class Prims
{
public:
    int spanningtree(int v, vector<pair<int, int>> adj[])
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> vis(v, 0);

        // {weight, node}
        pq.push({0, 0});
        int sum = 0;

        while (!pq.empty())
        {
            auto topElement = pq.top();
            pq.pop();
            int node = topElement.second;
            int wt = topElement.first;

            if (vis[node] == 1)
                continue;
            vis[node] = 1;
            sum += wt;

            for (auto &neighbor : adj[node])
            { // Use & to avoid unnecessary copies
                int adjnode = neighbor.first;
                int edgeWeight = neighbor.second;
                if (!vis[adjnode])
                {
                    pq.push({edgeWeight, adjnode});
                }
            }
        }
        return sum; // Ensure the return statement is inside the function
    }
};

int main(){
    int v=5;
    vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 1}, {1, 2, 1}, {2, 3, 2}, {3, 4, 1}, {4, 2, 2}};
    vector<pair<int, int>> adj[v];
    for (auto it : edges)
    {
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
    }

    Prims obj;
    int sum = obj.spanningtree(v, adj);
    cout << "The sum of all the edge weights: " << sum << endl;

    return 0;
}