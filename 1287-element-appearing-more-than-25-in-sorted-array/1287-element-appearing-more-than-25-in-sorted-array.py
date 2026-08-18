class Solution(object):
    def findSpecialInteger(self, arr):
        n = len(arr)
        candidates = [arr[n//4], arr[n//2], arr[(3*n)//4]]

        for c in candidates:
            count = arr.count(c)
            if count > n // 4:
                return c
