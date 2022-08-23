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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l3=NULL;
        if(l1==NULL ||l2==NULL)
        {
            if(l1==NULL)return l2;
            return l1;
        }
        ListNode *tmp=NULL;
        ListNode *head=NULL;
        while(l1 && l2)
        {
            tmp=l3;
            if(l1->val <=l2->val)
            {
               l3=new ListNode(l1->val); 
                l1=l1->next;
            }
            else
            {
              l3=new ListNode(l2->val); 
                l2=l2->next;
            }
            if(head==NULL)head=l3;
            else
            {
              tmp->next=l3;  
            }
        }
        if(l2!=NULL)
        {
            tmp=l3;
            tmp->next=l2;
        }
        else  if(l1!=NULL)
        {
            tmp=l3;
            tmp->next=l1;
        }
        return head;
        
        
    }
};