class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int> m;
        int count=0;
        
        /*for(int i=0;i<n;i++)
        {
            if((!m.empty() || m.find(abs(k-arr[i]%k))==m.end()))
            {
                m[arr[i]%k]++;
                cout<<"in if ";
                cout<<arr[i]%k<<"  "<<count<<endl;
            }
            else if(m.find(abs(k-arr[i]%k))!=m.end())
            {
              m[arr[i]%k]--;
                if(m[arr[i]%k]==0)
                    m.erase(m[arr[i]%k]);
                count++;
                cout<<"in else ";
                cout<<arr[i]%k<<"  "<<k-arr[i]%k<<" count= "<<count<<endl;
                
            }
            
        }
        cout<<count;
        if(count==n/2)return true;
        return false;
    }*/
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            arr[i]=(arr[i]%k+k)%k; //negative handling -7 and k=3
                                // -7%3 + 3-> -1+3 = 2 there if koi 1 % waala aye tbhu      
            m[arr[i]%k]++;
        }
        if(m[0]%2==1)return false;
        for(int i=1;i<k;i++)
        {
            
            if(m[i]!=m[k-i])return false;
            
        }
        return true;
    }
        
};