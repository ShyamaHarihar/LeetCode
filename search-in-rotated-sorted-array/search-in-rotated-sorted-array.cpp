class Solution {
public:
    int search(vector<int>& nums, int target) {
    //Double Binary Search - apply binary search to find the index of smallest element
    //After that it is regular binary search problem we can decide l and h so that binary search can be done on the subarray
        int l=0;
        int h=nums.size()-1;
        int n=nums.size();
        while(l<h)
        {
            int mid=(h-l)/2+l;
            if(nums[mid]>nums[h])
            {
                l=mid+1;
            }
            else {
                h=mid;
            }
        }//index has the index of smallest element
        cout<<l;
        int index=l;
        if(target==nums[index])
        {
            return index;
        }
        else if(index==0)
        {
            l=0;
            h=n-1;
        }
        else if(target>=nums[0])
        {
            l=0;
            h=index;
        }
        
        else if(target<nums[0])
        {
            l=index;
            h=n-1;
        }
        //Now binary search again as we now the subarray now !!
        while(l<=h)
        {
            int mid=(h-l)/2+l;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else {
                h=mid-1;
            }
        }
        return -1;
    }
};