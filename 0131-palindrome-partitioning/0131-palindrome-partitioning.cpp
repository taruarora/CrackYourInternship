class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector <string> arr;
        recur(0,s, ans,arr);
        return ans;
        
    }
    void recur(int ind, string s, vector<vector<string>> &ans,vector<string> arr)
    {
      if(ind==s.size())
      {
          ans.push_back(arr);
          return;
      }
        for(int i=ind;i<s.size();i++)
        {
            if(isPalindrome(s,ind,i)==true)
            {
                arr.push_back(s.substr(ind,i-ind+1));
                recur(i+1,s,ans,arr);
                arr.pop_back();
            }
        }
    }
    bool isPalindrome(string s, int start, int end)
    {
        while(start<=end)
        {
            if(s[start ++]!=s[end--])
                return false;
        }
        return true;
    }
};