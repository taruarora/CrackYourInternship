class Solution {
public:
    int recur(int ind,string A, vector<string> &B,int n, vector<int>& dp)
    {
        if( ind==A.length())return 1;
        if(ind>A.length())return 0;
        
        if(dp[ind]!=-1)return dp[ind];
        for(int i=ind;i<A.length();i++)
        {
            string str=A.substr(ind,i-ind+1);
            if(find(B.begin(),B.end(),str)!=B.end())
             {
                 //cout<<str<<endl;
                  if(recur(i+1,A,B,n,dp)==1)return dp[ind]= 1;
             }
        }
        return dp[ind]= 0;
    }
    bool wordBreak(string A, vector<string>& B) {
        string s="";
        vector<int> dp(301,-1);
        return recur(0, A,B,B.size(),dp);
    }
};