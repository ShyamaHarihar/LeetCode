class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int,int> map;//hash table 
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        int res=0;
        for(auto c:map)
        {
            res+=(c.second)*(c.second-1)/2;//Math logic that if a number is found 3 times , 3 pairs are made and 2 times means 1 pair and 1 times means 0 pairs 
        }
        return res;
    }
};