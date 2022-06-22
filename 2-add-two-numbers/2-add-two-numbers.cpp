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
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { 
       if(l1==NULL)
           return l2;
       if(l2==NULL)
           return l1;
       int carry=0;
       ListNode *l3=NULL, *s=NULL;
        int x,y;
       while(l1 || l2||carry)
       {
         int sum=0;
           if(l1==NULL)
                x=0;
           else
              x=l1->val;
           
           if(l2==NULL)
                y=0;
           else
               y=l2->val;
           
         sum=x+y+carry;  
         carry=0;
         if(sum>9)
         {
             carry=1;
             sum=sum%10;
         }
         if(l1==NULL &&l2==NULL &&carry==1)
             sum=1;
         ListNode *ptr=new ListNode(sum); 
         if(l3==NULL)
         {
          s=l3=ptr;
          l3->next=NULL;
         }
             
         else
         {
           l3->next=ptr;
           l3=ptr;
         }
         cout<<l3->val<<" ";
             
        if(l1)  
          l1=l1->next;
        if(l2)
          l2=l2->next;
       
       }
       
    return s;
  }
    
};
