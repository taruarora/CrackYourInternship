class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<char,int> m;
        for(char c:word1)
            m[c]++;
        for(char c:word2)
        {
            m[c]--;
        }
        for(int i=0;i<m.size();i++)
        {
            if(m[i]>3 || m[i]<-3)
                return false;
        }
        return true;
    }
};