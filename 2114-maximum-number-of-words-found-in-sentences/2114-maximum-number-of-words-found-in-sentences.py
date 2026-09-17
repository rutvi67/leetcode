class Solution(object):
    def mostWordsFound(self, sentences):
        ans=0
        for sentence in sentences:
            word=len(sentence.split())
            ans=max(ans,word)
        return ans