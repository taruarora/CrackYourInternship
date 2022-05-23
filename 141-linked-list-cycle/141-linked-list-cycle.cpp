/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || !head->next)return false;
        ListNode*ptr=head;
        ListNode* prv=head;
       
        while(ptr!=NULL && ptr->next!=NULL)
        {
            ptr=ptr->next;
            if(ptr)ptr=ptr->next;
            if(ptr==prv)
             return true;
            
            prv=prv->next;
          
        }
        return false;
        
        
        
    }
};
