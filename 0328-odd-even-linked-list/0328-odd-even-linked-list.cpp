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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL ||head->next==NULL || head->next->next==NULL )return head;
        ListNode* tmp, *prvOdd, *prvEven, *head2;
        prvOdd=head, prvEven=head->next, tmp=prvEven->next;
        //cout<<"yes";
        head2=prvEven;
        
        while(tmp)
        {
            
            prvOdd->next=tmp;
            prvOdd=prvOdd->next;
            //cout<<tmp->val<<" ";
            
            tmp=tmp->next;
            prvEven->next=tmp;
            prvEven=prvEven->next;
                
            
            if(tmp)
             tmp=tmp->next;
            
            
        }
        prvOdd->next=head2;
        
    return head;
    }
};