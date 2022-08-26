class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0, j=0, cnt, sum;
        sum=cnt=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(cnt<0)
            {
                cnt=0;
            }
            cnt=cnt+nums[i];
            if(cnt>sum)sum=cnt;
            
            
            
            
        }
        return sum;
    }
};