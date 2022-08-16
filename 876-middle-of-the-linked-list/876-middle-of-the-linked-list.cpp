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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL ||head->next==NULL)return head;
        ListNode *ptr=head, *prv=head;
        while(ptr)
        {
            if(ptr->next==NULL )return prv;
            else if(ptr->next->next==NULL)return prv->next;
            else
            {
                ptr=ptr->next->next;
                prv=prv->next;
            }
                
            
            
        }
        return prv;
        
    }
};