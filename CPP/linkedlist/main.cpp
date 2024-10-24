#include "LinkedList.h"
#include <vector>
#include <set>

using namespace std;

int main()
{
	LinkedList L;

	vector<int> v1 = { 2, 4, 6, 8, 10 };
	vector<int> v2 = { 1, 3, 5, 7, 9 };
	LinkedList* list1 = L.arrayToLinkedList(v1);
	LinkedList* list2 = L.arrayToLinkedList(v2);

	LinkedList* node_0 = new LinkedList(1);
	LinkedList* node_1 = new LinkedList(2);
	LinkedList* node_2 = new LinkedList(3);
	LinkedList* node_3 = new LinkedList(4);
	LinkedList* node_4 = new LinkedList(5);
	LinkedList* node_5 = new LinkedList(6);

	node_0->next = node_1;
	node_1->next = node_2;
	node_2->next = node_3;
	node_3->next = node_4;
	node_4->next = node_5;
	node_5->next = node_0;

	LinkedList* list3 = node_0;

	if (L.isLoopOptimal(list1)) {
		L.printCircularLinkedList(list1);
	}
	else {
		L.printLinkedList(list1);
	}

	if (L.isLoopOptimal(list2)) {
		L.printCircularLinkedList(list2);
	}
	else {
		L.printLinkedList(list2);
	}

	if (L.isCircular(list3)) {
		L.printCircularLinkedList(list3);
	}
	else {
		L.printLinkedList(list3);
	}

	//L.printLinkedList(List1);
	//L.printLinkedList(list2);
	//L.printLinkedList(list3);


	cout << "--------- LinkedList 1 -----------" << endl;

	if (L.isLoopOptimal(list1)) {
		cout << "There is a loop in this linkedlist" << endl;
	}
	else {
		cout << "No loop is present in the linkedlist" << endl;
	}

	cout << "--------- LinkedList 2 -----------" << endl;

	if (L.isLoopOptimal(list2)) {
		cout << "There is a loop in this linkedlist" << endl;
	}
	else {
		cout << "No loop is present in the linkedlist" << endl;
	}

	cout << "--------- LinkedList 3 -----------" << endl;

	if (L.isLoopOptimal(list3)) {
		cout << "There is a loop in this linkedlist" << endl;
	}
	else {
		cout << "No loop is present in the linkedlist" << endl;
	}

	L.deleteLinkedList(list1);
	L.deleteLinkedList(list2);
	/*L.deleteCircularLinkedList(list3);*/

	return 0;
}
