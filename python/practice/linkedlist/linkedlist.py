class LinkedList:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next

    # Convert the list into a linked list
    def array_to_linked_list(self, arr):
        if len(arr) == 0:
            return None

        head = LinkedList(arr[0])
        mover = head

        for i in range(1, len(arr)):
            temp = LinkedList(arr[i])
            mover.next = temp
            mover = temp

        return head

    # Display the elements in the linked list
    def print_linked_list(self, head):
        if head is None:
            print("The linked list is empty!")
            return
        else:
            temp = head
            while temp:
                print(f"{temp.data}->", end="")
                temp = temp.next
            print("null")

    def print_circular_linked_list(self, head):
        if head is None:
            print("The linked list is empty!")
            return
        else:
            temp = head
            while True:
                print(f"{temp.data}->", end="")
                temp = temp.next
                if temp == head:
                    break
            print(f"{head.data}")

    # Check if the linked list is empty
    def is_null(self, head):
        if head is None:
            print("The linked list is empty!")
            return True
        return False

    # Check if there is a loop in the linked list (brute force)
    def is_loop_brute(self, head):
        if self.is_null(head):
            return False
        elif head.next is None:
            return False

        s = set()
        temp = head

        while temp:
            if temp in s:
                return True
            s.add(temp)
            temp = temp.next

        return False

    # Length of the linked list
    def length(self, head):
        if head is None:
            return 0

        count = 0
        temp = head
        while temp is not None:
            temp = temp.next
            count += 1

        return count

    # Check if there is a loop in the linked list (optimal)
    def is_loop_optimal(self, head):
        if self.is_null(head):
            return False
        elif head.next is None:
            return False

        slow, fast = head, head

        while fast is not None and fast.next is not None:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                return True

        return False

    # Check if the linked list is circular
    def is_circular(self, head):
        if self.is_null(head):
            return False
        elif head.next is None:
            return False

        temp = head
        while temp is not None and temp != head:
            temp = temp.next

        return temp == head

    # Delete the entire linked list
    def delete_linked_list(self, head):
        while head is not None:
            temp = head
            head = head.next
            del temp

    # Delete circular linked list
    def delete_circular_linked_list(self, list):
        temp = list.next
        list.next = None
        self.delete_linked_list(temp)
        del list

    # Add element at the start
    def add_element_at_start(self, head, ele):
        if head is None:
            head = LinkedList(ele)
            return head

        temp = LinkedList(ele)
        temp.next = head
        head = temp

        return head

    # Add element at the end
    def add_element_at_end(self, head, ele):
        if head is None:
            head = LinkedList(ele)
            return head

        tail = LinkedList(ele)
        temp = head
        while temp.next is not None:
            temp = temp.next

        temp.next = tail
        return head

    # Add element at a specific position
    def add_element_at_pos(self, head, ele, pos):
        if pos < 1:
            print("Invalid position, must be >= 1.")
            return head

        if pos == 1:
            return self.add_element_at_start(head, ele)

        if pos > self.length(head) + 1:
            print(f"Position {pos} is out of bounds")
            return head

        temp = head
        count = 1
        while temp and count < pos - 1:
            temp = temp.next
            count += 1

        new_node = LinkedList(ele)
        new_node.next = temp.next
        temp.next = new_node

        return head

    # Delete head
    def delete_head(self, head):
        if self.is_null(head):
            return
        temp = head
        head = head.next
        del temp
        return head

    # Delete tail
    def delete_tail(self, head):
        if self.is_null(head):
            return None

        if head.next is None:
            del head
            return None

        temp = head
        while temp.next.next is not None:
            temp = temp.next

        del temp.next
        temp.next = None
        return head

    # Delete node with specific data
    def delete_node(self, head, data):
        if self.is_null(head):
            return None

        if head.data == data:
            new_head = head.next
            del head
            return new_head

        temp = head
        while temp.next is not None:
            if temp.next.data == data:
                node_to_delete = temp.next
                temp.next = temp.next.next
                del node_to_delete
                return head
            temp = temp.next

        return head

    # Delete node at specific position
    def delete_node_at_pos(self, head, pos):
        if self.is_null(head):
            print("Invalid position value, the linked list is empty.")
            return None

        if pos == 1:
            new_head = head.next
            del head
            return new_head

        len_list = self.length(head)
        if pos > len_list or pos < 1:
            print(f"Invalid position value, the position {pos} exceeds the length of the linked list provided.")
            return head

        if pos == len_list:
            return self.delete_tail(head)

        temp = head
        count = 1
        while temp and count < pos - 1:
            temp = temp.next
            count += 1

        if temp and temp.next:
            node_to_delete = temp.next
            temp.next = node_to_delete.next
            del node_to_delete

        return head

    # Reverse a linked list
    def reverse(self, head):
        if head is None or head.next is None:
            return head

        prev_node = None
        temp = head

        while temp:
            next_node = temp.next
            temp.next = prev_node
            prev_node = temp
            temp = next_node

        return prev_node

    # Sort a linked list (assuming 0s, 1s, and 2s only)
    def helper_find_middle(self, head):
        if not head or not head.next:
            return head

        slow = head
        fast = head.next

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        return slow

    # Merge two sorted linked lists
    def helper_merge(self, list1, list2):
        dummy_node = LinkedList(-1)
        temp = dummy_node

        while list1 and list2:
            if list1.data < list2.data:
                temp.next = list1
                temp = list1
                list1 = list1.next
            else:
                temp.next = list2
                temp = list2
                list2 = list2.next

        if list1:
            temp.next = list1
        else:
            temp.next = list2

        return dummy_node.next

    # Sort the linked list using merge sort
    def sort(self, head):
        if not head or not head.next:
            return head

        middle = self.helper_find_middle(head)
        right_head = middle.next
        left_head = head

        middle.next = None

        left_head = self.sort(left_head)
        right_head = self.sort(right_head)

        return self.helper_merge(left_head, right_head)

    # Remove duplicates from a sorted linked list
    def remove_duplicates(self, head):
        if head is None:
            return None

        temp = head
        while temp:
            curr = temp
            while curr.next and curr.data == curr.next.data:
                curr.next = curr.next.next
            temp = temp.next

        return head
