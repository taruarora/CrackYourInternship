
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
    /*
        vector<vector<int>> ans;
        int n=arr.size()-1;
        sort(arr.begin(),arr.end());
        vector<int> s;
        s.push_back(arr[0][0]);
        s.push_back(arr[0][1]);
        ans.push_back(s);
        for (int i=1;i<n;i++)
        {
            vector<int> v;
            if(arr[i-1][1]>=arr[i+1][0])
            {
                arr[i+1][0]=arr[i][0];  
                v.push_back(arr[i][0]);
                v.push_back(max(arr[i][1],arr[i+1][1]));
                
            }
            else
            {
                v.push_back(arr[i][0]);
                v.push_back(arr[i][1]);
            }
            ans.push_back(v);
                
        }
        vector<int>v;
        v.push_back(arr[n][0]);
        v.push_back(arr[n][1]);
        ans.push_back(v);
        return ans;
    }
};

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if(intervals.size()==0){
            return res;
        }      
        
        sort(intervals.begin(), intervals.end(),[](vector<int> &a, vector<int> &b){
            return a[0] < b[0];
        });
        vector<int> curr=intervals[0];
        
        for(int i=1;i<intervals.size();i++){
            if(curr[1]<intervals[i][0]){
                res.push_back(curr);
                curr=intervals[i];
            }else{
                curr[1]=max(curr[1], intervals[i][1]);
            }
        }
        
        res.push_back(curr);
        return res;
    }*/
        
        /*int n=arr.size();
        vector<vector<int>>v;
        vector<int>xmp;
        vector<int> check(10000,0);
        for(int i=0;i<n;i++)
        {            
            
            //check[arr[i][1]+1]-=1;
            check[arr[i][0]]+=1;
           // cout<<arr[i][1]+1<<" ";
        }
        for(int i=0;i<n;i++)
        {            
            
            check[arr[i][1]+1]=-1;
           // check[arr[i][0]]+=1;
           // cout<<arr[i][1]+1<<" ";
        }
        for(int i=1;i<10000;i++)
        {
            check[i]=check[i-1]+check[i];
           // cout<<check[i];
            
        }
        int j;
        //cout<<check[5];
        for(int i=0;i<10000;i++)
        {
            if(check[i]>0)
            {
                j=i;
                while(check[i]>0)i++;
                xmp.push_back(j);
                xmp.push_back(i-1);
                v.push_back(xmp);
                xmp.clear();
            }
            
            
        }
        return v;*/
        
        int n=arr.size(),j=0;
        sort(arr.begin(),arr.end());
        vector<vector<int>> v; 
        v.push_back(arr[0]);
        for(int i=1;i<n;i++)
        {
            if( v[j][1]>=arr[i][0])
            {
                v[j][1]=max(arr[i][1],v[j][1]);
                
            }
            else
            {
                j++;
                v.push_back(arr[i]);
            }
        }
        return v;
    }
        
};