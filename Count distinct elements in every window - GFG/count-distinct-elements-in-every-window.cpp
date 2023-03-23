//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        //code here.
        map<int,int> m;
        vector<int> v;
        m[arr[0]]=1;
        for(int i=1;i<n;i++)
        {
            if(i>=k)
            {
                v.push_back(m.size());
                m[arr[i-k]]--;
                if(m[arr[i-k]]==0)
                 m.erase(arr[i-k]);
            }
            m[arr[i]]++;
        }
        v.push_back(m.size());
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends