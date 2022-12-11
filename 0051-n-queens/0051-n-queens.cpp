class Solution {
public:
    /*1'st Soln
    vector<vector<string>> solveNQueens(int n) {
        vector<string> vect(n);
        vector<vector<string>> ans;
        string s(n,'.');
        
        for (int i = 0; i < n; i++) {
          vect[i] = s;
        }
        placeQueens(0, vect, ans, n);
        
        return ans;
        
        
    }
    int check( int row, int col, vector<string>  &vect, int n)
    {   
        int i=row, j=col;
        //upr left diagonal
        while(row>=0 && col>=0)
        {
            if(vect[row][col]=='Q') return 0;
            row--;
            col--;
        }
        //niche left diagonal
        row=i, col=j;
        
        while(row<n && col>=0)
        {
            if(vect[row][col]=='Q')return 0; 
            row++;
            col--;
        }
            
        //left cols of it
        row=i, col=j;
        
        while(col>=0)
        {
            if(vect[row][col]=='Q')return 0;
            col--;
        }
        return 1;
        
        
    }
   void placeQueens(int col, vector < string > & vect, vector < vector < string >> & ans, int n) {
      if (col == n) {
        ans.push_back(vect);
        return;
      }
      for (int row = 0; row < n; row++) {
        if (check(row, col, vect, n)) {
          vect[row][col] = 'Q';
          placeQueens(col + 1, vect, ans, n);
          vect[row][col] = '.';
        }
      }
    }*/
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> vect(n);
        vector<vector<string>> ans;
        string s(n,'.');
        
        for (int i = 0; i < n; i++) {
          vect[i] = s;
        }
        //placeQueens(0, vect, ans, n);
        vector < int > leftrow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);
        placeQueens(0, vect, ans,leftrow, upperDiagonal,lowerDiagonal, n);
        
        return ans;
        
        
    }
    void placeQueens(int col, vector < string > & vect, vector < vector < string >> & ans, vector < int > & leftrow, vector < int > & upperDiagonal ,vector < int > & lowerDiagonal, int n) {
      if (col == n) {
        ans.push_back(vect);
        return;
      }
      for (int row = 0; row < n; row++) {
        if (leftrow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1 +col-row]==0) {
          vect[row][col] = 'Q';
            leftrow[row]=1;
            lowerDiagonal[row+col]=1;
            upperDiagonal[n-1 +col-row]=1;
          placeQueens(col+1, vect, ans, leftrow, upperDiagonal,lowerDiagonal, n);
          vect[row][col] = '.';
          leftrow[row]=0;
          lowerDiagonal[row+col]=0;
          upperDiagonal[n-1 +col-row]=0;
        }
      }
    }
    
    
};