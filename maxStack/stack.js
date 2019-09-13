class MaxStack {
  constructor() {
    this.items = [];
  }

  push(item) {
    this.items.push(item);
  }

  pop() {
    return this.items.splice(this.items.length - 1);
  }

  max() {
    if (this.items.length === 0) {
      return null;
    }

    return this.items.sort()[this.items.length - 1];
  }
}

stack = new MaxStack();
console.log(stack.max()); // Null

stack.push(1);
stack.push(2);
stack.push(3);
stack.push(2);
console.log(stack.max()); // 3

stack.pop();
stack.pop();

console.log(stack.max()); // 2
