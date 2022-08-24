/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 /////////VIA LINKED LIST LENGTH
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr1=headA;
        ListNode *ptr2=headB;
        ListNode *ptr;
        int p1=0, p2=0;
        
       while(ptr1 || ptr2)
        {
            if(ptr1)
            {
                p1++;
                ptr1=ptr1->next;
             
            }
            if(ptr2)
            {
              p2++;
              ptr2=ptr2->next;  
            }
        }
        
        
       
        if(p2>p1)
        {
           ptr2=headA;
           ptr1=headB;
        }
         else
        {
           ptr1=headA;
           ptr2=headB;
        }
        
        for(int i=0;ptr1 && i<abs(p1-p2) ;i++)
        {
            cout<<ptr1->val;
            ptr1=ptr1->next;
        }
        for(int i=0;i<p2;i++)
        {
            if(ptr1==ptr2)return ptr1;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        
        return NULL;
    }
};