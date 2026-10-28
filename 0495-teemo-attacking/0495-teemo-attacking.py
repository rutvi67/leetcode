class Solution(object):
    def findPoisonedDuration(self, timeSeries, duration):
        total = 0
        for i in range(len(timeSeries)-1):
            gap = timeSeries[i+1] - timeSeries[i]
            total += min(gap, duration)
        return total + duration
