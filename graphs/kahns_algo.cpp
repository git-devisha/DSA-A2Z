#include <bits/stdc++.h>
using namespace std;

class Kahns{
public:
    vector<int> toposort(int v, vector<int> adj[]){
        int indegree[v]= {0};
        for(int i=0; i<v; i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0; i<v; i++){
            if(indegree[i] ==0) q.push(i);
        }
        
        vector<int> topo;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            topo.push_back(node);

            for(auto it: adj[node]){
                indegree[it] --;
                if(indegree[it] ==0) q.push(it);
            }
        }

        if(topo.size() ==v) return topo;
    }
};
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v); // Directed edge from u to v
}


int main(){
    int v=6;
    vector<int> adj[v];
    // Insert edges into the graph
    addEdge(adj, 5, 2);
    addEdge(adj, 5, 0);
    addEdge(adj, 4, 0);
    addEdge(adj, 4, 1);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 1);

    Kahns obj;
    vector<int> topo = obj.toposort(v, adj);

    if (topo.empty())
    {
        cout << "Cycle detected, topological sorting not possible.\n";
    }
    else
    {
        cout << "Topological Sort: ";
        for (int node : topo)
        {
            cout << node << " ";
        }
        cout << "\n";
    }

    return 0;
}