class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        comb(0,candidates,v, ans, target,0);
        return ans;
        
    }
    void comb(int i,vector<int>& arr,vector<int> v,vector<vector<int>>& ans, int target,int sum)
    {
        
        if(sum==target)
        {
            ans.push_back(v);
            cout<<"yes";
            return;
        }
        if(sum>target)
        {
            return;
        }
        if(i>=arr.size())
            return;
        
        cout<<sum;
        v.push_back(arr[i]);
        comb(i,arr,v,ans,target,sum+arr[i]);
        v.pop_back();
        comb(i+1,arr,v,ans,target,sum);
    }
};
  /*void helper(int i, int target, int SumTillNow, vector<int>&candidates, vector<int>&subset, vector<vector<int>>&ans){
        
        if(SumTillNow==target){
            ans.push_back(subset);
            return;
        }
        
        if(SumTillNow>target) return;
        
        if(i>=candidates.size()) return;
              
        //pick
        SumTillNow+=candidates[i];
        subset.push_back(candidates[i]);
        helper(i,target,SumTillNow,candidates,subset,ans);
        SumTillNow-=candidates[i];
        subset.pop_back(); 

        //not pick
        helper(i+1,target,SumTillNow,candidates,subset,ans);
    }*/