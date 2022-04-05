class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
    int s=1;
        int e=nums.size()-2;
        while(s<=e)
        {
            //Here we go to mid-1 and mid+1 so s will be 1 and not 0 end will be n-2 and not n-1
            int mid=s+(e-s)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid-1]>nums[mid]) e=mid-1;
            else s=mid+1;
        }
        return -1;
    }
};