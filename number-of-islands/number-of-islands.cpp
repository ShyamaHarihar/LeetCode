class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int count=0;
        //empty input
        if(r==0)
        {
            return 0;
        }
        int c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j,r,c);
                    count++;
                }
            }
        }
    return count;    
    }
    void dfs(vector<vector<char>>& grid,int i,int j,int r,int c)
    {
        if(i<0 or j<0 or i>=r or j>=c or grid[i][j]!='1')
        {
            return;
        }
        //mark as visited
        grid[i][j]='2';
        dfs(grid,i+1,j,r,c);//down
        dfs(grid,i-1,j,r,c);//up
        dfs(grid,i,j-1,r,c);
        dfs(grid,i,j+1,r,c);
    }
};