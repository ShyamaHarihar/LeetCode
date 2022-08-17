class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n=nums.size();
        int prev_min_product=nums[0];
        int prev_max_product=nums[0];
        int current_max_product=nums[0];
        int current_min_product=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++)
        {
            current_max_product=max({prev_max_product*nums[i],prev_min_product*nums[i],nums[i]});
            current_min_product=min({prev_max_product*nums[i],prev_min_product*nums[i],nums[i]});
            res=max(res,current_max_product);
            prev_min_product=current_max_product;
            prev_max_product=current_min_product;
        }
        return res;
    }
};