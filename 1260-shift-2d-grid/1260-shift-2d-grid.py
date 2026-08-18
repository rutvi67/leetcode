class Solution(object):
    def shiftGrid(self, grid, k):
        m, n = len(grid), len(grid[0])
        total = m * n
        flat = [grid[i][j] for i in range(m) for j in range(n)]

        k = k % total
        shifted = flat[-k:] + flat[:-k]

        result = []
        for i in range(m):
            row = shifted[i*n:(i+1)*n]
            result.append(row)

        return result
