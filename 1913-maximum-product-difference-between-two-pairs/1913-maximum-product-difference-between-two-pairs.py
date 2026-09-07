class Solution(object):
    def maxProductDifference(self, nums):
        nums.sort()
        max1, max2 = nums[-1], nums[-2]
        min1, min2 = nums[0], nums[1]
        return (max1 * max2) - (min1 * min2)
