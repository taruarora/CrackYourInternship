class Solution {
public:
    int lps(int ind1,int ind2,string s1,string s2,vector<vector<int>>dp)
    {
        int ans=0;
        int n=ind1;
        for(int i=0;i<=n;i++)
        {
            dp[0][i]=0;
            dp[i][0]=0;
        }
        //int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    //ans=max(ans,dp[i][j]);
                }
                else
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[n][n];
    }
    int minInsertions(string s) {
        int n=s.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        string s2=s;
        reverse(s.begin(),s.end());
        return n-lps(n,n, s,s2,dp);
    }
};