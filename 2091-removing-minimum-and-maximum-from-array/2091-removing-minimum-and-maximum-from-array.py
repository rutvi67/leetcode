class Solution(object):
    def minimumDeletions(self, nums):
        n = len(nums)
        min_index = nums.index(min(nums))
        max_index = nums.index(max(nums))

        left = max(min_index, max_index) + 1
        right = n - min(min_index, max_index)
        both = (min(min_index, max_index) + 1) + \
               (n - max(min_index, max_index))

        return min(left, right, both)