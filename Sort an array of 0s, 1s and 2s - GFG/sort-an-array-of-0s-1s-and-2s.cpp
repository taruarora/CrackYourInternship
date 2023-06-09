//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int low=0,mid=0,high=n-1, s;
        while(mid<=high)
        {
            if(a[mid]==2)
            {
                swap(a[high],a[mid]);
                high--;
            }
            else if(a[mid]==0)
            {
                swap(a[low],a[mid]);
                low++;
                mid++;
            }
            else mid++;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends