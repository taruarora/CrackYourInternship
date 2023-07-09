class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int n=matrix.size();
        int m=matrix[0].size();
        int rs=0, cs=0, re=n-1,ce=m-1,count=0;
        
        int s=m*n;
        while(rs<n && cs<m )
        {
            for(int c=cs;c<=ce && count<s;c++)
            {
                v.push_back(matrix[rs][c]);
                count++;
            }
            
            rs=rs+1;
            for(int r=rs;r<=re && count<s;r++)
            {
                v.push_back(matrix[r][ce]);
                count++;
            }
             
            ce=ce-1;
            
              for(int c=ce;c>=cs && count<s;c--)
              {
                v.push_back(matrix[re][c]);
                  count++;
              }
             
             re=re-1;
           
              for(int r=re;r>=rs && count<s;r--)
              {
                v.push_back(matrix[r][cs]);
                  count++;
              }
            
            cs=cs+1;
        }
        return v;
        
    }
};