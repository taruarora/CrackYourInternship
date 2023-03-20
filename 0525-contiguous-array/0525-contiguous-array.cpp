class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> m;
        int sum=0,maxi=0;
        // Your code here
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
             sum+=-1;
            else
             sum+=arr[i];
             if (sum==0)
              maxi=i+1;
            if(m.find(sum)!=m.end())
            {
                maxi=max(maxi,i-m[sum]);
            }
            else
             m[sum]=i;
        }
        
        return maxi;
        
    }
};