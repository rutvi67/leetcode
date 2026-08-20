class Solution(object):
    def kWeakestRows(self, mat, k):
        soldier_counts = [(sum(row), i) for i, row in enumerate(mat)]
        soldier_counts.sort()
        return [i for _, i in soldier_counts[:k]]
