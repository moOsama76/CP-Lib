#include <bits/stdc++.h>
using namespace std;

vector<int> dis(11);
vector<pair<int, int>>adj[11];

void bellmanford(int edges) {
    edges--;
    while (edges--){
        for(int i = 0; i < 11; i++){
            for(auto j : adj[i]){
                dis[j.first] = min(dis[j.first], dis[i]+j.second);
            }
        }
    }
}

void bellmanfordPreCall(int cur, int edges){
    for(int i = 0; i < 11; i++)
        dis[i] = INT_MAX;
    dis[cur] = 0;
    bellmanford(edges);
}

int main()
{

    int edges, maxNode;
    cin >> edges >> maxNode;
    for (int i = 1; i <= edges; i++){
        int u, v, dis;
        cin >> u >> v >> dis;
        adj[u].push_back({v, dis});
        //adj[v].push_back({u, dis}); Algorithm don't work with undirected graphs

    }
    bellmanfordPreCall(1, edges); // Shortest path from node 1 to any node
    for(int i = 1; i <= maxNode; i++){
        cout << dis[i] << " ";
    }
}
