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
    int sumOfLeftLeaves(TreeNode* root) {
                queue<pair<TreeNode*,bool>> q;
        //vector<vector<int>> ans;
        
        if(root==NULL)return 0;
        if(root && root->left==NULL && root->right==NULL )return 0;
        q.push({root,false});
        int sum=0;
        while(!q.empty())
        {
            //vector<int> v;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *t=q.front().first;
                bool leftnode=q.front().second;
                q.pop();
                if(!t->left && !t->right && leftnode)sum+=t->val;
                if(t->left)q.push({t->left,true});
                if(t->right)q.push({t->right,false});
                //v.push_back(t->val);
            }
            //ans.push_back(v);
            
            
        }
        return sum;
    }
};