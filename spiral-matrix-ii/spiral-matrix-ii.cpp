class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> arr(n, vector<int>(n,0));
    int top=0;
    int down=n-1;
    int left=0;
    int right=n-1;
    int direction=0;
    int val=1;
        while(top<=down && left<=right)
        {
            if(direction==0)
            {
                for(int i=left;i<=right;i++)
                {
                    arr[top][i]=val;
                    val++;
                }
                top++;
            }
            else if(direction==1)
            {
                for(int i=top;i<=down;i++)
                {
                    arr[i][right]=val;
                    val++;
                }
                right--;
            }
            else if(direction==2)
            {
                for(int i=right;i>=left;i--)
                {
                    arr[down][i]=val;
                    val++;
                }
                down--;
            }
            else if(direction==3)
            {
                for(int i=down;i>=top;i--)
                {
                    arr[i][left]=val;
                    val++;
                }
                left++;
            }
            direction=(direction+1)%4;
        }
        return arr;
    }
};