class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(),nums1.end());
        
        int l=nums1.size();
        if(l%2==0)
        {
            double d=(nums1[int(l/2)]+nums1[int(l/2)-1]);
            
          return d/2  ;
        }
        else
        {
             return nums1[int(l/2)];
        }
           
        
    }
};