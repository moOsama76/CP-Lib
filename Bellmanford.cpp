#include <bits/stdc++.h>
using namespace std;

vector<int> dis(11);
vector<pair<int, int>>adj[11];

void bellmanford(int iterations) {
    while (iterations--){
        for(int i = 0; i < 11; i++){
            for(auto j : adj[i]){
                dis[j.first] = min(dis[j.first], dis[i]+j.second);
            }
        }
    }
}

void bellmanfordPreCall(int cur, int nodes){
    for(int i = 0; i < 11; i++)
        dis[i] = INT_MAX;
    dis[cur] = 0;
    bellmanford(nodes-1);
}

int main()
{

    int edges, nodes, maxNode;
    cin >> edges >> nodes >> maxNode;
    for (int i = 1; i <= edges; i++){
        int u, v, dis;
        cin >> u >> v >> dis;
        adj[u].push_back({v, dis});
        //adj[v].push_back({u, dis}); Algorithm don't work with undirected graphs

    }
    bellmanfordPreCall(1, nodes); // Shortest path from node 1 to any node
    for(int i = 1; i <= maxNode; i++){
        cout << dis[i] << " ";
    }
}
