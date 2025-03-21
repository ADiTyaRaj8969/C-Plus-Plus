#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
bool isCircular(Node* head) {
    if (head == nullptr) {  
        return false;
    }
    Node* current = head->next;
    while (current != nullptr && current != head) {
        current = current->next;
    }
    return (current == head);
}
int main() {
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    node1->next = node2;
    node2->next = node3;
    node3->next = node1;  
    cout << (isCircular(node1) ? "True" : "False") << endl;
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    node4->next = node5;
    node5->next = nullptr;
    cout << (isCircular(node4) ? "True" : "False") << endl; 
    return 0;
}
