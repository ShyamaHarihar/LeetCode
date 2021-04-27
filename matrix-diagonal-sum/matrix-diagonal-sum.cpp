class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
    int n=mat.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j==mat.size()-1) || (i==j))
            {
                sum=sum+mat[i][j];
            }
        }
    }
        // if(n%2==1)
        // {
        //     sum=sum-mat[n/2][n/2];
        // }
        return sum;
    }
};