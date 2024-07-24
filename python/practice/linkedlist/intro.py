class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next
    

def printList(head):
    temp = head
    while temp:
        print(temp.data)
        temp = temp.next

head = Node(1)
head.next = Node(2)
head.next.next = Node(3)

printList(head)