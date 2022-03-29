class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                ans.push_back(i);//current index
                ans.push_back(mp[target-nums[i]]);//the index which is stored in hashmap as num,index value
            }
            else{
                mp[nums[i]]=i;//store number and index as pair
            }
        }
        return ans;
    }
};