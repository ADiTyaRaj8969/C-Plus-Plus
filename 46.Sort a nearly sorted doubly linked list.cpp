#include <iostream>
using namespace std;
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int x) {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};
Node *sortAKSortedDLL(Node *head, int k) {
    if (head == nullptr || head->next == nullptr)
        return head;
    Node *node = head->next;
    while (node != nullptr) {
        Node *next = node->next;
        Node *curr = node;
        while (curr->prev != nullptr &&
               curr->data < curr->prev->data) {
            Node *node1 = curr->prev->prev; 
            Node *node2 = curr->prev;      
            Node *node3 = curr->next;      
            if (node1 != nullptr)
                node1->next = curr;
            curr->prev = node1;
            node2->next = node3;
            if (node3 != nullptr)
                node3->prev = node2;
            curr->next = node2;
            node2->prev = curr;
        }
        if (curr->prev == nullptr)
            head = curr;

        node = next;
    }
    return head;
}
void printList(Node *curr) {
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
int main() {
    Node *head = new Node(3);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(1);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(5);
    head->next->next->next->prev = head->next->next;
    int k = 2;
    head = sortAKSortedDLL(head, k);
    printList(head);
    return 0;
}