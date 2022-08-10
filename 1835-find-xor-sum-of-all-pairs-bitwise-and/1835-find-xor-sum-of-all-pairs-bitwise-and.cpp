class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;
        int i,xorsum2=arr2[0],xorsum1=arr1[0];
        for(i=1;i<arr2.size();i++)
        {
             xorsum2=arr2[i]^xorsum2;
        }
        for(i=1;i<arr1.size();i++)
        {
             xorsum1=arr1[i]^xorsum1;
        }
        return xorsum1&xorsum2;
    }
};