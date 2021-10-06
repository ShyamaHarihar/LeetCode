class Solution {
public:
    int change(int n, vector<int>& S) {
        int m=S.size();
    vector<vector<long long int>> t(m+1,vector<long long int>(n+1));
      for(int i=0;i<m+1;i++)
      {
          t[i][0]=1;
      }
      for(int j=1;j<n+1;j++)
      {
          t[0][j]=0;
      }
      for(int i=1;i<m+1;i++)
      {
          for(int j=1;j<n+1;j++)
          {
              if(S[i-1]<=j)
              {
                  t[i][j]=t[i-1][j]+t[i][j-S[i-1]];
              }
              else
              {
                  t[i][j]=t[i-1][j];
              }
          }
      }
      return t[m][n];    
    }
};