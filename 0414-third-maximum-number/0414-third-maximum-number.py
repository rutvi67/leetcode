class Solution(object):
    def thirdMax(self, nums):
        dis = set(nums)
        if len(dis) < 3:
            return max(dis)
        dis.remove(max(dis))
        dis.remove(max(dis))
        
        return max(dis)
