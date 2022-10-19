/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode* > q;
        TreeNode*t, *ptr=root;
        bool b, c;
        if(x==root->val || y==root->val)return false;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> v;
            TreeNode* parent=q.front();
            for(int i=0;i<size;i++)
            {
                t=q.front();
                cout<<(t==root);
                q.pop();
                v.push_back(t->val);
               if(t->left)
               {
                   q.push(t->left);
                   if(t->left->val==x || t->left->val==y)b=true;
               }
               if(t->right)
               {
                   q.push(t->right);
                   if(t->right->val==y || t->right->val==x)c=true;
               }
                if(b && c)return false;
                b=c=false;
            }
            
                b=c=false;
                for(int i=0;i<size;i++)
                {
                if(v[i]==x)b=true;
                else if(v[i]==y)c=true;
                
                if(b && c)return true;
               }
            
        }
        return false;
        
    }
};