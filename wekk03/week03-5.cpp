
class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T = [0]*101 #�έp�Ʀr�X�{����,�]�Ʀr1....100,�}�C�n�}101��
        best = 0 #�̦h���Ʀr,�X�{�X��?
        for num in nums: #�j��w��C�ӼƦr���B�z
            T[num]+=1
            if T[num]>best:best = T[num]
        total = 0
        for t in T:#�w��έp���GT�̭����ӼƦrt
            if t==best: total += t
        return total
