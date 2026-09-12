class Solution(object):
    def construct2DArray(self, original, m, n):
        if m*n!=len(original):
            return[]
        ans=[[0]*n for _ in range(m)]
        k=0
        for i in range(m):
            for j in range(n):
                ans[i][j]=original[k]
                k+=1
        return ans