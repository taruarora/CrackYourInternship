class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int i=0, n=arr.size();
        while(i<n)
        {
            if(arr[i]<n && arr[i]!=i)
            {
                swap(arr[i],arr[arr[i]]);
            }
            else
                i++;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i)return i;
        }
        return i;
        
    }
};