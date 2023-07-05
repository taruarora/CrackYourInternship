class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
                else
                {
                    vis[i][j]=0;
                }
            }
            
        }
        int tm=0,t=0;
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            t=q.front().second;
            q.pop();
            //tm=max(tm,t);
            
            for(int i=0;i<4;i++)
            {
                int nrow=row[i]+r;
                int ncol=col[i]+c;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1)
                {
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol]=1;
                    
                }
            }
            //tm=t;
            
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]!=1 && grid[i][j]==1)
                    return -1;
            }
        }
        return t;
        
    }
};