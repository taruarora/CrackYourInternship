class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size()-1;
        int i=0;
        sort(nums.begin(),nums.end());
        i=(nums[n]-1)*(nums[n-1]-1);
        return i;
        
    }
};