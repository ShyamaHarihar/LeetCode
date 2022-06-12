class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxPro=INT_MIN;
    for(int i=0;i<prices.size();i++)
    {
       minPrice=min(prices[i],minPrice);
       maxPro=max(prices[i]-minPrice,maxPro);
    }
        return maxPro;
    }
};