class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               //The number of times j+k exceeds m just see for yourself when j reached last column we need to come down 
                int x=(i+(j+k)/m)%n;
                int y=(j+k)%m;
                ans[x][y]=grid[i][j];
            }
        }
        return ans;
    }
};