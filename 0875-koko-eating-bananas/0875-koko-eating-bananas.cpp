
    /*bool chech(int start,vector<int>& piles, int h)
    {
        int ans=0,n=piles.size();
        for(int i=0;i<n;i++)
        {
            if(ans>=h)return false;
            ans+=ceil(piles[i]/start);
            
            if(ans>=h)return false;
            if(piles[i]-start<=0)
            {
                piles[i]=piles[i]-start;
                ans++;
            }
            else
            {
                while(piles[i]-start>0)
                {
                    piles[i]-=start;
                    ans++;
                }
            }
        }
        return true;*/
   
class Solution {  
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        /*int l=1, r=*max(piles.begin(),piles.end());
        long long start;
        int n=piles.size();
        for(start=l;start<=r;start++)
        {
            double ans=0;
            for(int i=0;i<n;i++)
            {
             ans+=ceil(piles[i]/start);
             }
            
            if(ans<=h)return int(start);
            start=start+1;
                
        //return start;
    
        }
        return start;
    }
};*/
        int n=piles.size();
        int l=1;
        double sum;
        int ans,mid=1;
        int r=*max_element(piles.begin(),piles.end());
        //if(n==1 || h==n)return r; 
        while(l<=r)
        {
            sum=0;
            int mid=l+(r-l)/2;
            
            for(int i=0;i<n;i++)
            {
                 
                sum+=ceil((double)piles[i]/mid);
            }
            //cout<<sum<<endl;
                

            //if(sum==h)return mid;
            if(sum<=h)
            {
                ans=mid;
                //return mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
               // mid++;
            
        }
        return ans;
    }
};


