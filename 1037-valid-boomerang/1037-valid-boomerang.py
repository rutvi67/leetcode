class Solution(object):
    def isBoomerang(self, points):
        (x1, y1), (x2, y2), (x3, y3) = points
        if (x1, y1) == (x2, y2) or (x1, y1) == (x3, y3) or (x2, y2) == (x3, y3):
            return False

        area = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)
        return area != 0
