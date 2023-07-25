class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        /*int l=0,r=arr.size();
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(arr[mid]-1!=arr[mid-1])
            {
                mid+1;
            }
        }*/
        int c=0,d=0, n=arr.size();
        if(k<arr[0])return k;
        for(int i=1;i<arr[n-1];i++)
        {
            if(i!=arr[d])
            {
                int dummy=i;
                while(i!=arr[d])
                {
                    c++;
                    if(c==k)return i;
                    i++;
                    
                    
                }
                cout<<d<<" "<<c<<" "<<i<<endl;
            }
            d++;
        }
        cout<<endl<<c<<" "<<k;
        if(c<k)c=k-c+arr[n-1];
        return c;
    }
};