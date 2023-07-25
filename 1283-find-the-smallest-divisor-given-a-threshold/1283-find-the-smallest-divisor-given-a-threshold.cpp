class Solution {
public:
    int smallestDivisor(vector<int>& bloomDay, int m) {
        int n=bloomDay.size();
        
        //if((long long)m*k>n)return -1;
        int inidays=1;
        int r=*max_element(bloomDay.begin(),bloomDay.end()),cnt=0;
        long long totalBouq=0;
        int ans=0;
        while(inidays<=r)
        {
            cnt=0;
            totalBouq=0;
            int mid=inidays+(r-inidays)/2;
            for(int i=0;i<n;i++)
            {
                
                    totalBouq+=ceil((double)bloomDay[i]/mid);
                   // cnt=0;
            }
           // totalBouq+=floor((double)cnt/k);
            if(totalBouq<=double(m))
            {
                ans=mid;
                r=mid-1;
            }
            else
                inidays=mid+1;
        }
        
        //for last n-1 element we need to add
        
        return ans;
        
    }
    
};