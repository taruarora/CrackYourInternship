#include <bits/stdc++.h>
#include<stack>
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last_index(26,0);
        vector<bool> visited(26,false);
        
        stack<char> st;
        
        for(int i=0;i<s.length();i++)
        {
            last_index[s[i]-'a']=i;
        }
        
       
        for(int i=0;i<s.length();i++)
        {if(visited[s[i]-'a']==false)
         {
            cout<<"variable : "<<s[i];
            while(!st.empty() && st.top()> s[i] && last_index[st.top()-'a']> i )
            {
                cout<<"\nentered\n";
                visited[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            visited[s[i]-'a']=true;
            
          }
        } 
        
        string str;
        while(!st.empty())
        {
            str=st.top()+str;
            st.pop();
        }
        return str;
        
        
    }
};