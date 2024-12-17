class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, list1, list2):
        temp = []
        
        while list1:
            temp.append(list1)
            list1 = list1.next

        while list2:
            temp.append(list2)
            list2 = list2.next

        temp.sort(key=lambda r: r.val)

        head = None
        current_node = None
        for i, n in enumerate(temp):
            if i == 0:
                head = n
                current_node = head
            else:
                current_node.next = n
                current_node = current_node.next

        return head
            
