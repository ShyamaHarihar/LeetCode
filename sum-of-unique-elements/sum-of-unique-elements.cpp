class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
    vector<int> hashtable(101,0);
        for(int i=0;i<nums.size();i++)
        {
            hashtable[nums[i]]++;
        }
        int sum=0;
        for(int i=0;i<101;i++)
        {
            if(hashtable[i]==1)
            {
                sum+=i;
            }
        }
        return sum;
    }
};