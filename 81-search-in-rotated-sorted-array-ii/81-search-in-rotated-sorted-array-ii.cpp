class Solution {
public:
    bool search(vector<int>& nums, int target) {
    //Concept is Binary Search
    //If the array has been rotated around pivot index we need to check if left half is sorted or right half is sorted and check the boundaries
    int l=0;
    int h=nums.size()-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(nums[mid]==target)
        {
            return true;
        }
        //1. Check if left part is sorted and we can use boundaries to check if target is here
        if(nums[l]<nums[mid])
        {
            //bounadry checking
            if(target<nums[l] || target>nums[mid])//2. out of boundary go to right part
            {
                l=mid+1;
            }
            else //3.within boundary so change the h pointer
            {
                h=mid-1;
            }
        }
        else if(nums[l]>nums[mid])
        {
            //4. In this case right half is sorted
            //5. If we are at the wrong side then shift the side
            if(nums[mid]>target || nums[h]<target)
            {
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else {
            //6. Duplicate case
            l++;
        }
    }
        return false;
    }
};