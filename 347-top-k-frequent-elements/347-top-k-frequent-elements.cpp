class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> res;
        unordered_map<int,int> mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        priority_queue<int,vector<int>,greater<int>> minheap;
        for(auto it:mp)
        {
            minheap.push(it.second);
            if(minheap.size()>k)
            {
                minheap.pop();
            }
        }
        for(auto it:mp)
        {
            if(it.second>=minheap.top())
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};