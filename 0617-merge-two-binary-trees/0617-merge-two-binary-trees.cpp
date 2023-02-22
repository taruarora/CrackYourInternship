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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* root;
        return newTree(root1,root2, root);
        
    }
    /*TreeNode* newTree(TreeNode* root1, TreeNode* root2, TreeNode* root)
    {
        if(root1==NULL ||root2==NULL)
        {
            if(root1==NULL && root2==NULL)return NULL;
            else if(root1==NULL)root=new TreeNode(root2->val);
            else
                root=new TreeNode(root1->val);
        }
        else
            root=new TreeNode(root1->val +root2->val);
        root->left=newTree(root1->left, root2->left, root);
        root->right=newTree(root1->right, root2->right,root);
        return root;
    }*/
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
};