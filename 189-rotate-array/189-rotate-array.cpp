class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    int m=k%n;
    vector<int> a(n,0);
        for(int i=0;i<n;i++)
        {
            a[i]=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            nums[(i+m)%n]=a[i];
        }
    }
};