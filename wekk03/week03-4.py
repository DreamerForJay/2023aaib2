#leetcode 3005
class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T = [0]*101 #統計數字出現次數,因數字1....100,陣列要開101個
        best = 0 #最多的數字,出現幾次?
        for num in nums: #迴圈針對每個數字做處理
            T[num]+=1
            if T[num]>best:best = T[num]
        total = 0
        for t in T:#針對統計結果T裡面的個數字t
            if t==best: total += t
        return total