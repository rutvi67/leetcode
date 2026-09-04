class Solution(object):
    def arraySign(self, nums):
        for n in nums:
            if n == 0:
                return 0

        neg_count = 0
        for n in nums:
            if n < 0:
                neg_count += 1
        return 1 if neg_count % 2 == 0 else -1
