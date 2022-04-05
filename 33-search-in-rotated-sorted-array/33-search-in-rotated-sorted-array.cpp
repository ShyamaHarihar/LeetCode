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
            if(nums[s]<=nums[mid])
            {
               if(target<nums[s] || target>nums[mid])
               {
                   s=mid+1;
               }
                else{
                    e=mid-1;
                }
            }
            else if(nums[s]>nums[mid]){
                if(nums[mid]>target || nums[e]<target)
                {
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
                
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