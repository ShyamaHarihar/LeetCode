class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    double sum=0;
    int s=0;
    int e=0;
    int n=nums.size();
    double ms;
    for(;e<k;e++)
    {
        sum+=nums[e];
    }
        ms=sum;
        while(e<n)
        {
            sum=sum-nums[s];
            s++;
            sum=sum+nums[e];
            e++;
            ms=max(ms,sum);
        }
        return (ms/k);
    }
};