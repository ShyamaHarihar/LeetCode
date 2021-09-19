class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       vector<int> result;
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        for(int i=0;i<nums1.size();i++)
        {
            map1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            map2[nums2[i]]++;
        }
        for(auto it1:map1)
        {
            for(auto it2:map2)
            {
                if(it1.first==it2.first)
                {
                    for(int i=0;i<min(it1.second,it2.second);i++)
                    {
                        result.push_back(it1.first);
                    }    
                }
            }
        }
        return result;
    }
};