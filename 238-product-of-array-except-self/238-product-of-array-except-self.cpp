class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    
    //Have an array for product of elements from left hand side
    //have an array for product of elements from right hand side
    int n=nums.size();
        vector<int> res(n,0);
        vector<int> r(n,0);
        vector<int> l(n,0);
        int cumulative_product=1;
        for(int i=0;i<n;i++)
        {
            cumulative_product*=nums[i];
            l[i]=cumulative_product;
        }
        cumulative_product=1;
        for(int i=n-1;i>=0;i--)
        {
            cumulative_product*=nums[i];
            r[i]=cumulative_product;
        }
        //Edge cases
        res[0]=r[1];
        res[n-1]=l[n-2];
        for(int i=1;i<n-1;i++)
        {
            res[i]=l[i-1]*r[i+1];
        }
        return res;
    }
};