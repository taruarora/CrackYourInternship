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
    TreeNode* parent(TreeNode* root, int x) {
        if(root == NULL) return NULL;
        if(root->val == x) return NULL;
        if(root->left != NULL && root->left->val == x) return root;
        if(root->right != NULL && root->right->val == x) return root;
        if(parent(root->left, x) != NULL) return parent(root->left, x);
        else return parent(root->right, x);
    }

    int depth(TreeNode* root, int x) {
        if(root == NULL) return 10001;
        if(root->val == x) return 0;

        return min(depth(root->left, x), depth(root->right, x)) + 1;
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if(depth(root, x) == depth(root, y) && parent(root, x) != parent(root, y))
            return true;
        return false;
    }

};