class Solution {
public:
    int helper(int s,int e,vector<int>& nums,int target)
    {
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                return helper(0,mid-1,nums,target);
            }
            else{
                return helper(mid+1,e,nums,target);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        return helper(s,e,nums,target);    
    }
};