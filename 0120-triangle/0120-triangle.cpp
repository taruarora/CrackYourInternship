class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size()-1;
        int m=triangle[n].size();
        vector<int> dp(m,-1);
        
        for(int i=0;i<m;i++)
        {
            dp[i]=triangle[n][i]; 
        }
        
        
        for(int i=n;i>0;i--)
        {
            for(int j=0;j<i;j++)
            {
                dp[j]=triangle[i-1][j]+min(dp[j],dp[j+1]);
            }
        }
        return dp[0];
        
         
       
                                        
        
    }
};