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
    /*
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* root;
        return newTree(root1,root2, root);
        
    }
    
     TreeNode* newTree(TreeNode* root1, TreeNode* root2, TreeNode* root)
    {
        if(root1==NULL ||root2==NULL)
        {
            if(root1==NULL && root2==NULL)return NULL;
            else if(root1==NULL)return root2;
            else
                return root1;
        }
        else
            root=new TreeNode(root1->val +root2->val);
        root->left=newTree(root1->left, root2->left, root);
        root->right=newTree(root1->right, root2->right,root);
        return root;
    }
    greater TC
    */
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1) return t2;
        if(!t2) return t1;
        t1->val+=t2->val;
        t1->left = mergeTrees(t1->left,t2->left);
        t1->right = mergeTrees(t1->right,t2->right);
        return t1;
    }
};