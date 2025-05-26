#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
vector<int> shortestpath(int n, int m, vector<vector<int>> &edges){
    // create adjanceny list
    vector<pair<int,int>> adj[n+1];
    for(auto it: edges){
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
    }
    // create a priority queue to store nodes with distances
    priority_queue<pair<int, int> , vector<pair<int, int>> , greater<pair<int, int>>> pq;
    //  distance array to store nodes with indexes
    vector<int> dist(n+1, 1e9), parent(n+1);
    for(int i=0; i<=n; i++){
        parent[i]= i;
        dist[1]= 0;
    pq.push({0, 1});    
    while(!pq.empty(){
        // topmost element has minimum distance
        auto it: pqq.top();
        pq.pop();
        int node = it.second;
        int dis= it.first;
        // iterate through adjacent 
        for(auto it: adj[node]){
            int adjnode= it.first;
            int edw= it.second;
            // check if the distance is less than the current distance
            if(dis+edw < dist[adjnode]{
                dist[adjnode]+dis+edw;
                pq.push({dis+edw, adjnode});
                parent[adjnode]= node;
            })
        }
    })
    }
}