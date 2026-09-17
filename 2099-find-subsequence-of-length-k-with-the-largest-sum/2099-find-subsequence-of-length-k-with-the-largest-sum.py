class Solution(object):
    def maxSubsequence(self, nums, k):
        arr = []
        for i in range(len(nums)):
            arr.append((nums[i], i))

        arr.sort(reverse=True)
        chosen = arr[:k]
        chosen.sort(key=lambda x: x[1])
        ans = []
        for value, index in chosen:
            ans.append(value)
        return ans