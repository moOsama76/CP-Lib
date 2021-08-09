#include <bits/stdc++.h>
using namespace std;

vector<int> dis(11);
vector<bool> vis(11);
vector<pair<int, int>>adj[11];

void dijkstra(int cur) {
    vis[cur] = true;
    for(auto i : adj[cur]){
        dis[i.first] = min(dis[i.first], dis[cur]+i.second);
    }
    int mn = INT_MAX;
    for(auto i : adj[cur]){
        if(!vis[i.first] && i.second < mn){
            mn = i.first;
        }
    }
    if(mn != INT_MAX)
        dijkstra(mn);
}

void dijkstraPreCall(int cur){
    for(int i = 0; i < 11; i++)
        dis[i] = INT_MAX;
    dis[cur] = 0;
    dijkstra(cur);
}

int main()
{

    int edges, maxNode;
    cin >> edges >> maxNode;
    while (edges--){
        int u, v, dis;
        cin >> u >> v >> dis;
        adj[u].push_back({v, dis});
        adj[v].push_back({u, dis}); // Undirected Graph

    }
    dijkstraPreCall(1); // Shortest path from node 1 to any node
    for(int i = 1; i <= maxNode; i++){
        cout << dis[i] << " ";
    }
}
