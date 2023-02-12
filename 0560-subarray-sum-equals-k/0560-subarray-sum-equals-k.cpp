class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0, count=0;
        unordered_map <int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k)
            {
                count++;
            }
            
            int temp=sum-k;
            if(m.find(temp)!=m.end())
            {
               count+=m[temp];
            }
             m[sum]++;
            }
           
        return count;
        
    }
};