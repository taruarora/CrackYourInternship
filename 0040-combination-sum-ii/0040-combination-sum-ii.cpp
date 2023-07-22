class Solution {
public:
    void recur(int ind,vector<int>& nums, vector<int>& ds,vector<vector<int>>& ans, int target)
    {
        if(target<0)return;
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        //ans.push_back(ds);
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind && nums[i]== nums[i-1])
                continue;
            
            ds.push_back(nums[i]);
            recur(i+1,nums,ds,ans,target-nums[i]);
            ds.pop_back();
                //recur(ind+1,arr,n,ds,ans);
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        recur(0,nums,ds,ans,target);
        return ans;
    }
};