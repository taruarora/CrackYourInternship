class Solution {
public:
    void dfs()
    {
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int finalcolor) {
        int initialcolor=image[sr][sc];
        int n=image.size(),i,j;
        int m=image[0].size();
        
         vector<vector<int>> vis(n,vector<int>(m,0));
        
        queue<pair<int,int>> q;
        q.push(make_pair(sr,sc));
        while(!q.empty())
        {
            i=q.front().first;
            j=q.front().second;
            image[i][j]=finalcolor;
            q.pop();
            
            if(i-1>=0 && image[i-1][j]==initialcolor && !vis[i-1][j])
            {
                vis[i-1][j]=1;
                q.push(make_pair(i-1,j));
            } 
            if(j-1>=0 && image[i][j-1]==initialcolor && !vis[i][j-1])
            {
                vis[i][j-1]=1;
                q.push(make_pair(i,j-1));
            }
            if(j+1<m && image[i][j+1]==initialcolor && !vis[i][j+1])
            {
                vis[i][j+1]=1;
                q.push(make_pair(i,j+1));
            }
            if(i+1<n && image[i+1][j]==initialcolor && !vis[i+1][j])
            {
                vis[i+1][j]=1;
                q.push(make_pair(i+1,j));
            }
        }
        return image;
    }
};