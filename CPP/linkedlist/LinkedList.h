#include <iostream>
#include <vector>
#include <set>

using namespace std;

class LinkedList {
public:
	int data;
	LinkedList* next;

	// constructor
	LinkedList(){}
	LinkedList(int data, LinkedList* next = nullptr) : data(data), next(next) {}

	// list of methods available
	
	// convert the vector into a linkedlist
	LinkedList* arrayToLinkedList(vector<int>& arr) {
		if (arr.size() == 0) return nullptr;

		LinkedList* head = new LinkedList(arr[0]);
		LinkedList* mover = head;

		for (int i = 1; i < arr.size(); i++) {
			LinkedList* temp = new LinkedList(arr[i]);
			mover->next = temp;
			mover = temp;
		}

		return head;
	}

	// display the elements in the linkedlist
	void printLinkedList(LinkedList* head) {
		if (head == nullptr) {
			cout << "The linkedlist is empty!" << endl;
			return;
		}
		else {
			LinkedList* temp = head;
			while (temp) {
				cout << temp->data << "->";
				temp = temp->next;
			}
			cout << "null" << endl;
		}
	}

	void printCircularLinkedList(LinkedList* head) {
		if (head == nullptr) {
			cout << "The linkedlist is empty!" << endl;
			return;
		}
		else {
			LinkedList* temp = head;
			do{
				cout << temp->data << "->";
				temp = temp->next;
			} while (temp != head);
			cout << head->data << endl;
		}
	}

	// check if the linkedlist is empty
	bool isNull(LinkedList* head) {
		if (head == nullptr) {
			cout << "The linkedlist is empty!" << endl;
			return true;
		}
		return false;
	}

	// check if there is a loop in the linkedlist
	bool isLoopBrute(LinkedList* head) {
		if (isNull(head)) return false;
		else if (head->next == nullptr) return false;

		set<LinkedList*>s;
		LinkedList* temp = head;

		while (temp) {
			if (s.find(temp) != s.end()) return true;
			s.insert(temp);
			temp = temp->next;
		}
		return false;
	}

	// length of the linkedlist 
	int length(LinkedList* head) {
		if (head == nullptr) return 0;
		int count = 0;

		LinkedList* temp = head;
		while (temp != nullptr) {
			temp = temp->next;
			count++;
		}
		return count;
	}

	bool isLoopOptimal(LinkedList* head) {
		if (isNull(head)) return false;
		else if (head->next == nullptr) return false;
		else {
			LinkedList* slow = head;
			LinkedList* fast = head;

			while (fast != nullptr && fast->next != nullptr) {
				slow = slow->next;
				fast = fast->next->next;

				if (slow == fast) {
					return true;
				}
			}
		}
		return false;
	}

	bool isCircular(LinkedList* head) {
		if (isNull(head)) return false;
		else if (head->next == nullptr) return false;

		LinkedList* temp = head;
		while (temp != nullptr && temp != head) {
			temp = temp->next;
		}

		return (temp == head);
	}

	void deleteLinkedList(LinkedList* head) {
		LinkedList* temp;
		while (head != nullptr) {
			temp = head;
			head = head->next;
			delete temp;
		}
	}

	void deleteCircularLinkedList(LinkedList* list) {
		LinkedList* temp = list->next;
		list->next = nullptr;
		deleteLinkedList(temp);

		delete list;
	}

	// adding elements
	LinkedList* addElementAtStart(LinkedList* head, int ele) {
		if (head == nullptr) {
			head = new LinkedList(ele);
			return head;
		}

		LinkedList* temp = new LinkedList(ele);
		temp->next = head;
		head = temp;

		return head;
	}

	LinkedList* addElementAtEnd(LinkedList* head, int ele) {
		if (head == nullptr) {
			head = new LinkedList(ele);
			return head;
		}

		LinkedList* tail = new LinkedList(ele);

		LinkedList* temp = head;
		while (temp->next != nullptr) {
			temp = temp->next;
		}

		temp->next = tail;

		return head;
	}

	LinkedList* addElementAtPos(LinkedList* head, int ele, int pos) {
		if (head == nullptr) {
			cout << "Cannot add element" << ele << " at positon " << pos << endl;
			return head;
		}

		else if (length(head) < pos) {
			cout << "Position " << pos << " is out of bounds" << endl;
			return head;
		}

		int count = 0;
		LinkedList* temp = head;
		while (temp && count != pos - 1) {
			temp = temp->next;
			count++;
		}

		LinkedList* newLinkedList = new LinkedList(ele);
		newLinkedList->next = temp->next;
		temp->next = newLinkedList;

		return head;
	}
};

