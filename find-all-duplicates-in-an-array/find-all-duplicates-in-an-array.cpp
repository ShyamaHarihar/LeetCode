class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    vector<int> res;
    unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        for(auto it:map)
        {
            if(it.second==2)
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};