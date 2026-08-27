class Solution(object):
    def findSmallestSetOfVertices(self, n, edges):
        indegree = [0] * n
        for frm, to in edges:
            indegree[to] += 1
        result = [i for i in range(n) if indegree[i] == 0]
        return result
