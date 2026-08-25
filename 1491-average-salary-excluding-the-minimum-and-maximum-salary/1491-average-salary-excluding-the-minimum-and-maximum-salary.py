class Solution(object):
    def average(self, salary):
        total = sum(salary) - min(salary) - max(salary)
        count = len(salary) - 2
        return float(total) / count
