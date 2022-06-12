class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    int n=intervals.size();
    vector<vector<int>> res;
        for(int i=0;i<n;i++)
        {
            int s=intervals[i][0];
            int e=intervals[i][1];
            if(!res.empty())
            {
                if(s<=res[res.size()-1][1])
                {
                    continue;
                }
            }
            for(int j=i+1;j<n;j++)
            {
                if(intervals[j][0]<=e)
                {
                    if(intervals[j][1]>e)
                        e=intervals[j][1];
                }
            }
            res.push_back({s,e});
        }
        return res;
    }
};