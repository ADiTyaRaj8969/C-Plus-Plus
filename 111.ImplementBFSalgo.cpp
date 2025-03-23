#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(int V, vector<vector<int>>& adj) {
    vector<int> bfsResult;
    vector<bool> visited(V, false); 
    queue<int> q; 
    visited[0] = true;
    q.push(0);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfsResult.push_back(node);  
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true; 
                q.push(neighbor);  
            }
        }
    }
    return bfsResult; 
}
int main() {
    vector<vector<int>> adj = {{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    int V = adj.size(); 
    vector<int> bfsResult = bfs(V, adj);
    cout << "BFS Traversal: ";
    for (int node : bfsResult) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}
