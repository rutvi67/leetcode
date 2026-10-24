class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        x = {}
        for i, num in enumerate(nums):
            if num in x and i - x[num] <= k:
                return True
            x[num] = i
        return False
