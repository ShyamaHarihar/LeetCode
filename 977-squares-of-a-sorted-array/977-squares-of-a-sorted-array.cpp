class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int> res(nums.size(),0);
    int l=0;
    int r=nums.size()-1;
    for(int k=res.size()-1;k>=0;k--)
    {
        if(abs(nums[l])>abs(nums[r]))
        {
            res[k]=nums[l]*nums[l];
            l++;
        }
        else{
            res[k]=nums[r]*nums[r];
            r--;
        }
    }
        return res;
    }
};