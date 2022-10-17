class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int sum=0, n=arr.size(), i=0, j=0, maxi=n+1;
        while(i<n)
        {
            sum+=arr[i];
            while(sum>=target && j<n)
            {
                maxi= min(maxi, i-j+1);
                sum-=arr[j];
                j++;
            }
            i++;
            
        }
        return maxi %(n+1);
        
    }
};