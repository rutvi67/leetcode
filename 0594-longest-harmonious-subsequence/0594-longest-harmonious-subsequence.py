from collections import Counter

class Solution(object):
    def findLHS(self, nums):
        count = Counter(nums)
        longest = 0
        
        for x in count:
            if x + 1 in count:
                longest = max(longest, count[x] + count[x+1])
        
        return longest
