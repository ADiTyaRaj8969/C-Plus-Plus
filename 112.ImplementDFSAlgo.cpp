#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<int>> &adj, int s, int t){
    adj[s].push_back(t);
    adj[t].push_back(s);
}
void DFSRec(vector<vector<int>> &adj, vector<bool> &visited,int s){
    visited[s] = true;
    cout << s << " ";
    for (int i : adj[s])
        if (visited[i] == false)
            DFSRec(adj, visited, i);
}
void DFS(vector<vector<int>> &adj){
    vector<bool> visited(adj.size(), false);
    for (int i = 0; i < adj.size(); i++){
        if (visited[i] == false){
            DFSRec(adj, visited, i);
        }
    }
}
int main(){
    int V = 6;
    vector<vector<int>> adj(V);
    vector<vector<int>> edges = {{1, 2}, {2, 0}, {0, 3}, {4, 5}};
    for (auto &e : edges)
        addEdge(adj, e[0], e[1]);
    cout << "Complete DFS of the graph:" << endl;
    DFS(adj);
    return 0;
}