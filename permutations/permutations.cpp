class Solution {
public:
    vector<vector<int>> res;
    void helper(vector<int> &nums,int start,int end)
    {
        if(start==end)
        {
            res.push_back(nums);
            return;
        }
        for(int i=start;i<=end;i++)
        {
            swap(nums[i],nums[start]);
            //recurse
            helper(nums,start+1,end);
            //backtrack
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
    int start=0;
    int e=nums.size()-1;
    helper(nums,start,e);
    return res;
    }
};