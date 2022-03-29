class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //hashmap approach is possible o(nlogn)
        //This is moore voting algorithm
    int count=0;
    int element=0;
    for(int i=0;i<nums.size();i++)
    {
        if(count==0)
        {
            element=nums[i];
        }
        if(nums[i]==element)
        {
            count++;
        }
        else{
            count--;
        }
    }
        return element;
    }
};