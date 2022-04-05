class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
    //Start from bottom left since it is sorted 
    int r=grid.size()-1;
    int c=grid[0].size();
        int i=r;
        int j=0;
        int res=0;
        while(i>=0 && j<c)
        {
            if(grid[i][j]<0)
            {
                res+=c-j;
                i--;
            }
            else{
                j++;
            }
        }
        return res;
        
    }
};