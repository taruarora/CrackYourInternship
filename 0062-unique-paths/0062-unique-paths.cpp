class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int totalsteps=m-1+n-1;
            //m-1 times downqards and n-1 times sideways
        //paths can be DDRRRRRR OR DRRRRRRD
            //so this is just nCr ways. out of 8 total pick 2 combn of D
            
            double nCr=1;
            int r=min(n,m)-1;
            for(int i=1;i<=r;i++)
            {
               nCr = nCr*totalsteps/i ;
               totalsteps--;
            }
        return nCr;
        
          /*
           8C3
           1*8/1=8
           8*7/2=28
           8*7*6/3
           
           this makes the same formula for nCr
          */  
            
        
    }
};