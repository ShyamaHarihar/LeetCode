class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //Linked List cycle method
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(fast!=slow);
        //Take fast to first element
        fast=nums[0];
        //now where they meet is duplicate
        while(fast!=slow)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};