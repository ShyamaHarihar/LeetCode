class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> res;
        int m=matrix.size();
        int n=matrix[0].size();
        
        int top=0;
        int down=m-1;
        int left=0;
        int right=n-1;
        int direction=0;
        while(top<=down && left<=right)
        {
            if(direction==0)
            {
                //move from left to right 
                for(int i=left;i<=right;i++)
                {
                    res.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(direction==1)
            {
                //move from top to bottom
                for(int i=top;i<=down;i++)
                {
                    res.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(direction==2)
            {
                //move from right to left
                for(int i=right;i>=left;i--)
                {
                    res.push_back(matrix[down][i]);
                }
                down--;
            }
            else if(direction==3)
            {
                //move from bottom to top
                for(int i=down;i>=top;i--)
                {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
            direction=(direction+1)%4;
        }
        return res;
    }
};