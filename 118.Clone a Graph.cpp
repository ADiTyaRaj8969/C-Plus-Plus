#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node(int _val) {
        val = _val;
    }
};
class Solution {
public:
    unordered_map<Node*, Node*> visited;
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;
        if (visited.count(node)) return visited[node];
        Node* clone = new Node(node->val);
        visited[node] = clone;
        for (auto& e : node->neighbors)
            clone->neighbors.push_back(cloneGraph(e));
        return clone;
    }
};
int main() {
    Solution solution;
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    node1->neighbors = {node2, node4};
    node2->neighbors = {node1, node3};
    node3->neighbors = {node2, node4};
    node4->neighbors = {node1, node3};
    Node* clonedGraph = solution.cloneGraph(node1);
    cout << "Cloned Graph Node Values:" << endl;
    unordered_map<Node*, bool> visitedNodes;
    vector<Node*> toVisit = {clonedGraph};
    while (!toVisit.empty()) {
        Node* current = toVisit.back();
        toVisit.pop_back();
        if (visitedNodes[current]) continue;
        visitedNodes[current] = true;
        
        cout << "Node value: " << current->val << " Neighbors: ";
        for (auto& neighbor : current->neighbors) {
            cout << neighbor->val << " ";
            if (!visitedNodes[neighbor]) {
                toVisit.push_back(neighbor);
            }
        }
        cout << endl;
    }
    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete clonedGraph;
    return 0;
}
