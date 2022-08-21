class Solution {
public:
    int climbStairs(int n) {
       vector<int> distinctWay(n,0);
        distinctWay[0]=1;
        if(n>1) distinctWay[1]=2;
        for(int i=2;i<n;i++)
        {
            distinctWay[i]=distinctWay[i-1]+distinctWay[i-2];
        }
        return distinctWay[n-1];
    }
};