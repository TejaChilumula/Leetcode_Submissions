// Last updated: 7/2/2025, 11:53:31 PM
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
            ListNode temp=null;
         if(headA==null || headB == null) return null;
         int c1=0,c2=0;
         temp = headA;
         while(temp!=null)
         {   c1+=1;
             temp=temp.next;
         }
         temp = headB;
          while(temp!=null)
         {  
             c2+=1;
             temp=temp.next;
         }
          ListNode dum1 = headA, dum2 = headB;
         if(c1>c2)
           
         {  dum1=headA;
            for(int i=0;i<c1-c2;i++)
              dum1=dum1.next;
         }
        else
         {  dum2=headB;
            for(int i=0;i<c2-c1;i++)
               dum2=dum2.next;
         }
        
         while(dum1 != dum2)
         {
             dum1 = dum1.next;
             dum2 = dum2.next;
         }
         return dum1;
    }
}