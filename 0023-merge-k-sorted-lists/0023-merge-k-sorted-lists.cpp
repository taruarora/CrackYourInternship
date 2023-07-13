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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         if(lists.size()==0)return NULL; priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> pq;
          for(int i=0;i<lists.size();i++)
          {
              ListNode* ptr=lists[i];
              if(ptr==NULL)continue;
              while(ptr)
              {
                  pq.push({ptr->val,ptr});
                  ptr=ptr->next;
              }
        
          }
        if(pq.size()==0)return NULL;
        ListNode* head=pq.top().second, *ptr;
        ptr=head;
        pq.pop();
        while(!pq.empty())
        {
            ListNode *prv;
            ptr->next=pq.top().second;
            ptr=pq.top().second;
            cout<<pq.top().first;
            pq.pop();
        }
        return head;
    }
};