class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        unordered_map<int,int> map1;
        for(int i=0;i<arr.size();i++)
        {
            map[arr[i]]++;
        }
        for(auto it:map)
        {
            map1[it.second]++;
        }
        for(auto a:map1)
        {
            if(a.second>1)
            {
                return false;
            }
        }
        return true;
    }
};