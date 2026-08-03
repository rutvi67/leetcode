class Solution(object):
    def distributeCandies(self, candyType):
        unique_types = len(set(candyType))
        
        max_allowed = len(candyType) // 2
        
        return min(unique_types, max_allowed)
