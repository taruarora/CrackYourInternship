class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //efficient using binary search
        int low=0,high=arr.size()-1;
        int n=arr.size();
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(( mid==0 || arr[mid]>=arr[mid-1]) &&( mid== n-1 || arr[mid]>=arr[mid+1]))
                return mid;
            else if(mid>0 && arr[mid]<=arr[mid-1])
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
};