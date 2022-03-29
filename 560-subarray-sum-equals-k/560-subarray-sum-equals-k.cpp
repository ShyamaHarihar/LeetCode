class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int res=0;
        int sum=0;
        //hashmap 
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k) res++;
            if(mp.find(sum-k)!=mp.end()) res+=mp[sum-k];//pair in hashmap
            if(mp.find(sum)!=mp.end()) mp[sum]++;
            else mp[sum]=1;
        }
        return res;
    }
};