class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int,int> mp;
    int s=nums.size();
    int res=0;
    for(auto it:nums)
    {
        mp[it]++;
    }
        for(auto it:mp)
        {
            if(it.second>s/2)
            {
                res = it.first;
            }
        }
        return res;
    }
};