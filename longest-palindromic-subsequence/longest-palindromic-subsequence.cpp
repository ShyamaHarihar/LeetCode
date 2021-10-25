class Solution {
public:
    int t[1002][1002];
    int longestPalindromeSubseq(string s) {
    memset(t,-1,sizeof(t));
    string b=s;
    int x=s.length();
    int y=x;
    reverse(b.begin(),b.end());
    return lcs(s,b,x,y);
    }
    int lcs(string &X,string &Y,int x,int y)
    {
        if(x==0 || y==0)
        {
            return 0;
        }
        if(t[x][y]!=-1)
        {
            return t[x][y];
        }
        if(X[x-1]==Y[y-1])
        {
            return t[x][y]=1+lcs(X,Y,x-1,y-1);
        }
        else{
            return t[x][y]=max(lcs(X,Y,x-1,y),lcs(X,Y,x,y-1));
        }
        return t[x][y];
    }
};