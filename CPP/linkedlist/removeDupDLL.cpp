// remove duplicates from a sorted doubly linked list

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data, Node *next = NULL, Node *prev = NULL) : data(data), next(next), prev(prev) {}
};

Node *arr2DLL(vector<int> &arr)
{
    if (arr.size() == 0)
    {
        cout << "There are no elements in the array!" << endl;
        return NULL;
    }

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        temp->prev = mover;
        mover = temp;
    }
    return head;
}

void printList(Node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// O(n) time complexity, but it's not optimal
set<int> removeDupDLL(Node* head){
    if(head == NULL)
        return {};

    Node* temp = head;

    set<int> DLLset;
    while(temp != NULL){
        if(DLLset.find(temp->data) == DLLset.end()){
            DLLset.insert(temp->data);
        }
        temp = temp->next;
    }
    return DLLset;
}

// O(n) time complexity
void removeDupDLLoptimal(Node *head)
{
    if (head == NULL)
        return;
    Node *temp = head;
    while (temp != NULL)
    {
        Node *curr = temp;
        while (curr->next != NULL && curr->data == curr->next->data)
        {
            curr->next = curr->next->next;
        }
        temp = temp->next;
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10, 10};
    Node *head1 = arr2DLL(arr);
    Node *head2 = arr2DLL(arr);

    removeDupDLLoptimal(head1);

    printList(head1);

    cout << endl;

    set<int> DLLset = removeDupDLL(head2);

    for(auto node : DLLset){
        cout << node << " ";
    }
    cout << endl;

    return 0;
}