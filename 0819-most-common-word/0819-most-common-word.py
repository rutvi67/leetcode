import collections
import re

class Solution(object):
    def mostCommonWord(self, paragraph, banned):
        words = re.findall(r'\w+', paragraph.lower())
        counts = collections.Counter(words)
        banned_set = set(banned)
        for word, freq in counts.most_common():
            if word not in banned_set:
                return word
