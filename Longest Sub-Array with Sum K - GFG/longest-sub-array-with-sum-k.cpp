//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        unordered_map<int,int> m;
        int sum=0,c;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==k)
            {
                maxi=i+1;
                //cout<<sum;
                //cout<<"yes";
            }
            else if(m.find(sum-k)!=m.end())
            {
                c=i-m[sum-k];
                maxi=max(maxi,c);
            }
            //cout<<sum<<" ";
            if(m.find(sum)==m.end())
              m[sum]=i;
            
        }
        return maxi;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends