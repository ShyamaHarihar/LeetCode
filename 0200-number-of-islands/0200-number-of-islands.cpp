class Solution {
public:
    void bfs(int row,int col,vector<vector<int>> &visited,vector<vector<char>>& grid)
    {
        visited[row][col]=1;
        queue<pair<int,int>> q;
        q.push({row,col});
        int n=grid.size();
        int m=grid[0].size();
        
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            vector<int> dir_row={-1,0,1,0};
            vector<int> dir_col={0,1,0,-1};
            for(int i=0;i<4;i++){
                    int nr=row+dir_row[i];
                    int nc=col+dir_col[i];
                    if(nr>=0 && nr<n && nc>=0 && nc<m && !visited[nr][nc] && grid[nr][nc]=='1')
                    {
                        visited[nr][nc]=1;
                        q.push({nr,nc});
                    }
                
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visited[i][j] && grid[i][j]=='1')
                {
                    count++;
                    bfs(i,j,visited,grid);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<visited[i][j]<<" ";
            }
            cout<<endl;
        }
        return count;
        
    }
};