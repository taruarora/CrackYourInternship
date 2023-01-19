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
    /*whatsa
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL ||head->next==NULL)return head;
        ListNode* ptr=head, *prv=head, *tmp=NULL;
        int d=0;
        while(ptr)
        {
            tmp=prv;
            prv=ptr;
            ptr=ptr->next;
            if(ptr && prv->val==ptr->val)
            {
                if(tmp==prv)f=1;
                while(ptr && prv->val==ptr->val)
                {
                    delete prv;
                    prv=ptr;
                    ptr=ptr->next;
               }
                delete prv;
                prv=tmp;
                tmp->next=ptr;
                
            }
            else
                ptr=ptr->next;
            
            if(tmp==prv && prv==head && prv->next !=ptr)
            {
                tmp=ptr;
                head=ptr;
            }
             tmp->next=ptr;
            
        }
        return head;
        
    }*/
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(head==NULL ||head->next==NULL)return head;
        ListNode* ptr=head->next, *prv=head, *tmp=head;
        while(ptr)
        {
            if(ptr->val==prv->val)
            {
                tmp->next=NULL;
                if(prv==head)
                {
                    while(ptr && ptr->val==prv->val)
                    {
                        delete prv;
                        prv=ptr;
                        ptr=ptr->next;  
                    }
                    delete prv;
                    prv=ptr;
                    head=prv;
                    tmp=head;
                    if(ptr)
                      ptr=ptr->next;
                    //tmp->next=prv;
                }
                else
                {
                    
                 while(ptr && ptr->val==prv->val)
                 {
                      delete prv;
                      prv=ptr;
                      ptr=ptr->next;  
                 }
                    delete prv;
                    prv=ptr;
                    if(ptr)
                      ptr=ptr->next;
                    tmp->next=prv;
                }
            }
            else
            {
                tmp=prv;
                prv=ptr;
                ptr=ptr->next;
            }
        }
        return head;
    }
};

    