class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> m;
        int j=0;
        for(auto i= 0; i<nums.size(); ++i)
            m[nums[i]]++;
        for( map<int, int>::iterator itr=m.begin();itr!=m.end(); itr++)
        {
            nums[j]=itr->first;
            j++;
        }
        for(int k=j;k<nums.size();k++)
        {
            nums[k]=-1;
        }
        
        return j;
        
    }
};