//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool check(int i,int n, int k, vector<int> &arr)
    {
        int c=arr[0], ans=1;
        for(int j=0;j<n;j++)
        {
            if(arr[j]-c>=i)
             {
                 c=arr[j];
                 ans++;
                 if(ans==k)return true;
             }
        }
        return false;
    }

    int solve(int n, int k, vector<int> &arr) {
    
        // Write your code here
        sort(arr.begin(),arr.end());
        int l=1,r=arr[n-1]-arr[0], ans=1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(check(mid,n,k,arr)==true)
            {
                ans=mid;
                l=mid+1;
            }
            else
             r=mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends