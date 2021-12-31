class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int s=0;
    int sum=0;
    int n=nums.size();
    int res=INT_MAX;
    for(int e=0;e<n;e++)
    {
        sum+=nums[e];
        while(sum>=target)
        {
            int len=e-s+1;
            res=min(res,len);
            sum-=nums[s];
            s++;     
        }
    }
        return res==INT_MAX?0:res;
    }
};