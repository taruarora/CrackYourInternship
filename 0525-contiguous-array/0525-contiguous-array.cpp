class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mp;
        int maxi=0, sum=0, n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)sum+=-1;
            else sum+=nums[i];
            if(sum==0)
                maxi=i+1;
            else
            {
                if(mp.find(sum)!=mp.end())
                    maxi=max(maxi,i-mp[sum]);
                else
                    mp[sum]=i;
            }
        }
        return maxi;
        
    }
};