class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int s=0;
    long long int p=1;
    int result=0;
    int n=nums.size();
    for(int e=0;e<n;e++)
    {
        p*=nums[e];
        while(p>=k && s<e)
        {
            p/=nums[s];
            s+=1;
        }
        if(p<k)
        {
            int len=e-s+1;
            result+=len;
        }
    }
        return result;
    }
};