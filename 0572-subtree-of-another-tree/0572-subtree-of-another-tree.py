class Solution(object):
    def isSame(self, a, b):
        if not a and not b:
            return True
        if not a or not b:
            return False
        if a.val != b.val:
            return False
        return (
            self.isSame(a.left, b.left)
            and
            self.isSame(a.right, b.right)
        )
    def isSubtree(self, root, subRoot):
        if not root:
            return False
        if self.isSame(root, subRoot):
            return True
        return (   self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot) )