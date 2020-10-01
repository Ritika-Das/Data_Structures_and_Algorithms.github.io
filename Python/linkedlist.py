class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

    def __repr__(self):
        return repr(self.data)


class CircularDoublyLinkedList:
    """
    Circular doubly linked list.
    
    Can store any data, with the .append() and .prepend() methods.

    The .current() method shows the data of the current location in the
    linked list.

    The linked list is doubley, which means you can navigate in both direction
    with the .next() and .previous() methods.

    The linked list is also circular, which means that when you for instance have reached
    the end of the list and try to get the next node it will go back to the beginning of the list
    and give you the first node.
    """

    def __init__(self, data=None):
        self.head = None
        self.tail = None
        if data:
            self.append(data)
        self.current_node = self.head

    def prepend(self, data, reset_current=False):
        """
        Add data to the beginning of the list
        
        reset_current: sets current node back to head when prepending data if set to true.
        """

        new_node = Node(data)
        new_node.next = new_node
        new_node.prev = new_node

        if self.head is None:
            self.head = new_node
            self.tail = new_node
            return True

        new_node.next = self.head
        new_node.prev = self.tail
        self.head.prev = new_node
        self.tail.next = new_node
        self.head = new_node

        if reset_current:
            self.current_node = self.head

        return True

    def append(self, data):
        """Add data to the end of the list."""

        new_node = Node(data)
        new_node.next = new_node
        new_node.prev = new_node

        if self.head is None:
            self.head = new_node
            self.tail = new_node
            return True

        self.tail.next = new_node
        new_node.next = self.head
        new_node.prev = self.tail
        self.tail = new_node
        self.head.prev = self.tail

        return True

    def next(self):
        self.current_node = self.current_node.next

    def previous(self):
        self.current_node = self.current_node.prev

    def current(self):
        if not self.current_node:
            self.current_node = self.head
        return self.current_node


if __name__ == "__main__":

    li = CircularDoublyLinkedList(1)
    li.append(2)
    li.append(3)
    li.prepend("insert at beginning", True)
    li.append(4)
    li.append(5)
    li.append(6)

    representation = ""
    for x in range(10):
        representation += str(li.current()) + ", "
        li.next()

    print(representation)
    print(li.tail)
