#include <iostream>
using namespace std;
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) : data(val), next(nullptr) {}
};
ListNode* findIntersection(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0); 
    ListNode* current = dummy;
    while (l1 && l2) {
        if (l1->data == l2->data) {
            current->next = new ListNode(l1->data); 
            current = current->next;
            l1 = l1->next;
            l2 = l2->next;
        } else if (l1->data < l2->data) {
            l1 = l1->next;
        } else {
            l2 = l2->next; 
        }
    }
    return dummy->next;
}
void printList(ListNode* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << "->";
        head = head->next;
    }
    cout << endl;
}
ListNode* createList(int arr[], int size) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int i = 0; i < size; i++) {
        ListNode* newNode = new ListNode(arr[i]);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}
int main() {
    int arr1[] = {1, 2, 3, 4, 6};
    int arr2[] = {2, 4, 6, 8};
    ListNode* l1 = createList(arr1, 5);
    ListNode* l2 = createList(arr2, 4);
    cout << "List 1: ";
    printList(l1);
    cout << "List 2: ";
    printList(l2);
    ListNode* intersection = findIntersection(l1, l2);
    cout << "Intersection: ";
    printList(intersection);

    return 0;
}
