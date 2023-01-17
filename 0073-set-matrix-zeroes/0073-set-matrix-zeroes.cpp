class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        /*int m=arr.size();
        int n=arr[0].size();
        
        vector<int> rows(m,-1), cols(n,-1);
        for(int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if(arr[i][j]==0)
                {
                    rows[i]=0;
                    cols[j]=0;
                }
            }
        }
        int k;
        if(m>n)
            k=m;
        else
            k=n;
        
        cout<<k<<endl;
        for(int i=0;i<m;i++)
            cout<<cols[i]<<endl;
        
       /* for(int i=0;i<k;i++)
        {
            if(i<m && rows[i]==0)
            {
                for(int j=0;j<m;j++)
                {
                    arr[i][j]=0;
                }
            }
            if(i<n && cols[i]==0)
            {
               for(int j=0;j<m;j++)
                {
                    arr[j][i]=0;
                } 
            }
        }*/
        int m=v.size();
        int n=v[0].size();
        int row[m];
        int col[n];
        
        for(int i=0;i<m;i++)
            row[i]=false;
        
        
        for(int i=0;i<n;i++)
            col[i]=false;
        
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
         }
        
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if( row[i]==true  ||  col[j]==true)
                {
                    v[i][j]=0;
                }
            }
         }
        
    }
};