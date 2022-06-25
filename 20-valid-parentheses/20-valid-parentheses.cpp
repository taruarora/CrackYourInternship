#include <stack>

class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
        char m;
        for(int i=0;s[i];i++)
        {
            if(s[i]=='('|| s[i]=='{'||s[i]=='[')
              st.push(s[i]);
          else if(s[i]==')'|| s[i]=='}'||s[i]==']')
            {
               if(st.empty())return false;
               m=st.top();
               st.pop();
            if((m=='{' && s[i]!='}')||(m=='[' && s[i]!=']')||(m=='(' && s[i]!=')')) 
               return false;
               
            }
        }
        if(!st.empty())
            return false;
        else
            return true;
             
        
    }
};