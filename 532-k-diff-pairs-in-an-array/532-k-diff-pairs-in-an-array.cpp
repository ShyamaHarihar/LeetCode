class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        //Variation of Two Sum Problem
    unordered_map<int,int> mp;
        int res=0;
    for(auto &it:nums)
    {
        mp[it]++;//key value pairs
    }
    //Suppose k is 0 then we can pair (1,1) (2,2) like that 
        if(k==0)
        {
           for(auto &it1:mp)
        {
           if(it1.second>1)
           {
               res++;
           }
        } 
        }
        else
        {   
        for(auto &it2:mp)
        {
            if(mp.find(it2.first+k)!=mp.end())
            {
                res++;
            }
        }
        }
        return res;
    }
};