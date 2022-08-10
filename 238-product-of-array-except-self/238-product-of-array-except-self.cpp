class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int f=1;
        vector<int> a(n,1);
        for(int i=1;i<n;i++)
        {
            a[i]=a[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            f=f*nums[i+1];
            a[i]=a[i]*f;
        }
        return a;
        
    }
};