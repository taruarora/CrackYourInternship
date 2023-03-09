class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int s=0,e=arr.size()-1;
        vector<int> v(2,-1);
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(arr[mid]==target)
            {
                int c=mid;
                while(c>s && arr[c-1]==arr[mid])c--;
                v[0]=c;
                c=mid;
                while(c<e && arr[c+1]==arr[mid])c++;
                v[1]=c;
                return v;
            }
            else if(arr[mid]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        return v;
    }
};