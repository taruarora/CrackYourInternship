class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int l=arr.size();
        vector<vector<int>> v;
        if(arr.size()<4)return v;
        int i=0,j=1;
        sort(arr.begin(),arr.end());
        for(long i=0;i<l-3;i++){
            
            for(long j = i+1;j<l;j++){
            long target2=(long)target-(arr[i]+arr[j]);
            int low=j+1;
            int high=l-1;
                
            while(low<high)
            {
                int halfsum=arr[low]+arr[high];
                if(halfsum==target2)
                {
                    vector<int> v1{arr[i] ,arr[j] ,arr[low] ,arr[high]};
                    v.push_back(v1);
                    while(low<high && arr[low]==v1[2])low++;
                    while(low<high && arr[high]==v1[3])high--;
                    
                }
                else if(halfsum<target2){
                    low++;
                    while(low<high && arr[low]==arr[low-1])low++;
                }  
                else
                {
                    high--;
                    while(low<high && arr[high]==arr[high+1])high--;
                }
                    
            }
             while(j<=l-2 && arr[j]==arr[j+1])j++;
                                 
            }
            while(i+1<l && arr[i]==arr[i+1])i++;
            
            
        }
      return v;  
    }
};