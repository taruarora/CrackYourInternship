//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0,j=0;
        for(int c=0;c<m+n;c++)
        {
            
            if(arr1[i]<arr2[j])
            {
              k--;
              if(k==0)return arr1[i];
              //cout<<k<<" "<<i<<"  "<<arr1[i]<<" \n";
              i++;
              
            }
            else
            {
                k--;
                if(k==0)return arr2[j];
                //cout<<k<<" "<<j<<"  "<<arr2[j]<<" \n";
                j++;
            }
            if(i>=n)
            {
                i=n-1;
                arr1[i]=INT_MAX; 
            }
            else if(j>=m)
            {
                j=m-1;
                arr2[j]=INT_MAX; 
            }
            
        }
        return -1;
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends