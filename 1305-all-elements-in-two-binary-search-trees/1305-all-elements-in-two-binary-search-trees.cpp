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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) { 
        vector<int> Final;
        if(root1==NULL && root2==NULL)return Final;
        vector<int> Tree1;
        vector<int> Tree2;
        
        InOrder(root1,Tree1);
        InOrder(root2,Tree2);
        
        if(root1==NULL || root2==NULL)
        {
            if(root1==NULL)return Tree2;
            else return Tree1;
            
        }
        int i=0,j=0, c=0;
        int n=Tree1.size(), m=Tree2.size();
        
        //cout<<n<<m;
        while(i<n && j<m)
        {
           // cout<<"yes";
            if(Tree1[i]<Tree2[j])
            {
                Final.push_back(Tree1[i++]);
            }
            else
            {
                Final.push_back(Tree2[j++]);
            }
            cout<<Final[c++];
        }
        while(i<n)Final.push_back(Tree1[i++]);
        while(j<m)Final.push_back(Tree2[j++]);
        return Final;
        
        
        
    }
    void InOrder(TreeNode* node, vector<int> &v )
    {
        
        stack<TreeNode*> s;
        
        while(true)
        {
            if(node!=NULL)
            {
                s.push(node);
                node=node->left;
            }
              
            else
            {
                if(s.empty())break;
                node=s.top();
                s.pop();
                v.push_back(node->val);
                node=node->right;
                
            }
        }
        /*for(int h:v)
            cout<<h;*/
        /*if(node==NULL)return ;
        InOrder(node->left,v);
        v.push_back(node->val);
        InOrder(node->right,v);*/
    }
};