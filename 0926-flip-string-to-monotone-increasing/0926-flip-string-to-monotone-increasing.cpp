class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int count1=0, count0=0, d=0;
        for(int i=0;i<s.length();i++)
        {
            if(count1>=1 && s[i]=='0')
            {
                count0++;
                //cout<<"yes";
            }
                
            else if (s[i]=='1')
            {
               count1++;
            }
            count0=min(count1,count0);
                
        }
        return count0;
    }
};