class Solution {
public:
    int maxIncreasingGroups(vector<int>& usageLimits) {
        /*priority_queue<int> pq;
        int n=usageLimits.size(),c=0;
        
        for(int i=0;i<n;i++)
        {
            pq.push(usageLimits[i]);
        }
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            if(pq.size()<i+1)return c;
            for(int j=0;j<i+1;j++)
            {
                //cout<<pq.size()<<endl;
                
                int num=pq.top();
                pq.pop();
                if(num!=1)
                 v.push_back(num-1);
            }
            c++;
            for(int i:v)
                pq.push(i);
        }
        return c;*/
        
        long long sum=0;
        int n=usageLimits.size(),ans=0;
        sort(usageLimits.begin(),usageLimits.end());
        for(int i=0;i<n;i++)
        {
            sum+=usageLimits[i];
            if(sum>= ((ans+1LL)*(ans+2LL))/2)ans++;
        }
        return ans;
    }
};