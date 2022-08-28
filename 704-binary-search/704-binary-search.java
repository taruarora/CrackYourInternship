class Solution {
    public int search(int[] nums, int target) {
        int s = 0, e = nums.length - 1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            s = mid + 1;
        }
        else if(nums[mid] > target){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
        
 
}