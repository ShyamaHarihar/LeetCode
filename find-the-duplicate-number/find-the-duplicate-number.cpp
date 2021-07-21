class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    unordered_map<int,int> mp;
    int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>1)
            {
                res=it.first;
            }
        }
        return res;
    }
};