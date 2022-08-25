class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
           m[nums[i]]++; 
        }
        pair<int,int> p=make_pair(0,0);
        map<int,int> ::iterator i;
        for(i=m.begin();i!=m.end();i++)
        {
            if(i->second > p.second)p=make_pair(i->first,i->second);
        }
        return p.first;
    }
};