class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> v(n,vector<int>(n,0));
        int left=0;
        int right=n-1;
        int top=0;
        int down=n-1;
        int direction=0;
        int num=1;
        while(top<=down && left<=right)
        {
            if(direction==0)
            {
               for(int i=left;i<=right;i++)
               {
                   v[top][i]=num;
                   num++;
               }
                top++;
            }
            else if(direction==1)
            {
                for(int i=top;i<=down;i++)
                {
                    v[i][right]=num;
                    num++;
                }
                right--;
            }
            else if(direction==2)
            {
                for(int i=right;i>=left;i--)
                {
                    v[down][i]=num;
                    num++;
                }
                down--;
            }
            else if(direction==3)
            {
                for(int i=down;i>=top;i--)
                {
                    v[i][left]=num;
                    num++;
                }
                left++;
            }
            direction=(direction+1)%4;
        }
        return v;
    }
};