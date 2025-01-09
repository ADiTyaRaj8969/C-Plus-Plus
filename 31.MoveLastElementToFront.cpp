#include <iostream>
using namespace std;
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
Node *moveToFront(Node *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node *secLast = NULL;
    Node *last = head;
    while (last->next != NULL) {
        secLast = last;
        last = last->next;
    }
    secLast->next = NULL;
    last->next = head;
    head = last;

    return head;
}
void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout << "Linked list before: " << endl;
    printList(head);
    head = moveToFront(head);
    cout << "Linked list after: " << endl;
    printList(head);
    return 0;
}