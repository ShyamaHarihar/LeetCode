class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int p=nums.size()-1;
        while(p>=1 && nums[p-1]>=nums[p])
        {
            p--;
        }
        if(p==0)
        {
            sort(nums.begin(),nums.end());
            return;
        }
        p=p-1;
        int q=nums.size()-1;
        while(q>p && nums[q]<=nums[p])
        {
            q--;
        }
        swap(nums[q],nums[p]);
        p=p+1;
        q=nums.size()-1;
        while(p<q)
        {
            swap(nums[p],nums[q]);
            p++;
            q--;
        }
    }
};