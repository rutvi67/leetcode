class Solution(object):
    def sortArrayByParityII(self, nums):
        evens = [x for x in nums if x % 2 == 0]
        odds = [x for x in nums if x % 2 == 1]

        result = []
        for i in range(len(nums)//2):
            result.append(evens[i])
            result.append(odds[i])
        return result
