class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size(),c=0;
        string temp="";
        for(int i=0;i<strs[0].size();i++)
        {
            char c=strs[0][i];
            for(int j=0;j<n;j++)
            {
                
                if(i>= strs[j].size() || strs[j][i]!=c )
                {
                    return temp;
                } 
                
            }
            temp+=c;
           // c++;
            
        }
        return temp;
    }
};