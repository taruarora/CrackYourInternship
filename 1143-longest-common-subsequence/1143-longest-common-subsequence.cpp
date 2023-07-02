class Solution {
public:
    int f(int ind1,int ind2,string str1,string str2,vector<vector<int>>& dp)
    {
        if(ind1<0 || ind2<0)
            return 0;
        if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
        if(str1[ind1]==str2[ind2])
        {
            return 1+f(ind1-1,ind2-1,str1,str2,dp);
        }
        return dp[ind1][ind2]= max(f(ind1-1,ind2,str1,str2,dp),f(ind1,ind2-1,str1,str2,dp));
    }
    int longestCommonSubsequence(string str1, string str2) {
        /*int n=str1.length();
        int m=str2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        //return f(n-1,m-1,text1,text2,dp);
        
        for(int ind=0;ind<n;ind++)
        {
            //dp[ind][0]=(str1[ind]==str2[0]);
            if(str1[ind]==str2[0])
		    {
                  while (ind < n) 
				  {
                    dp[ind][0] = 1;
                    ind++;
                  }
            }
        }
        for(int ind=0;ind<m;ind++)
        {
            //dp[0][ind]=(str1[0]==str2[ind]);
            if(str1[0]==str2[ind])
		    {
                  while (ind < m) 
				  {
                    dp[0][ind] = 1;
                    ind++;
                  }
        }
        }
        for(int i=1;i<n;i++)
        {
          for(int j=1;j<m;j++)
          {
              if(i<0 || j<0)
                 return 0;
              if(dp[i][j]!=-1)return dp[i][j];
              if(str1[i]==str2[j])
              {
                dp[i][j]=1+dp[i-1][j-1];
              }
             else
                 dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
          }
        }
        return dp[n-1][m-1];
       */
        int n=str1.length();
        int m=str2.length();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
         dp[i][0]=0;
        for(int i=0;i<=m;i++)
         dp[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

                 if(str1[i-1]==str2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }

                else{dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}
            }
        }
        return dp[n][m];


    }
        
};