class Solution(object):
    def restoreString(self, s, indices):
        result = [""] * len(s)   
        for i, ch in enumerate(s):
            result[indices[i]] = ch
        return "".join(result)
