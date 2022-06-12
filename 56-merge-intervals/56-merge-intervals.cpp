class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> res;
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<intervals.size();i++)
    {
        if(res.empty() || res.back()[1]<intervals[i][0])
        {
            res.push_back({intervals[i][0],intervals[i][1]});//does not overlap
        }
        else{
            res.back()[1]=max(res.back()[1],intervals[i][1]);//update only the second element of pair I did DRY RUN
        }
    }
        return res;
    }
};