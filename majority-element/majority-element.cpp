class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        int r1=0;
        int r2=0;
        for(auto it:map)
        {
            if(it.second>(nums.size())/2)
            {
               r2=it.second;
               r1=it.first;
            }
        }
        return r1;
    }
};