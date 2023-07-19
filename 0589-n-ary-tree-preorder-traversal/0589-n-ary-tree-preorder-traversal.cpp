/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        stack<Node* >st;
        vector<int> v;
        if(root==NULL)return v;
        st.push(root);
        while(!st.empty())
        {
            Node* ptr=st.top();
            st.pop();
            v.push_back(ptr->val);
            
            for(int i=ptr->children.size()-1;i>=0;i--)
            {
                st.push(ptr->children[i]);
            }
        }
        return v;
    }
};