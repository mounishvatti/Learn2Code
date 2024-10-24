#include <iostream>
#include <vector>
#include <set>

using namespace std;

class LinkedList
{
public:
	int data;
	LinkedList *next;

	// constructor
	LinkedList() {}
	LinkedList(int data, LinkedList *next = nullptr) : data(data), next(next) {}

	// list of methods available

	// convert the vector into a linkedlist
	LinkedList *arrayToLinkedList(vector<int> &arr)
	{
		if (arr.size() == 0)
			return nullptr;

		LinkedList *head = new LinkedList(arr[0]);
		LinkedList *mover = head;

		for (int i = 1; i < arr.size(); i++)
		{
			LinkedList *temp = new LinkedList(arr[i]);
			mover->next = temp;
			mover = temp;
		}

		return head;
	}

	// display the elements in the linkedlist
	void printLinkedList(LinkedList *head)
	{
		if (head == nullptr)
		{
			cout << "The linkedlist is empty!" << endl;
			return;
		}
		else
		{
			LinkedList *temp = head;
			while (temp)
			{
				cout << temp->data << "->";
				temp = temp->next;
			}
			cout << "null" << endl;
		}
	}

	void printCircularLinkedList(LinkedList *head)
	{
		if (head == nullptr)
		{
			cout << "The linkedlist is empty!" << endl;
			return;
		}
		else
		{
			LinkedList *temp = head;
			do
			{
				cout << temp->data << "->";
				temp = temp->next;
			} while (temp != head);
			cout << head->data << endl;
		}
	}

	// check if the linkedlist is empty
	bool isNull(LinkedList *head)
	{
		if (head == nullptr)
		{
			cout << "The linkedlist is empty!" << endl;
			return true;
		}
		return false;
	}

	// check if there is a loop in the linkedlist
	bool isLoopBrute(LinkedList *head)
	{
		if (isNull(head))
			return false;
		else if (head->next == nullptr)
			return false;

		set<LinkedList *> s;
		LinkedList *temp = head;

		while (temp)
		{
			if (s.find(temp) != s.end())
				return true;
			s.insert(temp);
			temp = temp->next;
		}
		return false;
	}

	// length of the linkedlist
	int length(LinkedList *head)
	{
		if (head == nullptr)
			return 0;
		int count = 0;

		LinkedList *temp = head;
		while (temp != nullptr)
		{
			temp = temp->next;
			count++;
		}
		return count;
	}

	bool isLoopOptimal(LinkedList *head)
	{
		if (isNull(head))
			return false;
		else if (head->next == nullptr)
			return false;
		else
		{
			LinkedList *slow = head;
			LinkedList *fast = head;

			while (fast != nullptr && fast->next != nullptr)
			{
				slow = slow->next;
				fast = fast->next->next;

				if (slow == fast)
				{
					return true;
				}
			}
		}
		return false;
	}

	bool isCircular(LinkedList *head)
	{
		if (isNull(head))
			return false;
		else if (head->next == nullptr)
			return false;

		LinkedList *temp = head;
		while (temp != nullptr && temp != head)
		{
			temp = temp->next;
		}

		return (temp == head);
	}

	void deleteLinkedList(LinkedList *head)
	{
		LinkedList *temp;
		while (head != nullptr)
		{
			temp = head;
			head = head->next;
			delete temp;
		}
	}

	void deleteCircularLinkedList(LinkedList *list)
	{
		LinkedList *temp = list->next;
		list->next = nullptr;
		deleteLinkedList(temp);

		delete list;
	}

	// adding elements
	LinkedList *addElementAtStart(LinkedList *head, int ele)
	{
		if (head == nullptr)
		{
			head = new LinkedList(ele);
			return head;
		}

		LinkedList *temp = new LinkedList(ele);
		temp->next = head;
		head = temp;

		return head;
	}

	LinkedList *addElementAtEnd(LinkedList *head, int ele)
	{
		if (head == nullptr)
		{
			head = new LinkedList(ele);
			return head;
		}

		LinkedList *tail = new LinkedList(ele);

		LinkedList *temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}

		temp->next = tail;

		return head;
	}

	LinkedList *addElementAtPos(LinkedList *head, int ele, int pos)
	{
		if (pos < 1)
		{
			cout << "Invalid position, must be >= 1." << endl;
			return head; // Invalid position
		}

		if (pos == 1)
		{ // Insert at head
			return addElementAtStart(head, ele);
		}

		int len = length(head);
		if (pos > len + 1)
		{ // Allow insertion at the end
			cout << "Position " << pos << " is out of bounds" << endl;
			return head;
		}

		LinkedList *temp = head;
		int count = 1; // Start counting from 1
		while (temp && count < pos - 1)
		{
			temp = temp->next; // Move to the node before the position
			count++;
		}

		LinkedList *newNode = new LinkedList(ele);
		newNode->next = temp->next; // Insert new node at the position
		temp->next = newNode;

		return head; // Return the head of the linked list
	}

	// delete nodes in the linked list
	void deleteHead(LinkedList *head)
	{
		if (isNull(head))
			return;
		LinkedList *temp = head;
		head = head->next;
		delete temp;
	}

	LinkedList *deleteTail(LinkedList *head)
	{
		if (isNull(head))
			return nullptr;

		if (head->next == nullptr)
		{ // Only one element
			delete head;
			return nullptr;
		}

		LinkedList *temp = head;
		while (temp->next->next != nullptr)
		{ // Stop at the second last node
			temp = temp->next;
		}

		delete temp->next;	  // Delete the last node
		temp->next = nullptr; // Set the second last node's next to nullptr

		return head; // Return the updated head
	}

	LinkedList *deleteNode(LinkedList *head, int data)
	{
		if (isNull(head))
			return nullptr;
		if (head->data == data)
		{
			LinkedList *newHead = head->next;
			delete head;
			return newHead;
		}

		LinkedList *temp = head;
		while (temp->next != nullptr)
		{
			if (temp->next->data == data)
			{
				LinkedList *nodeToDelete = temp->next;
				temp->next = temp->next->next;
				delete nodeToDelete;
				return head;
			}
			temp = temp->next;
		}

		return head;
	}

	LinkedList *deleteNodeAtPos(LinkedList *head, int pos)
	{
		if (isNull(head))
		{
			cout << "Invalid position value, the linked list is empty." << endl;
			return nullptr;
		}

		if (pos == 1)
		{
			LinkedList *newHead = head->next;
			delete head;	// Free the old head
			return newHead; // Return the new head
		}

		int len = length(head);

		if (pos > len || pos < 1)
		{
			cout << "Invalid position value, the position " << pos << " exceeds the length of the linked list provided." << endl;
			return head; // Return the unchanged head
		}

		// Handle case for deleting the tail node
		if (pos == len)
		{
			return deleteTail(head); // Use your existing deleteTail function
		}

		// Find the node before the one we want to delete
		LinkedList *temp = head;
		int count = 1; // Start counting from 1
		while (temp != nullptr && count < pos - 1)
		{
			temp = temp->next; // Move to the next node
			count++;
		}

		if (temp != nullptr && temp->next != nullptr)
		{
			LinkedList *nodeToDelete = temp->next; // The node to delete
			temp->next = nodeToDelete->next;	   // Bypass the node to delete
			delete nodeToDelete;				   // Delete the node
		}

		return head; // Return the head of the linked list
	}

	// reverse a singly linked list
	LinkedList *reverse(LinkedList *head)
	{ // TC: O(2N), SC: O(1)
		if (head == NULL || head->next == NULL)
			return head;

		LinkedList *temp = head;
		LinkedList *prevNode = NULL;

		while (temp)
		{
			LinkedList *nextNode = temp->next;
			temp->next = prevNode;
			prevNode = temp;
			temp = nextNode;
		}
		return prevNode;
	}

	// sort a singly linked list
	LinkedList *helper_findMiddle(LinkedList *head)
	{
		LinkedList *slow = head;
		LinkedList *fast = head->next;

		while (fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}

	LinkedList *helper_merge(LinkedList *list1, LinkedList *list2)
	{
		LinkedList *dummyNode = new LinkedList(-1);
		LinkedList *temp = dummyNode;
		while (list1 != NULL && list2 != NULL)
		{
			if (list1->data < list2->data)
			{
				temp->next = list1;
				temp = list1;
				list1 = list1->next;
			}
			else
			{
				temp->next = list2;
				temp = list2;
				list2 = list2->next;
			}
		}
		if (list1)
			temp->next = list1;
		else
			temp->next = list2;

		return dummyNode->next;
	}

	LinkedList *sort(LinkedList *head)
	{

		if (head == NULL || head->next == NULL)
		{
			return head;
		}

		LinkedList *middle = helper_findMiddle(head);
		LinkedList *rightHead = middle->next;
		LinkedList *leftHead = head;

		middle->next = NULL;

		leftHead = sort(leftHead);
		rightHead = sort(rightHead);

		return helper_merge(leftHead, rightHead);
	}

	// remove duplicates from a singly linkedlist
	LinkedList *removeDuplicates(LinkedList *head)
	{
		if (head == nullptr)
			return nullptr; // Return nullptr for an empty list

		LinkedList *temp = head;
		while (temp != nullptr)
		{
			LinkedList *curr = temp;
			while (curr->next != nullptr && curr->data == curr->next->data)
			{
				curr->next = curr->next->next; // Skip duplicates
			}
			temp = temp->next; // Move to the next unique element
		}
		return head; // Return the modified list
	}
};
