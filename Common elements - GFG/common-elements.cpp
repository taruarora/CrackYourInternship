//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            vector<int> v;
            map<int,int> m1;
            map<int,int> m2;
            map<int,int> m3;
            for(int i=0;i<n1;i++)
            {
                m1[a[i]]++;
            }
            for(int i=0;i<n2;i++)
            {
                m2[b[i]]++;
            }
            for(int i=0;i<n3;i++)
            {
                m3[c[i]]++;
            }
            for(int i=0;i<n1;i++)
            {
                if(m1[a[i]] &&m2[a[i]] && m3[a[i]])
                {
                    v.push_back(a[i]);
                    m1[a[i]]=0;
                }
            }
            return v;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends