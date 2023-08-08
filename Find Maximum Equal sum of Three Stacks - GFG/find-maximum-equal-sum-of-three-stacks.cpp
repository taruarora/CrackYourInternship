//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int n1,int n2,int n3,vector<int> &s1,vector<int> &s2,vector<int> &s3){
        unordered_set<int> suffix;
        unordered_set<int> suffix2;
        int sum=0;
        for(int i=n1-1;i>=0;i--)
        {
           
            sum+=s1[i];
            suffix.insert(sum);
        }
        sum=0;
       // for(int j:suffix)cout<<j<<" ";
        int ans=0;
        for(int i=n2-1;i>=0;i--)
        {
             
            sum+=s2[i];
            if(suffix.count(sum)>0)
            {
                suffix2.insert(sum);
            }
        }
        sum=0;
        for(int i=n3-1;i>=0;i--)
        {
            sum+=s3[i];
            if(suffix2.count(sum)>0)
            {
                ans=max(ans,sum);
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends