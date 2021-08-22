class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    //result vector
        vector<vector<int>> res;
        if(nums.size()<3)
        {
            return res;
        }
        //sort the numbers to apply two pointers 
        sort(nums.begin(),nums.end());
        //start traversing the array
        for(int i=0;i<=nums.size()-3;i++)
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int low=i+1;
                int high=nums.size()-1;
                int sum=0-nums[i];
                while(low<high)
                {
                    if((nums[low]+nums[high])==sum)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        res.push_back(temp);
                        while(low<high && (nums[low]==nums[low+1])) low++;
                        while(low<high && (nums[high]==nums[high-1])) high--;
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }
                }
            }
        }
        return res;
    }
};