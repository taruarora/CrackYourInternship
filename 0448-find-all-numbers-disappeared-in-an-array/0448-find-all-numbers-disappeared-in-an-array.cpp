class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int i=0, n=arr.size();
        vector<int> v;
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
                v.push_back(i+1);
        }
        return v;
    }
};