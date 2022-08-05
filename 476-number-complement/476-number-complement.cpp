class Solution {
public:
    int findComplement(int num) {
        int i=2,s=0,r,c=0;
        while(num!=0)
        {
            r=(num%2)^1;
            num=num/2;
            s=s+r*pow(2,c);
            c++;
        }
        return s;
        
    }
};