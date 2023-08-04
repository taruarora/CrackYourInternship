//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int arr1[], int arr2[], int n) {
            // code here 
           /* int med1 = 0;
        int *lo = ar1, *hi = ar2;
        int t=sizeof(ar1)/sizeof(ar1[0]);
        cout<<t;
        for (int i = 0; i < n; i++) {
            
             if (*lo > *hi ) {
                swap(lo, hi);
            }
            med1 = *lo;
            lo++;
            if(lo == (ar1 + n*t) || lo == ar2 + (n*t))lo=hi;
        }
        if (*lo > *hi) {
            swap(lo, hi);
        }
        med1 = med1 + *lo;
        return med1;*/
        
        int l=0,h=0;
        while(l<n && h<n)
        {
            if(l+h==n-1)break;
            if(arr1[l]<=arr2[h])l++;
            else h++;
        }
      //  cout<<arr1[l]<<arr2[h];
        if(arr1[l]==arr2[h])return 2*arr1[l];
        else if(arr1[l]<arr2[h])
        {
            int mid1=arr1[l];
            if(l+1<n && arr1[l+1]<arr2[h])return arr1[l]+arr1[l+1];
            else
             return arr1[l]+arr2[h];
        }
        else
        {
            int mid1=arr2[h];
            if(h+1<n && arr2[h+1]<arr1[l])return arr2[h+1]+arr2[h];
            else
             return arr1[l]+arr2[h];
        }
        return 0;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends