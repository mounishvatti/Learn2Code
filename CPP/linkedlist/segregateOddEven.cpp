#include <bits/stdc++.h>
#include "LinkedList.h"

using namespace std;

Node* arr2LL(vector<int>&arr){
	if(arr.size()==0) return nullptr;

	Node* head = new Node(arr[0]);
	Node* mover = head;

	for(int i=1; i<arr.size(); i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp; // or mover = mover->next
	}
	return head;
}

void display(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

pair<Node*, Node*> segregate(Node* head){
	Node* temp = head;

	vector<int>evenArr;
	vector<int>oddArr;

	int count = 0;

	while(temp){
		count++;
		if(count%2==0){
			evenArr.push_back(temp->data);
		} else {
			oddArr.push_back(temp->data);
		}
		temp = temp->next;
	}

	Node* headOdd = arr2LL(oddArr);
	Node* headEven = arr2LL(evenArr);

	return make_pair(headOdd, headEven);
}

int main(){
	vector<int>arr = {1,2,3,4,5,6,7,8,9};

	Node* head = arr2LL(arr);
	

	display(head);
}