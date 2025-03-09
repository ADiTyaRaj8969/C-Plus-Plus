#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) : data(val), next(nullptr) {}
};

// Function to split the linked list into two halves
void splitList(ListNode* head, ListNode** first, ListNode** second) {
    ListNode* slow = head;
    ListNode* fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    *first = head;
    *second = slow->next;
    slow->next = nullptr; // Break the list into two halves
}

// Function to merge two sorted linked lists
ListNode* mergeSortedLists(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    ListNode* result = nullptr;

    if (l1->data <= l2->data) {
        result = l1;
        result->next = mergeSortedLists(l1->next, l2);
    } else {
        result = l2;
        result->next = mergeSortedLists(l1, l2->next);
    }

    return result;
}

// Merge sort function
ListNode* mergeSort(ListNode* head) {
    if (!head || !head->next) return head; // Base case

    ListNode* first = nullptr;
    ListNode* second = nullptr;

    // Split the list into two halves
    splitList(head, &first, &second);

    // Recursively sort each half
    first = mergeSort(first);
    second = mergeSort(second);

    // Merge the sorted halves
    return mergeSortedLists(first, second);
}

// Helper function to create a linked list from an array
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

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << "->";
        head = head->next;
    }
    cout << endl;
}

// Main function to test the code
int main() {
    // Input: LinkedList: 3->5->2->4->1
    int arr[] = {3, 5, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = createList(arr, n);

    cout << "Original List: ";
    printList(head);

    // Sort the linked list using merge sort
    head = mergeSort(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}
