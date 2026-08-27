class Solution:
    def minOperations(self, nums):
        add_ops = 0   
        mul_ops = 0   

        for x in nums:
            cur_add = 0
            cur_mul = 0

            while x > 0:
                if x % 2 == 1:
                    x -= 1
                    cur_add += 1
                else:          
                    x //= 2
                    cur_mul += 1

            add_ops += cur_add            
            mul_ops = max(mul_ops, cur_mul) 

        return add_ops + mul_ops
