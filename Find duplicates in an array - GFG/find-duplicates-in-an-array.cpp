//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> vis(n+1,0);
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            vis[arr[i]]+=1;
        }
        for(int i=0;i<n;i++)
        {
            if( vis[i]>1)
             v.push_back(i);
         }
         if(v.size()==0)return {-1};
         return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends