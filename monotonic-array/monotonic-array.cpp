class Solution {
public:
    bool increase(vector<int>& a)
    {
        for(int i=1;i<a.size();i++)
        {
            if(a[i-1]>a[i])
            {
                return false;
                break;
            }
        }
        return true;
    }
    bool decrease(vector<int>& a)
    {
        for(int i=1;i<a.size();i++)
        {
            if(a[i-1]<a[i])
            {
                return false;
                break;
            }
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
       if(nums.size()==1)
       {
           return true;
       }
       if(nums[0]<nums[1])
       {
           return increase(nums);
       }
        if(nums[0]<=nums[1])
        {
            return increase(nums) or decrease(nums);
        }
       return decrease(nums);
    }
};