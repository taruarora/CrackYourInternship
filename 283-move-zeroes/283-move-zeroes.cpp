class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        int l=nums.size();
        while(i<l && j<l)
        {
            if(nums[j]!=0)
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        
    }
};