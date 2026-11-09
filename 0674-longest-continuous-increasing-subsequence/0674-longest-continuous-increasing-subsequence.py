class Solution(object):
    def findLengthOfLCIS(self, nums):
        curr=1
        ans=1
        for i in range(1,len(nums)):
            if nums[i]>nums[i-1]:
                curr+=1
            else:
                curr=1
            ans=max(ans,curr)
        return ans