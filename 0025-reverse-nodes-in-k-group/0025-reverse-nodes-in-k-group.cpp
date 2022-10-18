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
    ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* ptr=head;
        int c=0;
    while(ptr)
    {
        ptr=ptr->next;
        c++;
    }
        c=c/k;
      
      return reverse(head, k, c);
  
    /* prev is new head of the input list */
}
   ListNode* reverse(ListNode* head, int k, int c)
{
       if(c==0)return head;
    // base case
    if (!head)
        return NULL;
    ListNode* current = head;
    ListNode* next = NULL;
    ListNode* prev = NULL;
    int count = 0;
  
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
  
    
    if (next != NULL)
    {
         head->next = reverse(next, k, c-1);
        
    }   
  
    /* prev is new head of the input list */
    return prev;
}
        
};