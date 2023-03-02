//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)  
    {
        int xori=0;
        for(int i=0;i<n;i++)
        {
            xori=xori^arr[i];
        }
        //cout<<x;
        /*long long int i=0;
        while (true)
        {
            if(((1<<i) &x)==1)
            {
                cout<<i;
                break;
                
            }
            else
             i++;
        }*/
        
        int setbit=xori & ~(xori-1);
        
        
        long long int small=0,large=0;
        for(int k=0; k<n;k++)
        {
            if(arr[k]& setbit)small=small ^arr[k];
            else
            large=large^arr[k];
        }
        
      
        
        vector<long long int> v(2);
        int p=0^1;
        //cout<<p;
        if(small<large)
        {
            return v={large,small};
        }
        else 
         return v={small,large};
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends