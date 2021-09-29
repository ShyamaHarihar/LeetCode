class Solution {
public:
    bool canPartition(vector<int>& nums) {
    int sum=0;
    int N=nums.size();
    for(int i=0;i<N;i++)
    {
        sum=sum+nums[i];
    }
    if(sum%2!=0)
    {
      return false;
    }
    int sum1=sum/2;     
    vector<vector<bool>> t(N+1,vector<bool>(sum1+1));
    for(int i=0;i<N+1;i++)
    {
      t[i][0]=true;  
    }
    for(int j=1;j<sum1+1;j++)
    {
        t[0][j]=false;
    }
    for(int i=1;i<N+1;i++)
    {
        for(int j=1;j<sum1+1;j++)
        {
            if(nums[i-1]<=j)
            {
                t[i][j]=t[i-1][j] || t[i-1][j-nums[i-1]];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
        return t[N][sum1];
    }
};