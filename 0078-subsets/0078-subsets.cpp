class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> arr;
        return subsetrec(0,nums,res,nums.size(),arr);
        
    }
    vector<vector<int>> subsetrec(int ind,vector<int>& nums,vector<vector<int>> res, int size, vector<int> arr)
    {
        if(ind==size)
        {
            res.push_back(arr);
            return res;
        }
        arr.push_back(nums[ind]);
        res= subsetrec(ind+1,nums,res,size,arr);
        arr.pop_back();
        res= subsetrec(ind+1,nums,res,size,arr);
        return res;
        
    }
    
};