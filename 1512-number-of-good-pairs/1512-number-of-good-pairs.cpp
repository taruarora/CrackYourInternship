class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int c=0;
        int freq[101]={};
        for(int num:nums)
        {
            c=c+freq[num]++;
            cout<<c<<"\n";
        }
        return c;
    }
};