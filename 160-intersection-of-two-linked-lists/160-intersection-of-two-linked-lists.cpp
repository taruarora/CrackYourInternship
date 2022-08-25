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
        if(headA==NULL||headB==NULL)return NULL;
        
        
        while(ptr1!= ptr2)
        {
            if(!ptr1)
            {
                ptr1=headB;
             
            }
            else
                 ptr1=ptr1->next;
            if(!ptr2)
            {
                ptr2=headA;
             
            }
           else
            ptr2=ptr2->next;
           
        }
        
        return ptr1;
        
       
       
    }
};