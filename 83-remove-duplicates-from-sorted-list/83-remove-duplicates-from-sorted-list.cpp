/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
           return head; 
        ListNode *ptr=NULL;
        
        ListNode *prv=head, *tmp;
        if(head->next)
            ptr=head->next;
        while(ptr!=NULL && ptr->next)
        {
            while(ptr->next!=NULL && ptr->val==prv->val)
            {
                tmp=ptr;
                if(ptr->next)
                {
                   ptr=ptr->next;
                   prv->next=ptr;
                  
                }
                
                delete tmp;     
            }
            if(ptr && ptr->next)
            {
                prv=prv->next;
                ptr=ptr->next;
            }
            
        }
        if(ptr && ptr->val==prv->val)
        {
           delete ptr;
            prv->next=NULL;
        }
            
        return head;
    }
};
 