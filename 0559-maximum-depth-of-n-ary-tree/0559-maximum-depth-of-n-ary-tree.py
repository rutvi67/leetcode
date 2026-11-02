class Solution(object):
    def maxDepth(self, root):
        if not root:
            return 0
        max_child = 0
        for child in root.children:
            depth = self.maxDepth(child)
            max_child = max(max_child, depth)

        return max_child + 1