class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++)
        {
            int c=i;
            int count=0;
            while(c)
            {
                c=c&(c-1);
                count++;
            }
             v.push_back(count);
        }
       
        return v;
        
    }
};