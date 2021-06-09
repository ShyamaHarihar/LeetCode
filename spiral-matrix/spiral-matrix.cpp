class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> res;
        int top=0;
        int down=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        int direction=0;
        while(top<=down && left<=right)
        {
           if(direction==0)
           {
               for(int i=left;i<=right;i++)
               {
                   res.push_back(matrix[top][i]);
               }
               top++;
           }
           else if(direction==1)
           {
               for(int i=top;i<=down;i++)
               {
                   res.push_back(matrix[i][right]);
               }
               right--;
           }
            else if(direction==2)
            {
                for(int i=right;i>=left;i--)
                {
                    res.push_back(matrix[down][i]);
                }
                down--;
            }
            else if(direction==3)
            {
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