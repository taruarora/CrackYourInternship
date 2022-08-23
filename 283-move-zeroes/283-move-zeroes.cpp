class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low=0;
        int n=nums.size();
        int l;
        int high=1;
        if(l==1)return;
        while(high!=n && low<=high)
        {
            if(nums[low]==0 && nums[high]==0)high++;
            else if(nums[low]!=0 ){low++; 
                              high++;}
           else if(nums[low]==0 ) 
           {
               l=nums[high];
               nums[high]=nums[low];
               nums[low]=l;
               high++;
               low++;
           }
            else {low++;
                 high++;}
            
        }
        
    }
};