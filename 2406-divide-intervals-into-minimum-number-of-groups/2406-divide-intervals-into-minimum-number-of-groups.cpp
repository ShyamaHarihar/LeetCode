class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
       int n=intervals.size();
       vector<int> start(n);
       vector<int> end(n);
        for(int i=0;i<n;i++)
        {
           start[i]=intervals[i][0];
            end[i] =intervals[i][1];
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int sp=0;
        int ep=0;
        int res=0;
        int maxres=0;
        while(sp<n)
        {
          if(start[sp]<=end[ep])
          {
              res++;
          }
            else{
                ep++;
            }
            sp++;
        }
        
        return res;
    }
};