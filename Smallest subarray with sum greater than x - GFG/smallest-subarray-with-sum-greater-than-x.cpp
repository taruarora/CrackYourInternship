//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here 
        int i=0,j=0,sum=0,mini=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            while(sum>x && j<n)
            {
                mini=min(mini,i-j+1);
                sum-=arr[j];
                j++;
            }
        }
        if(mini==INT_MAX)return 0;
        return mini;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends