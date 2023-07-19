#include<bits/stdc++.h>
class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        
       
        string s=countAndSay(n-1);
        int d=0,cnt=1;
         string str="";
        for(int i=0;i<s.size();i++)
        {
            if (i < s.size() && s[i] == s[i + 1]) {
                cnt++;
            }
            else
            {
                str+=to_string(cnt)+s[i];
                cnt=1;
            }
            
        }
        return str;
        
    }
    
};