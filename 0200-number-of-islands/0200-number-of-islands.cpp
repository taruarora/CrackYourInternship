class Solution {
public:
    void check(vector<vector<char>>& grid, queue<pair<int,int>>& q, vector<vector<int>>& vis,int n,int m)
    {
        int i,j;
        while(!q.empty())
        {
            i=q.front().first;
            j=q.front().second;
            q.pop();
                
            if(i-1>=0 && grid[i-1][j]=='1' && !vis[i-1][j])
            {
                vis[i-1][j]=1;
                q.push(make_pair(i-1,j));
            }
            if(j-1>=0 && grid[i][j-1]=='1' && !vis[i][j-1])
            {
                vis[i][j-1]=1;
                q.push(make_pair(i,j-1));
            }
            /*if(i-1>=0 && j-1>=0 && grid[i-1][j-1]=='1' && !vis[i-1][j-1])
            {
                vis[i-1][j-1]=1;
                q.push(make_pair(i-1,j-1));
            }
            if(i-1>=0 && j+1<m && grid[i-1][j+1]=='1' && !vis[i-1][j+1])
            {
                vis[i-1][j+1]=1;
                q.push(make_pair(i-1,j+1));
            }*/
            if(j+1<m && grid[i][j+1]=='1' && !vis[i][j+1])
            {
                vis[i][j+1]=1;
                q.push(make_pair(i,j+1));
            }
            if(i+1<n && grid[i+1][j]=='1' && !vis[i+1][j])
            {
                vis[i+1][j]=1;
                q.push(make_pair(i+1,j));
            }
            /*if(i+1<n && j-1>=0 && grid[i+1][j-1]=='1' && !vis[i+1][j-1])
            {
                vis[i+1][j-1]=1;
                q.push(make_pair(i+1,j-1));
            }
            if(i+1<n && j+1<m && grid[i+1][j+1]=='1'  && !vis[i+1][j+1])
            {
                vis[i+1][j+1]=1;
                q.push(make_pair(i+1,j+1));
            }*/
        }
        
        
            
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size(), cnt=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    if(!vis[i][j])
                    {
                        vis[i][j]=1;
                        q.push(make_pair(i,j));
                        check(grid,q,vis,n,m);
                        cnt++;
                    }
                    
                }    
                   
            }
        }
        return cnt;
    }
};