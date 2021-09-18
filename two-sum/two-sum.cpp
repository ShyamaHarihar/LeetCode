class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> map;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(map.find(target-nums[i])!=map.end())
            {
                res.push_back(i);//in the hashmap target-num[i] exists meaning there is a pair
                //so we need to store them in the hashmap
                res.push_back(map[target-nums[i]]);
            }
            else
            {
                map[nums[i]]=i;//store element and index in the hasmap
            }
        }
        return res;
    }
};