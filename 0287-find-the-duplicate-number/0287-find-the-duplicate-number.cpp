class Solution {
public:
    int findDuplicate(vector<int>& arr) {
         int i=0, n=arr.size();
        while(i<n)
        {
            if(arr[i]!=i+1 && arr[i] != arr[arr[i]-1])
            {
                swap(arr[i],arr[arr[i]-1]);
            }
            else
                i++;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1)
                return arr[i];
        }
        return i+1;
    }
        
    
};