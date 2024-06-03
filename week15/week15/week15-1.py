class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table = {} #大括號:table[num]對應的次數
        for num in nums: #每個數字輪一次
            if num in table:
                table[num] +=1
            else:
                table[num]=1
        ans = 0
        for num in table:
            if table[num]==2:
                ans=ans^num
        return ans