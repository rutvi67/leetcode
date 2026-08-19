class Solution(object):
    def arrayRankTransform(self, arr):
        sorted_unique = sorted(set(arr))
        
       
        rank_map = {num: i+1 for i, num in enumerate(sorted_unique)}
        
        return [rank_map[num] for num in arr]
