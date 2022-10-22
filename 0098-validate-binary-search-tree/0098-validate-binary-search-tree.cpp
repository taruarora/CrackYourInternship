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
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        
        Inorder(root, v);
        
        for(int i=1;i<v.size(); i++)
        {
            if(v[i-1]> v[i] || v[i-1]== v[i])return false;
            //cout<<v[i-1];
        }
        return true;
    }
        
        void Inorder(TreeNode* root, vector<int> &v)
        {
            if(root==NULL)
                return ;
            Inorder(root->left, v);
            v.push_back(root->val);
            Inorder(root->right, v);
        }
    
};