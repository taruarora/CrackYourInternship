//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r)
    {
        for(int i=l-1;i<r;i++)
        {
            if((y & (1<<i))!=0)
             x=x|(1<<i);
        }
        return x;
    }
        // code here
        /* string s="";
        for(int i=0;i<32;i++)
        {
            if(y & (1<<i) !=0)s+="1";
            else
             s+="0";
        }
        
        cout<<s;
        for(int i=l;i<r;i++)
        {
            if(s[i-l]=='1')
             x=x | (1<<(i-l));
        }
        return x;*/
        /* while(l<=r) {
            // if the lth bit in y is set 
            if((y&(1<<l-1))!=0) {
               // set the lth bit in x
               x = x | (1<<l-1); 
            }
            l++;
        }
        return x;
    }
    }*/
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends