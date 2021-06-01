class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    //first we need to tarverse the 2d vector given
    int maxval=0;
        if(grid.size()==0)
        {
            return 0;
        }
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            if(grid[i][j]==1)
            {
                int t=dfs(grid,i,j);
                maxval=max(t,maxval);
            }
        }
    }
        return maxval;
    }
    int dfs(vector<vector<int>>& grid,int i,int j)
    {
        //boundary conditions
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]==0)
        {
            return 0;
        }
        grid[i][j]=0;
        return (1+dfs(grid,i+1,j)+dfs(grid,i-1,j)+dfs(grid,i,j+1)+dfs(grid,i,j-1));
        //up,down,right,left
    }
};