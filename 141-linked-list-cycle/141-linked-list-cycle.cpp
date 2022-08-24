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
        if(!head ||!head->next)return false;
        ListNode *ptr1=head, *ptr2=head->next;
        do{
            ptr1=ptr1->next;
            if(ptr2->next)
             ptr2=ptr2->next->next;
            else
                ptr2=ptr2->next;
        }
        while(ptr1 && ptr2 &&ptr1!=ptr2);
        if(ptr1==ptr2)return true;
        return false;
        
    }
};