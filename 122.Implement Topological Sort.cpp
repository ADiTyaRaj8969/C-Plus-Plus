#include<bits/stdc++.h>
using namespace std;
vector<int> topologicalSort(int V, vector<vector<int>>& adj) {
    vector<int> inDegree(V, 0);
    for (int u = 0; u < V; ++u) {
        for (int v : adj[u]) {
            inDegree[v]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < V; ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }
    vector<int> topOrder;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        topOrder.push_back(u);
        for (int v : adj[u]) {
            inDegree[v]--;
            if (inDegree[v] == 0) {
                q.push(v);
            }
        }
    }
    if (topOrder.size() == V) {
        return topOrder;
    } else {
        return {};
    }
}
int main() {
    int V = 4;
    vector<vector<int>> adj = {{}, {0}, {0}, {0}}; 
    vector<int> result = topologicalSort(V, adj);
    if (!result.empty()) {
        for (int node : result) {
            cout << node << " ";
        }
        cout << endl;
    } else {
        cout << "Cycle detected, no topological sort possible." << endl;
    }
    return 0;
}
