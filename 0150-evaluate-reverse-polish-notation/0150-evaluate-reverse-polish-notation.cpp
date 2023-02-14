#include<bits/stdc++.h>
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int num1, num2;
        for(int i=0;i<tokens.size();i++)
        {
            string op=tokens[i];
            if(op=="+"|| op=="-"|| op=="*" ||op=="/")
            {
                num2=s.top();
                s.pop();
                num1=s.top();
                s.pop();
                
                if(op=="+")s.push(num1+num2);
                else if(op=="-")s.push(num1-num2);
                else if(op=="*")s.push(num1*num2);
                else
                {
                    s.push(num1/num2);
                }
            }
            else
                s.push(stoi(tokens[i]));
        }
        return s.top();
        
    }
};