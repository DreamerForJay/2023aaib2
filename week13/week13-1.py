# Definition for a binary tree node. 英文是資料結構的介紹
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def removeLeafNodes(self, root: Optional[TreeNode], target: int) -> Optional[TreeNode]:
        if root == None: return root #沒有東西，就提早結束
        left = self.removeLeafNodes(root.left, target) #先用同一個函式
        right = self.removeLeafNodes(root.right, target)
        if left==None and right==None and root.val==target:
            return None
        root.left=left
        root.right=right
        return root
        