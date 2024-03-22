#week05-4.py
#leetcode 234. Palindrome Linked List
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        a=[] #先打a設成很小的、短短的陣列list
        while head != None:
            a.append(head.val) #先把head 的那一串東西,轉換成陣列a
            head = head.next

        N=len(a) #列出陣列
        for i in range(N): #i有多少數字
            if a[i] != a[N-1-i]: return False #頭尾不相同
        return True
        