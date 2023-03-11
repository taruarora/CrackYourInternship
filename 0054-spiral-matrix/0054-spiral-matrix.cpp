class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int n=matrix.size();
        int m=matrix[0].size();
        int rs=0, cs=0, re=n-1,ce=m-1,count=0;
        
        while(rs<=n && cs<=m)
        {
            for(int c=cs;c<=ce &&count< m*n;c++)
            {
                v.push_back(matrix[rs][c]);
                count++;
            }
            
            rs=rs+1;
            for(int r=rs;r<=re && count< m*n;r++)
            {
                v.push_back(matrix[r][ce]);
                count++;
            }
             
            ce=ce-1;
            
              for(int c=ce;c>=cs && count< m*n;c--)
              {
                v.push_back(matrix[re][c]);
                  count++;
              }
             
             re=re-1;
           
              for(int r=re;r>=rs && count< m*n;r--)
              {
                v.push_back(matrix[r][cs]);
                  count++;
              }
            
            cs=cs+1;
        }
        return v;
        
    }
};