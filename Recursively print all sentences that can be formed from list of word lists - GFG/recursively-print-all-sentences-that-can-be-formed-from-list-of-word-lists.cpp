//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    void recur(int ind,int j, int m, int n, vector<vector<string>>& list,vector<string>& ans, vector<vector<string>>& res)
    {
        if(ind==m)
        {
            res.push_back(ans);
           // ans.clear();
            return;
        }
        
        
        for(int j=0;j<n;j++)
        {
            ans.push_back(list[ind][j]);
            recur(ind+1,j,m,n,list,ans,res);
            ans.pop_back();
        }
    }
    vector<vector<string>> sentences(vector<vector<string>>&list){
        //Write your code here
        vector<vector<string>> res;
        vector<string> ans;
        int m=list.size(),n=list[0].size();
        recur(0,0,m,n,list,ans,res);
        return res;
    }
};


//{ Driver Code Starts.
int main()
{
	int t = 1;
	//cin>>t;
	while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    vector<vector<string>>list(m, vector<string>(n));
	    for(int i = 0 ; i < m; i++){
	        for(int j = 0; j < n; j++){
	            cin >> list[i][j];
	        }
	    }
	    Solution ob;
	    vector<vector<string>>ans = ob.sentences(list);
	    for(auto it : ans){
	        for(auto it1 : it){
	            cout << it1 << " ";
	        }
	        cout << endl;
	    }
	}
	return 0;
}

// } Driver Code Ends