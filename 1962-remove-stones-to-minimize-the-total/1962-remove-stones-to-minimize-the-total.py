import heapq

class Solution(object):
    def minStoneSum(self, piles, k):
    
        max_heap = [-p for p in piles]
        heapq.heapify(max_heap)
        
        for _ in range(k):
            pile = -heapq.heappop(max_heap)
            pile -= pile // 2
            heapq.heappush(max_heap, -pile)
        
        return -sum(max_heap)