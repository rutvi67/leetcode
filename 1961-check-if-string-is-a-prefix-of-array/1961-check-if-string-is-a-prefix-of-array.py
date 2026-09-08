class Solution(object):
    def isPrefixString(self, s, words):
        prefix = ""
        for word in words:
            prefix += word
            if prefix == s:
                return True
            if len(prefix) > len(s):
                break
        return False