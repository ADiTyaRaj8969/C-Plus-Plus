#include <iostream>
using namespace std;
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) : data(val), next(nullptr) {}
};
ListNode* getTail(ListNode* head) {
    while (head && head->next) {
        head = head->next;
    }
    return head;
}
ListNode* partition(ListNode* head, ListNode* end, ListNode** newHead, ListNode** newEnd) {
    ListNode* pivot = end;
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* tail = pivot;
    *newHead = nullptr;
    *newEnd = pivot;
    while (curr != pivot) {
        if (curr->data < pivot->data) {
            if (!(*newHead)) {
                *newHead = curr;
            }
            prev = curr;
            curr = curr->next;
        } else {
            if (prev) {
                prev->next = curr->next;
            }
            ListNode* temp = curr->next;
            curr->next = nullptr;
            tail->next = curr;
            tail = curr;
            curr = temp;
        }
    }
    if (!(*newHead)) {
        *newHead = pivot;
    }

    *newEnd = tail;
    return pivot;
}
ListNode* quickSortRecur(ListNode* head, ListNode* end) {
    if (!head || head == end) return head;
    ListNode* newHead = nullptr;
    ListNode* newEnd = nullptr;
    ListNode* pivot = partition(head, end, &newHead, &newEnd);
    if (newHead != pivot) {
        ListNode* temp = newHead;
        while (temp->next != pivot) {
            temp = temp->next;
        }
        temp->next = nullptr;
        newHead = quickSortRecur(newHead, temp);
        temp = getTail(newHead);
        temp->next = pivot;
    }
    pivot->next = quickSortRecur(pivot->next, newEnd);
    return newHead;
}
ListNode* quickSort(ListNode* head) {
    ListNode* tail = getTail(head);
    return quickSortRecur(head, tail);
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
void printList(ListNode* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << "->";
        head = head->next;
    }
    cout << endl;
}
int main() {
    int arr[] = {1, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    ListNode* head = createList(arr, n);
    cout << "Original List: ";
    printList(head);
    head = quickSort(head);
    cout << "Sorted List: ";
    printList(head);
    return 0;
}
