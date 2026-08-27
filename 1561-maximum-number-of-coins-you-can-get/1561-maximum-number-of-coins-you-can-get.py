class Solution(object):
    def maxCoins(self, piles):
        piles.sort()  
        n = len(piles) // 3
        coins = 0

        for i in range(n):
            coins += piles[-2 - 2*i]

        return coins
