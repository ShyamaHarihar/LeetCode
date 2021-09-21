class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    vector<vector<int>> res(r,vector<int>(c));//r rows and c columns
    int m=mat[0].size();
    int n=mat.size();
    if(r*c!=m*n)
    {
        return mat;
    }
    for(int i=0;i<m*n;i++)
    {
        res[i/c][i%c]=mat[i/m][i%m];
    }
    return res;    
    }
};