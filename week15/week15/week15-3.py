#week15-3.py
#LeetCode 1208. Get Equal Substrings Within Budget寫到一半
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        N=len(s)
        for i in range(N): #先用py把字串的迴圈寫出來
            print( s[i],t[i])
        ans=0
        return ans