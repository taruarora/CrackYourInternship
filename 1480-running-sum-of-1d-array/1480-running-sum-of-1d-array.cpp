class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector <int> result;
        for(int i=0;i<nums.size();i++){
            if(i==0)
                result.push_back(nums[i]);
            else
            {
                int val = result[i-1]+nums[i];
                result.push_back(val);
            }
        }
        return result;
        
        
        
    }
};