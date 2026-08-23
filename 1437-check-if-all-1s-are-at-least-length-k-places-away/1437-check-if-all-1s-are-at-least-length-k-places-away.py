class Solution(object):
    def kLengthApart(self, nums, k):
     last=-1
     for i , num in enumerate(nums):
        if num==1:
            if last!=-1 and i- last<=k:
                return False
            last=i
     return True