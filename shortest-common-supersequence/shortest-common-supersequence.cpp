class Solution {
public:
    string shortestCommonSupersequence(string s1, string s2) {
    int n=s1.length();
        int m=s2.length();
        int t[n+1][m+1];
        string res;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
                else if(s1[i-1]==s2[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                  t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        int i=n;
        int j=m;
        while(i>0 && j>0)
        {
            if(s1[i-1]==s2[j-1])
            {
                res.push_back(s1[i-1]);
                i--;
                j--;
            }
            else{
                if(t[i-1][j]>t[i][j-1])
                {
                    res.push_back(s1[i-1]);
                    i--;
                }
                else{
                    res.push_back(s2[j-1]);
                    j--;
                }
            }
        }
        while(i>0)
        {
            res.push_back(s1[i-1]);
            i--;
        }
        while(j>0)
        {
            res.push_back(s2[j-1]);
            j--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};