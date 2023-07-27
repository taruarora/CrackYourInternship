//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string A, string B) 
	{ 
	    // Your code goes here
        int n=A.length(),m=B.length();
        
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0)dp[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(A[i-1]==B[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                
            }
        }
        int len= dp[n][m];
        //cout<<len<<endl;
        int Aremain=n-len; //to be deleted
        int Bremain=m-len; //to be added
        //cout<<Aremain<<Bremain;
        return Aremain+Bremain;
        
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends