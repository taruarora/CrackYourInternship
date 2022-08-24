/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 /////////VIA MAP STORING ADDRESSES
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr=headA;
        map<ListNode*, int> m;
        while(ptr)
        {
            m[ptr]++;  
            ptr=ptr->next;
        }
        ptr=headB;
        while(ptr)
        {
            m[ptr]++;
            if(m[ptr]==2){
                return ptr;}
            ptr=ptr->next;
        }
        return NULL;
    }
};