#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data, Node* next = NULL) : data(data), next(next) {}
};

Node* arrayToLinkedList(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = i; i < arr.size(); i++){
        Node* newNode = new Node(arr[i]);
        mover->next = newNode;
        mover = mover->next;
    }
    return head;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* merge(Node* list1, Node* list2){
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;
    while(list1 != NULL && list2 != NULL){
        if(list1->data < list2->data){
            temp->next = list1;
            temp = list1;
            list1 = list1->next;
        }
        else{
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }
    }
    if(list1) temp->next = list1;
    else temp->next = list2;

    return dummyNode->next;
}

int main(){
    vector<int> array1 = {8,9,10,11,12,13,14};
    vector<int> array2 = {1,2,3,4,5,6,7};
    Node* linkedList1 = arrayToLinkedList(array1);
    Node* linkedList2 = arrayToLinkedList(array2);

    Node* mergedList = merge(linkedList1, linkedList2);
    printLinkedList(mergedList);
}