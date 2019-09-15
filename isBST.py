class TreeNode:
  def __init__(self, key):
    self.left = None
    self.right = None
    self.key = key

  def __repr__(self):
    return self.key

def is_bst(root):
  return False

a = TreeNode(5)
a.left = TreeNode(3)
a.right = TreeNode(7)
a.left.left = TreeNode(1)
a.left.right = TreeNode(4)
a.right.left = TreeNode(6)

b = TreeNode(5)
b.left = TreeNode(3)
b.right = TreeNode(7)
b.left.left = TreeNode(2)
b.left.right = TreeNode(6)

print(is_bst(a)) # True
print(is_bst(b)) # False

#    5
#   / \
#  3   7
# / \ /
#1  4 6