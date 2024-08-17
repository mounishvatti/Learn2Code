// Given a singly linked list of size n, reverse all the nodes of a group of size k at a time and return its modified list.

// Example 1:

// Input: head = [1,2,3,4,5], k = 2
// Output: [2,1,4,3,5]
// Explanation: The input list is modified to [2,1,4,3,5].

// Example 2:

// Input: head = [], k = 4
// Output: []

// Example 3:

// Input: head = [1], k = 1
// Output: [1]

// Example 4:

// Input: head = [1,2], k = 1
// Output: [2,1]

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data, Node* next = NULL): data(data), next(next) {}
};

Node* arr2ll(vector<int> &arr) {
    if (arr.size() == 0) {
        cout << "There are no elements in the array!" << endl;
        return NULL;
    }

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverseKGroup(Node* head, int k) {
    if (head == NULL || k == 1) return head;

    Node* temp = head;
    int count = 0;

    // Check if there are at least k nodes left to reverse
    while (temp != NULL && count < k) {
        temp = temp->next;
        count++;
    }

    if (count == k) {
        // Reverse the first k nodes
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        for (int i = 0; i < k; ++i) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Recursively reverse the remaining nodes and link the list
        if (next != NULL) {
            head->next = reverseKGroup(next, k);
        }

        // Return the new head of this segment
        return prev;
    }

    // If there are fewer than k nodes left, return the head as it is
    return head;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node* head = arr2ll(arr);
    Node* newHead = reverseKGroup(head, 3);
    printList(newHead);

    return 0;
}