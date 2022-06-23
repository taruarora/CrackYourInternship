class Solution {
public:
    int reverse(int x) {
       long int s=0;
        while(x)
        {
            int r=x%10;
            x=x/10;
            s=s*10+r;
            
        }
         
         if(s < -pow(2,31) || s > pow(2,31)-1)
           return 0;
        return int(s);
        
    }
};