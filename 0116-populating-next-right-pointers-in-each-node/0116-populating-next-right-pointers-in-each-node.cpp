/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        
        //vector<vector<int>> ans;
        
        if(root==NULL)return root;
        q.push(root);
        while(!q.empty())
        {
            //vector<int> v;
            int size=q.size();
            Node* prev=NULL;
            for(int i=0;i<size;i++)
            {
                Node *t=q.front();
                q.pop();
                
                if(t->left)
                {
                    q.push(t->left);
                    if(prev)
                     prev->next=t->left;
                }
                if(t->right)
                {
                    q.push(t->right);
                }
                if(t->left && t->right)
                {
                    t->left->next=t->right;
                    prev=t->right;
                }
                //v.push_back(t->val);
            }
            //ans.push_back(v);
            
            
        }
        return root;
    }
};