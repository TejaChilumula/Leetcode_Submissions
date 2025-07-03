# Last updated: 7/2/2025, 11:53:22 PM
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:

        dummy, temp, nextt = None, head, head

        while head:
            nextt = head.next
            head.next = dummy
            dummy = head
            head = nextt
        
        return dummy

        