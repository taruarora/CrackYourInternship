//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    bool check(int j,vector<vector<int> >& M,int n)
    {
        for(int k=0;k<n;k++)
        {
            if(M[j][k]==1)return false;
        }
        for(int k=0;k<n;k++)
        {
            if(k!=j && M[k][j]==0)return false;
        }
        return true;
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        unordered_map<int,int> m;
        vector<int>vis (n,-1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(M[i][j]==1 && vis[j]==-1)
                {
                    vis[j]=1;
                    if(check(j,M,n)==true)return j;
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends