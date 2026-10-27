class Solution(object):
    def licenseKeyFormatting(self, s, k):
        s = s.replace("-", "").upper()
        groups = []
        while len(s) > k:
            groups.append(s[-k:])
            s = s[:-k]
        groups.append(s)
        groups.reverse()
        return "-".join(groups)