class Solution {
    bool check(int ind, int openingBracket, string &s){
        if(ind==s.size()) {
            return (openingBracket==0)?true:false;
        }
        bool ans=false;

    if (s[ind] == '*') {
    bool op1 = check(ind + 1, openingBracket + 1, s);
    bool op2= (openingBracket && check(ind + 1, openingBracket - 1, s)); 
    bool op3= check(ind + 1, openingBracket, s); 

    ans= op1|| op2||op3;

    } 
    else {
      if (s[ind] == '(') 
        ans = check(ind + 1, openingBracket + 1, s);    
    else 
        ans = openingBracket && check(ind + 1, openingBracket - 1, s);  
    }

        return ans;
    }

public:
    bool checkValidString(string s) {
        /*stack<char> st;
        int n=s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]=='*')
            {
                if(st.size()+1==n-i )
                {
                    continue;
                }
                else if(st.size()==n-i )
                {
                    st.pop();//there is one open bracket extra
                }
                else if(st.size()<n-i )
                    st.push('(');
            }
            else
            {
                if(st.size()==n-i+1 && st.top()=='*')
                {
                    st.pop();
                    st.pop();
                }
                else if(st.top()=='')
                {
                    
                }
                else
                    st.pop(); //this para is wrong approach
                st.pop();
            }
        } //the above soln fails at cases (*(* 
        */
        
       /* int n=s.length();
        stack<char>asterisk,st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(s[i]=='*')
            {
                asterisk.push(s[i]);
            }
            else
            {
                if(!st.empty())
                    st.pop();
                else 
                {
                    if(!asterisk.empty())asterisk.pop();
                    else
                        return false;
                }
            }
        }
        if(!st.empty())
        {
            if(asterisk.size()>=st.size())return true;
            else return false;
        }
        return true;*/
        //this fails at *( as asterick == ( pr it is wrong so we need to maintain index count
        
        int n=s.length();
        stack<int>asterisk,st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]=='*')
            {
                asterisk.push(i);
            }
            else
            {
                if(!st.empty())
                    st.pop();
                else 
                {
                    if(!asterisk.empty())asterisk.pop();
                    else
                        return false;
                }
            }
        }
        while(!st.empty() && !asterisk.empty() && asterisk.top() >st.top())
        {
            st.pop();
            asterisk.pop();
        }
        if(!st.empty())return false;
        return true;
    }
};