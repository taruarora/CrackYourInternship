class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int> m;
        int l;
        string st=senders[0];
        int maxi=INT_MIN;
        for(int i=0;i<senders.size();i++)
        {
          int words = count(begin(messages[i]), end(messages[i]), ' ')+1;
          m[senders[i]]+=words;
        }
        for(auto i: m)
        {
            cout<<i.first<<" : "<<i.second<<endl;
        }
        for(auto i: m)
        {
            if(i.second>=maxi)
            {
                st=i.first;
                maxi=i.second;
            }
               
                
        }
        return st;
        
    }
};