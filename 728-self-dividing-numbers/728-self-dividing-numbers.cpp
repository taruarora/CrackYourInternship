class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> v;
        if(left==0)left++;
        
        while(left!=right+1)
        {
            if(left<10)
            {
               v.push_back(left);
               left++;
               
            }
            else
            {
            int n=left;
            while(n!=0)
            {
                int r=n%10;
                if(r==0 || left%r!=0)
                {
                    break;
                }
                n=n/10;
            }
            if(n==0)v.push_back(left);
            left++;
            }    
        }
     return v;   
    }
};