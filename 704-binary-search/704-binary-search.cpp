class Solution {
public:
    int helper(int start,int end,int target,vector<int>& nums)
    {
       if(start<=end)
       {
           int mid=start+(end-start)/2;
           if(nums[mid]==target)
           {
               return mid;
           }
           else if(nums[mid]>target)
           {
               return helper(0,mid-1,target,nums);
           }
           else{
               return helper(mid+1,end,target,nums);
           }
       }
       return -1;
    }
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        return helper(start,end,target,nums);    
    }
};