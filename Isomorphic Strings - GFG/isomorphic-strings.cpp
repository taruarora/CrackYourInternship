//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        unordered_set<char> s;
        unordered_set<char> s2;
        for(int i=0;i<str1.length();i++)
         s.insert(str1[i]);
        for(int i=0;i<str2.length();i++)
         s2.insert(str2[i]);
        if(s.size()!=s2.size())return 0;
        map<char,char> m;
        for(int i=0;i<str1.length();i++)
        {
            if(m.find(str1[i])!=m.end() )
            {
                if(m[str1[i]]!=str2[i] )return 0;
            }
            else
            {
               m[str1[i]]=str2[i];
               //m[str2[i]]=str1[i];
            }
             
        }
        return 1;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends