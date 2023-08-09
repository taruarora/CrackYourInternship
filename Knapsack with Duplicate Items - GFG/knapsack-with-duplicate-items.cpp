//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int recur(int ind,int val[],int wt[],int target, vector<vector<int>>& dp)
	{
	   // if(ind<0)return 1e8;
	    //if(target==0)return 0;
	    if(target==0)return 0;
	    if(ind==0)
	    {
	        if(target-wt[ind]>=0)return target/wt[0]*(val[ind]);
	        else
	         return 0;
	    }
	    if(target<0)return INT_MAX;
	    
	    if(dp[ind][target]!=-1)return dp[ind][target];
	    
	    int a=0;
	    if(target-wt[ind]>=0)
	     a=val[ind]+recur(ind,val,wt,target-wt[ind],dp);
	    int b=0+recur(ind-1,val,wt,target,dp);
	    return dp[ind][target]=max(a,b);
	}
    int knapSack(int n, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(n,vector<int>(W+1,-1));
	    int ans= recur(n-1,val,wt,W,dp);
	    
	    return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends