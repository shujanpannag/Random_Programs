class linked_list:
    class Node:
        def __init__(self, data, next):
            self.data = data
            self.next = next

    def __init__(self):
        self.size = 0
        self.head = None

    def __len__(self):
        return self.size

    def push(self, e):
        self.head = self.Node(e, self.head)
        self.size += 1

    def pop(self):
        if self.size == 0:
            print("Empty List")
        else:
            temp = self.head.data
            self.head = self.head.next
            self.size -= 1
            return temp


l = linked_list()
print(len(l))
l.push(1)
l.push(2)
print(len(l))
print(l.pop())
