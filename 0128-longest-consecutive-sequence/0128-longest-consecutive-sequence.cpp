class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        set<int> s;
        int maxi=INT_MIN;
        for(int i:nums)
            s.insert(i);
        for(int st:s)
            cout<<st;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)==s.end()) 
            {
                int count=0;
                while(s.find(nums[i]++)!=s.end())count++;
                maxi=max(maxi,count);
            }
        }
        return maxi;
        
    }
};