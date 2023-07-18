//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void recur(int i,int j,string& s,int n,set<string>& v)
	    {
	        if(i==n-1)
	        {
	            v.insert(s);
	            
	        }
	         
	        for(int j=i;j<n;j++)
	        {
	            swap(s[i],s[j]);
	            recur(i+1,j,s,n,v);
	            swap(s[i],s[j]);
	        }
	    }
	    
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string> v;
		    recur(0,0,S,S.length(),v);
		    vector<string> vis(v.begin(),v.end());
		    return vis;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends