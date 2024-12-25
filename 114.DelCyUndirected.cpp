#include<bits/stdc++.h>
using namespace std;
bool dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, int parent) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, adj, visited, node)) {
                return true; 
            }
        }
        else if (neighbor != parent) {
            return true; 
        }
    }
    return false;
}
bool hasCycle(int V, vector<vector<int>>& adj) {
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(i, adj, visited, -1)) {  
                return true; 
            }
        }
    }
    return false;
}
int main() {
    vector<vector<int>> adj = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}};
    int V = adj.size(); 
    if (hasCycle(V, adj)) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }
    return 0;
}
