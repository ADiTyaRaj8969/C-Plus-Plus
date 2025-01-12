#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node *next, *prev;
    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
int countTriplets(Node *head, int x) {
    Node *ptr1, *ptr2, *ptr3;
    int count = 0;
    for (ptr1 = head; ptr1 != nullptr; ptr1 = ptr1->next)
        for (ptr2 = ptr1->next; ptr2 != nullptr; ptr2 = ptr2->next)
            for (ptr3 = ptr2->next; ptr3 != nullptr; ptr3 = ptr3->next)
                if ((ptr1->data + ptr2->data + ptr3->data) == x)
                    count++;
    return count;
}
int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;
    int x = 8;
    cout << countTriplets(head, x);
    return 0;
}