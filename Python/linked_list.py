class linked_list:

    class Node:
        def __init__(self, e, next):
            self.data = e
            self.next = next

    def __init__(self):
        self.size = 0
        self.head = None

    def __len__(self):
        return self.size
    
    def push(self, e):
        self.head = Node(e,None)
        self.size += 1

    def pop(self):
        if self.size == 0:
            print("Empty List")
        else:
            temp = self.head.data
            self.head = self.head.next
            return temp

l = linked_list()