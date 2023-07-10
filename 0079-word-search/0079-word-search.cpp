class Solution {
public:
   /* bool checkers(int i,int j, int m, int n, string word, vector<vector<char>>& board)
    {
        int c=0;
        vector<vector<int>>vis(m,vector<int>(n,-1));
        while(i>=0 && j>=0 && j<n && i<m)
       {
            vis[i][j]=1;
            c++;
            if(c==word.length())return true;
            int delrow[]={-1,0,+1,0};
            int delcol[]={0,+1,0,-1};

            for(int k=0;k<4;k++)
            {
                int row=delrow[k]+i;
                int col=delcol[k]+j;
                if(i>=0 && j>=0 && j<n && i<m && board[row][col]==word[c] &&vis[row][col]==-1)
                {
                    i=row;
                    j=col;
                    break;
                }
            }
             if(c==word.length())return true;
        }
        return false;
        
                    
    }*/
    /*bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(check(i,j,m,n,word,board))return true;
                    
                }
            }
        }
        return false;
    }*/
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(solve(0,i,j,m,n,word,board))return true;
                    
                }
            }
        }
        return false;
    }
    bool solve(int index,int i,int j, int m, int n, string word, vector<vector<char>>& board)
    {
       if(index==word.size())
           return true;
        if(i>=m || j>=n || j<0 || i<0)
            return false;
        bool ans=false;
        if(word[index]==board[i][j])
        {
            board[i][j]='*';
                  ans=solve(index+1,i+1,j,m,n,word,board)||solve(index+1,i,j+1,m,n,word,board)||solve(index+1,i-1,j,m,n,word,board)||solve(index+1,i,j-1,m,n,word,board);
            
            board[i][j]=word[index];
    }
     return ans;   
    }
    
    
};