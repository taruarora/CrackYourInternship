class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m1;
        unordered_set<int> s2;
        for(int i=0;i<arr.size();i++)
        {
            m1[arr[i]]++;
        }
        for(auto i: m1)
        {
            s2.insert(i.second);
        }
        if(s2.size()!=m1.size())return false;
        return true;
    }
};