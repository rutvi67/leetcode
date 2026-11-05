class Solution(object):

    def preorder(self, root):
        ans = []
        def dfs(node):
            if not node:
                return
            ans.append(node.val)
            for child in node.children:
                dfs(child)
        dfs(root)
        return ans