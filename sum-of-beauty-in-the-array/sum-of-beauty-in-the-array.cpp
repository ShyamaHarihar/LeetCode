class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
    int n=nums.size();
    int res=0;
    vector<int> f(n),b(n);
    //forward array to store maximum till that point
    //backward array to store minimum till that point from the back
    int v=nums[0];
    for(int i=0;i<n;i++)
    {
        v=max(v,nums[i]);
        f[i]=v;
    }
         v=nums[n-1];
        for(int i=n-1;i>=0;i--)
        {
            v=min(v,nums[i]);
            b[i]=v;
        }
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>f[i-1] && nums[i]<b[i+1])
//if nums[i] is greater than all values in the forward array and less than all in backward array before one index each and this cumulative result is stored in these arrays
            {
                res+=2;
            }
            else if(nums[i]>nums[i-1] && nums[i]<nums[i+1])
            {
                res++;
            }
        }
        return res;
    }
};