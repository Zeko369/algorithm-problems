class MaxStack():
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop(len(self.items) - 1)

    def max(self):
        if(len(self.items) == 0):
            return None
        return max(self.items)

if __name__ == '__main__':
    s = MaxStack()
    print(s.max()) # None

    s.push(1)
    s.push(2)
    s.push(3)
    s.push(2)
    print(s.max()) # 3

    s.pop()
    s.pop()

    print(s.max()) # 2
