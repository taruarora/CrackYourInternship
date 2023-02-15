class Solution {
public:
    int climbStairs(int n) {
        vector<int>df(n+1,-1);
        df[0]=df[1]=1;
        return climb(n,df);
    }
    
    int climb(int ind,vector<int> &df) {
        if(df[ind]!=-1)
         return df[ind];
        df[ind-1]=climb(ind-1,df);
        df[ind-2]=climb(ind-2,df);
        return df[ind]=df[ind-1]+df[ind-2];
    }
};