/*
Reorder the Linked List in such a way that the first element is followed by the last element, then the second element is followed by the second last element and so on.

Example:
Input: 1->2->3->4
Output: 1->4->2->3

Explanation: The first element is 1, the second element is 4, the third element is 3, and the fourth element is 2.
*/

#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data, Node* next = NULL) : data(data), next(next) {}
};

Node* arr2LL(vector<int>&arr) {
    if (arr.size() == 0) {
        cout << "There are no elements in the array!" << endl;
        return NULL;
    }

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    while (current != NULL) {
        Node* nextTemp = current->next;
        current->next = prev;
        prev = current;
        current = nextTemp;
    }
    return prev;
}

void reorderList(Node* head) {
    if (head == NULL || head->next == NULL) {
        return;
    }

    // Find the middle of the list
    Node* slow = head;
    Node* fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the list
    Node* second = slow->next;
    slow->next = NULL;  // Split the list into two halves
    second = reverseList(second);

    // Merge the two halves
    Node* first = head;
    while (second != NULL) {
        Node* temp1 = first->next;
        Node* temp2 = second->next;

        first->next = second;
        second->next = temp1;

        first = temp1;
        second = temp2;
    }
}

void printList(Node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    Node *head = arr2LL(arr);
    cout << "Original list: ";
    printList(head);

    reorderList(head);

    cout << "Reordered list: ";
    printList(head);

    return 0;
}