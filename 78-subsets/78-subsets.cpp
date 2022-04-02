class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        generate(current,0,nums);
        return res;
    }
    void generate(vector<int> &current,int index,vector<int> &nums)
    {
        //add all the leaf nodes
        if(index==nums.size())
        {
            res.push_back(current);
            return;
        }
        //the element is not included
        generate(current,index+1,nums);
        //the element is included
        current.push_back(nums[index]);
        generate(current,index+1,nums);
        //undo the step or backtrack
        current.pop_back();
    }
};