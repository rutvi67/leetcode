class Solution(object):
    def mySqrt(self, x):
        if x == 0 or x == 1:
            return x   
        left, right = 1, x
        ans = 0

        while left <= right:
            mid = left + (right - left) // 2
            sq = mid * mid

            if sq == x:
                return mid  
            elif sq < x:
                ans = mid    
                left = mid + 1
            else:
                right = mid - 1

        return ans
