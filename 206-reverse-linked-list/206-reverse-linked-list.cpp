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
    ListNode* reverseList(ListNode* head) {
        ListNode *ptr=NULL, *prv, *curr;
        prv=curr=head;
        if(head && head->next)
            ptr=head->next;
        else
            return head;
        while(ptr)
        {
            prv=curr;
            curr=ptr;
            //curr->next=NULL;
            ptr=ptr->next;
            curr->next=prv;
        }
        head->next=NULL;
        head=curr;
        return head;
        
    }
};