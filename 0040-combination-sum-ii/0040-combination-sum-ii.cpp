class Solution {
public:
    /*One Way
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>>  res;
        vector<int> arr;
        set<vector<int>> r;
        sort(candidates.begin(),candidates.end());
        r=combSum(0,arr, target, res, candidates); 
        vector<vector<int>> v(r.begin(),r.end());
        return v;
    }
    
    set<vector<int>> combSum(int ind, vector<int> v, int  target, set<vector<int>> &res, vector<int> arr)
    {
        
        if(ind==arr.size())
        {
            if(target==0)
             res.insert(v);
            return res;
        }
        if (arr[ind]<=target)
        { 
        v.push_back(arr[ind]);
        res=combSum(ind+1,v,target-arr[ind], res,arr );
        v.pop_back();
        }
        res= combSum(ind+1,v,target, res,arr );
        
        return res;
    }
    */
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>  ans;
        vector<int> arr;
        sort(candidates.begin(),candidates.end());
        combSum(0, target,candidates, ans,arr); 
        return ans;
    }
    
    void combSum(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds)
        {   
          if(target==0)
          {    
             ans.push_back(ds);
             return;
          }
        
        for(int i = ind;i<arr.size();i++) {
            if(i>ind && arr[i]==arr[i-1]) continue; 
            if(arr[i]>target) break; 
            ds.push_back(arr[i]);
            combSum(i+1, target - arr[i], arr, ans, ds); 
            ds.pop_back(); 
        }
        
    }
};