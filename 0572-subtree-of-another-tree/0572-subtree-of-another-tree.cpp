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
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(root==NULL)return false;
        
        if(root->val==subroot->val && check(root,subroot))return true;
        return isSubtree(root->left,subroot)|| isSubtree(root->right,subroot);
        
    }
    bool check(TreeNode* root, TreeNode* subroot)
    {
        if(!root || !subroot)
        {
            if(!root && !subroot)
             return true;
            return false;
        }
        if(root->val !=subroot->val)return false;
        return check(root->left,subroot->left) && check(root->right,subroot->right);
    }
};