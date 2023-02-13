#include<bits/stdc++.h>
#include<string>
class Solution {
public:
    string getHint(string secret, string guess) {
        /*
        vector<pair<int,int>> m;
        int cow=0, bull=0;
        int i=0;
        vector<pair<int,int>>::iterator it;
        for(char ch:secret)
        {
            m.push_back(make_pair(ch,i));
        }
        i=0;
        for(char ch:guess)
        {
            if(m.find(ch)!=m.end())
            {
                if(m[ch]==i)
                {
                    bull+=1;
                    m.erase(ch);
                }
                else
                {
                   cow+=1;
                   m.erase(ch);
                }
                    
            }
            i++;
        }
        string s=to_string(bull)+"A"+to_string(cow)+"B";
        return s;
        */
        if(secret.size() != guess.size() || secret.empty())  return "0A0B"; 
        
        vector<int> arr(10,0);
        int cow=0,bull=0;
        for(int i=0;i<secret.size();i++)
        {
            int s=secret[i]-'0';
            int g=guess[i]-'0';
            if(s==g)
            {
                bull++;
            }
            else
            {
               if(arr[s]++<0)cow++;   //already guess tha waaha
               if(arr[g]-->0)cow++;     //already secret ka word tha whaa
            }
        }
        return to_string(bull)+"A"+to_string(cow)+"B";
        
    }
};