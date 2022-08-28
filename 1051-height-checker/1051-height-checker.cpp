class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v;
        int c=0;
        v=heights;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=heights[i])c++;
        }
        return c;
        
    }
};