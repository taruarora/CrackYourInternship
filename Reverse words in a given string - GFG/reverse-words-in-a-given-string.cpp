//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverse(string& S,int start,int end)
    {
        while(start<=end)
        {
            swap(S[start++],S[end--]);
            
        }
        return S;
    }
    string reverseWords(string S) 
    { 
        // code here 
        int start=0,end=1;
        //cout<<S.length();
        while(end<=S.length())
        {
            if(S[end]=='.' || end==S.length())
            {
                reverse(S,start,end-1);
                start=end+1;
                //cout<<"yes"<<endl;
            }
            end++;
        }
       reverse(S,0,S.length()-1);
        return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends