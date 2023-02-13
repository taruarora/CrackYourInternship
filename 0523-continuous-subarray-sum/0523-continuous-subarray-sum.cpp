class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        long sum=0,len=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int mod=sum%k;
            if(sum%k==0 && i>0)return true;
            if(m.find(mod)!=m.end())
            {
                len=i-m[mod];
                if(len>1)return true;
                
            }
            else
                m[mod]=i;
        }
        return false;
        //"PREFIX_SUM"
    }
};