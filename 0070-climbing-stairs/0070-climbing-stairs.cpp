class Solution {
public:
    int climb(int n,vector<int> &dp) {
        if(n==-1)return 0;
        if(n==0)return 1;
        if(dp[n]!=-1)return dp[n];
            
        int s1=climb(n-1,dp);
        int s2=climb(n-2,dp);
        //cout<<s1<<" "<<s2<<"\n";
        return dp[n]= s1+s2;
        
    }
    int climbStairs(int n)
    {
        vector<int> dp(n+1,-1);
        climb(n,dp);
        return dp[n];
    }
};