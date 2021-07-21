class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        vector<int> l(n,1);
        vector<int> r(n,1);
        int cumulative_prod=1;
        for(int i=0;i<n;i++)
        {
            cumulative_prod=cumulative_prod*nums[i];
            l[i]=cumulative_prod;
        }
        cumulative_prod=1;
        for(int j=n-1;j>=0;j--)
        {
            cumulative_prod=cumulative_prod*nums[j];
            r[j]=cumulative_prod;
        }
        //Boundary case
        res[0]=r[1];
        res[n-1]=l[n-2];
        //Boundary case
        for(int i=1;i<n-1;i++)
        {
            res[i]=l[i-1]*r[i+1];
        }
        return res;
    }
};