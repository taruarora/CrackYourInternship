//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int recur(int ind,string A, vector<string> &B,int n, string s)
    {
        if(s==A || ind==A.length())return 1;
        if(ind>A.length())return 0;
        
        for(int i=0;i<A.length();i++)
        {
            string str=A.substr(ind,i+1);
            if(find(B.begin(),B.end(),str)!=B.end())
             {
                 //cout<<str<<endl;
                  if(recur(i+ind+1,A,B,n,s+str)==1)return 1;
             }
        }
        
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        string s="";
        return recur(0, A,B,B.size(),s);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends