class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()<3)
        {
            return res;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            int target=-a;
            int s=i+1;
            int e=n-1;
            while(s<e)
            {
                if(nums[s]+nums[e]==target)
                {
                    res.push_back({nums[i],nums[s],nums[e]});
                    //to skip duplicates
                    while(s<e && nums[s]==nums[s+1]) s++;
                    while(s<e && nums[e]==nums[e-1]) e--;
                    s++;
                    e--;
                    
                }
                else if(nums[s]+nums[e]>target)
                {
                    e--;
                }
                else{
                    s++;
                }
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;//main line to skip dupliactes
        }
    return res;    
    }
};