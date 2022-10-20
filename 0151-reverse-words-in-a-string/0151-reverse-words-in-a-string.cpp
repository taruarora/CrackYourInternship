class Solution {
public:
    string reverseWords(string s) {
        stack <string> st;
        s.c_str();
        int i=0, j=0;
        string t="";
        while(s[i]!= '\0')
        {
             string d="";
            if(s[i]==' ')
            {
                i++;
                continue;
            }
            while(i<s.length() && s[i]!= ' ')
            {
                d=d+ s[i];
                i++;
            }
            st.push(d);
           // cout<< st.top();
             
        }
        
        while(!st.empty())
        {
            t=t+st.top();
            st.pop();
            if(!st.empty()) 
            {
                t += ' ';
            }
        }
        
        return t;
    }
};