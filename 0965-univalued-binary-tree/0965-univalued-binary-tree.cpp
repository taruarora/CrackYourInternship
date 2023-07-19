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
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)return true;
        int value=root->val;
        if(root->left && root->left->val !=value)return false;
        if(root->right && root->right->val !=value)return false;
        
        
        
        return isUnivalTree(root->left) && isUnivalTree(root->right);
        
    }
};