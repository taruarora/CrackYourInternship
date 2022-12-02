class Solution {
public:
    int c=0;
    int findTargetSumWays(vector<int>& nums, int target){
      
        find(0,nums,target) ;
        return c;
    }
    
   void find(int ind, vector<int>& nums, int target)
   {
       if(ind>=nums.size())
       {
           if(target==0)
               c++;
           return ;
       }
       
       find(ind+1,nums,target+nums[ind]);
       
       find(ind+1,nums,target-nums[ind]);
   }
};