class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0, maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=1)
            {
                maxi=max(maxi,c);
                c=0;
                continue;
            }
            c++;
        }
        maxi=max(maxi,c);
        return maxi;
    }
};