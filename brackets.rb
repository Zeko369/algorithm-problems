class Stack
  def initialize()
    @items = []
  end

  def head
    @items.last
  end

  def pop
    @items.pop
  end

  def push(item)
    @items.push(item)
  end

  def length
    @items.length
  end
end

def other(bracket)
  brackets = {
    '(' => ')',
    ')' => '(',
    '[' => ']',
    ']' => '[',
    '{' => '}',
    '}' => '{'
  }[bracket]
end

def isValid(expression)
  stack = Stack.new
  expression.split('').each do |bracket|
    if stack.head == other(bracket)
      stack.pop
    else
      stack.push(bracket)
    end
  end

  stack.length == 0
end

puts isValid('(())')   # True
puts isValid('(([]))') # True
puts isValid('[()]{}') # True
puts isValid('({[)]}')  # False