class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int low=0, mid;
        int high=n;
        while(low<=high)
        {
            mid=(low+high)/2;
        
            if(target==nums[mid])return mid;
            else if(nums[mid]>target)
            {
               high=mid-1;
            }
            else
            {
               low=mid+1;
            }
        }
        return -1;
        
        
    }
};