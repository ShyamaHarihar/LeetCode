class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      vector<int> res;
      unordered_map<int,int> map;
      for(auto it:nums)
      {
          map[it]++;
      }
        for(auto [n,freq] : map)
        {
            if(freq==1)
            {
                res.push_back(n);
            }
        }
        return res;
    }
};