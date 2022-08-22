class Solution {
public:
    void sortColors(vector<int>& nums) {
        int *low, *mid, *high;
        int l=nums.size()-1;
        low=&nums[0];
        mid=&nums[0];
        high=&nums[l];
        int tmp=0;
        while(mid<=high)
        {
          if(*mid==0)
          {
              tmp=*low;
              *low=*mid;
              *mid=tmp;
              low++;
              mid++;
          }
          else if(*mid==2)
          {
              tmp=*high;
              *high=*mid;
              *mid=tmp;
              high--;
          }
          else mid++;
        }
        
    }
};