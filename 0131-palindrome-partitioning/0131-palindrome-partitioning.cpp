class Solution {
public:
    bool palindrome(string str)
    {
        int s=0,l=str.length()-1;
        while(s<=l)
        {
            if(str[s++]!=str[l--])return false;
        }
        return true;
    }
    void recur(int ind,string s,vector<string>& ds,vector<vector<string>>& ans)
    {
        if(ind==s.length())
        {
            ans.push_back(ds);
            return;
        }
            
        
        for(int i=ind;i<s.length();i++)
        {
            //if(ind<i+1)
             string str=s.substr(ind,i-ind+1);
            if(palindrome(str))
            {
                ds.push_back(str);
                recur(i+1,s,ds,ans);
                ds.pop_back();
            }
            
            
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> ds;
        vector<vector<string>> ans;
        recur(0,s,ds,ans);
        return ans;
    }
};