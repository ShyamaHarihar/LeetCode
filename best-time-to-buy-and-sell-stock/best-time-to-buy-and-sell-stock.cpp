class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //Kadanes' Algorithm
        int res=0;
        int cp=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            cp=min(cp,prices[i]);
            res=max(res,(prices[i]-cp));
            //cout<<res<<" "<<cp<<" ";
        }
        return res;
    }
};