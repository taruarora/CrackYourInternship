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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* ptr=head->next, *prv=head, *tmp=head;
        ListNode* head2=ptr;
        while(ptr)
        {
            tmp->next=ptr;
            prv->next=ptr->next;
            ptr->next=prv;
            tmp=prv;
            if(prv->next)
             prv=prv->next;
            
            if(ptr->next)
             ptr=prv->next;
            else ptr=NULL;
            
        }
        return head2;
        
    }
};