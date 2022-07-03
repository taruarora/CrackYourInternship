class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=nums.size();
        for(int i=0;i<m-1;i=i+2)
        {
            if(nums[i]!=nums[i+1])
                return nums[i];
        }
        return nums[m-1];
    }
};