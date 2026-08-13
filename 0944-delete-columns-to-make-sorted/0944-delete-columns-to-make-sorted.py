class Solution(object):
    def minDeletionSize(self, strs):
        rows, cols = len(strs), len(strs[0])
        deletions = 0
        for c in range(cols):
            for r in range(1, rows):
                if strs[r][c] < strs[r-1][c]:
                    deletions += 1
                    break 
        return deletions
