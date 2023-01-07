class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int maxi=nums[0];
        int l=nums.size();
        
        int mini=nums[l-1];
        int start=-1;
        int end=0;//if no changes then must result 0
        
        for(int i=1;i<l;i++)//first wrong greater no
        {
            if(maxi>nums[i])
            {
                start=i;;
            }
            else
                maxi=nums[i];
        }
        
        for(int i=l-2;i>=0;i--)//last wrong smaller no
        {
            if(mini<nums[i])
            {
                end=i;;
            }
            else
                mini=nums[i];
        }
        
       return start-end+1; 
    }
};