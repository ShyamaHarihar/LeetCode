class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    int n=coins.size();
    int dp[n+1][amount+1];
    //Dp table for size of array along x axis and amount along y axis
    for(int j=0;j<amount+1;j++)
    {
        dp[0][j]=INT_MAX-1;//assign infinity as it is not possible practically
    }
    for(int i=1;i<n+1;i++)
    {
            dp[i][0]=0;//If sum should be 0 and we have varying sizes of array coins, then we fix 0
    }
        //Initialising the second row of dp table here
    for(int j=1;j<amount+1;j++)
    {
        if(j%coins[0]==0)
        {
            dp[1][j]=j/coins[0];//answer when divisible
        }
        else{
            dp[1][j]=INT_MAX-1;//infinity when not possible
        }
    }
        for(int i=2;i<n+1;i++)
        {
            for(int j=1;j<amount+1;j++)
            {
                if(coins[i-1]<=j)//satisy the condition then include do not include
                {
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);//unbounded knapsack here and add 1 whenever we are including when not included nothing is added and min will ensure that minimum out of all cases are chosen
                }
                else{
                    dp[i][j]=dp[i-1][j];//move to next as we have not included at all
                }
            }
        }
        // for(int i=1;i<n+1;i++)
        // {
        //     for(int j=0;j<amount+1;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[n][amount]==INT_MAX-1?-1:dp[n][amount];//if it is valid return that else -1
        
    }
};