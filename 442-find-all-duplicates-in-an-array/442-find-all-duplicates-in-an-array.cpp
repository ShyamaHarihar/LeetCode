class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            int num=abs(nums[i])-1;//take absolute -1 which is the index 
            if(nums[num]<0)//if already negated
            {
                res.push_back(num+1);
            }
            else{
                nums[num]=-nums[num];//negate it
            }
        }
        return res;
    }
};