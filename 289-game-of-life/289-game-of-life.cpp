class Solution {
public:
    int xdir[8]={0,1,-1,0,-1,-1,1,1};
    int ydir[8]={1,0,0,-1,-1,1,-1,1};
    void gameOfLife(vector<vector<int>>& board) {
    int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int ln=0;
                for(int k=0;k<8;k++)
                {
                   int nx=i+xdir[k];
                   int ny=j+ydir[k];
                    //Now check the neighbours
                    if(nx>=0 && ny>=0 && nx<n && ny<m)
                    {
                        if(board[nx][ny]==1 || board[nx][ny]==-2)
                        {
                            ln++;
                        }
                    }
                }
                if(board[i][j]==1)
                {
                    if(ln<2 || ln>3)
                    {
                        board[i][j]=-2;
                    }
                }
                else if(board[i][j]==0)
                {
                    if(ln==3)
                    {
                        board[i][j]=3;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==-2)
                {
                    board[i][j]=0;
                }
                else if(board[i][j]==3)
                {
                    board[i][j]=1;
                }
            }
        }
        
    }
};