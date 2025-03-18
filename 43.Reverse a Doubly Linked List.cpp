#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
Node* reverseDoublyLinkedList(Node* head) {
    if (!head) return nullptr;
    Node* current = head;
    Node* temp = nullptr;
    while (current) {
        temp = current->prev;    
        current->prev = current->next;
        current->next = temp;
        current = current->prev;  
    }
    if (temp) {
        head = temp->prev;
    }
    return head;
}
void printDoublyLinkedList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " <-> ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    Node* head = new Node(3);
    head->next = new Node(4);
    head->next->prev = head;
    head->next->next = new Node(5);
    head->next->next->prev = head->next;
    cout << "Original List: ";
    printDoublyLinkedList(head);
    head = reverseDoublyLinkedList(head);
    cout << "Reversed List: ";
    printDoublyLinkedList(head);
    return 0;
}
