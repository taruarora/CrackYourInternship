class Solution {
    public int pivotIndex(int[] nums) {
        int n=nums.length;
        int l=0, r=0;
        if(n==1)return 0;
        for(int i=0;i<n;i++)
             r=r+nums[i];
        for(int i=0;i<n;i++)
        {
           r=r-nums[i];
           if(r==l)return i;
           l=l+nums[i];
        }
       return -1;
 }
}