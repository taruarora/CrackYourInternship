class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0, j=0, cnt=0, sum;
        sum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            
            cnt=cnt+nums[i];
            if(cnt>sum)sum=cnt;
            
            if(cnt<0)
            {
                cnt=0;
            }
            cout<<cnt;
            
        }
        return sum;
    }
};