class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            if(map.find(target-nums[i])!=map.end())
            {
                res.push_back(i);//index i has to be pushed 
                res.push_back(map[target-nums[i]]);
                //basically find target-num[i] in the map!
                return res;
                //the corresponding value in map has index push that
            }
            else{
                map[nums[i]]=i;//pair of vector value and index is pushed 
            }
        }
        return res;
    }
};