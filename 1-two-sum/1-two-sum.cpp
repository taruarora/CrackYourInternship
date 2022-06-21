class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator it;
        for(int i=0;i<nums.size();i++)
        {
            it=std::find(nums.begin(),nums.end(),target-nums[i]);
            if(it!=nums.end()&& it-nums.begin()!=i )
            {
                vector<int> twoSum={i,int(it-nums.begin())};
                return twoSum;
            }
        }
       return {-1,-1};
        
    }
};