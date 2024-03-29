//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int n)
    {
        // code here
        int arr[]={1,2,5,10,20,50,100,200,500,2000};
        //int n=10;
        
        vector<int> v;
        int sum=0,c=0;
        for(int i=9;i>=0;i--)
        {
            if(n/arr[i]<1)continue;
            c++;
            sum=n/arr[i];
            for(int j=0;j<sum;j++)
            {
                v.push_back(arr[i]);
            }
            n=n%arr[i];
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends