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
       ListNode *ptr=head;
       while(head && ptr->next)
       {
           if(ptr->next->next)
           {
              ptr=ptr->next->next; 
           }
           else
               ptr=ptr->next;
           head=head->next;
       }
        return head;
    }
};