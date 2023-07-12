//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
       Node* headodd=NULL, *headeven=NULL, *ptreven=NULL,*ptrodd=NULL, *ptr=head;
       Node* m2=head;
       if(head==NULL || head->next==NULL)return head;
       
      
       while(ptr)
       {
           if(ptr->data %2==0)
           {
               if(headeven==NULL)
               {
                   headeven=ptr;
                   ptreven=headeven;
                   
               }
               else
               {
                   ptreven->next=ptr;
                   ptreven=ptr;
                   //cout<<ptreven->data;
               }
               
           }
           else
           {
               if(headodd==NULL)
               {
                   headodd=ptr;
                   ptrodd=headodd;
                   
               }
               else
               {
                   ptrodd->next=ptr;
                   ptrodd=ptr;
                   
               }
               
           }
           
           ptr=ptr->next;
       }
       if(headeven==NULL)return headodd;
       if (ptrodd)
        ptrodd->next=NULL;
       ptreven->next=headodd;
       return headeven;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends