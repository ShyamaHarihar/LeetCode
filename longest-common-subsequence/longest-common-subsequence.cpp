class Solution {   
public:
    int t[1000+1][1000+1];
    int helper(string& text1,string& text2,int m,int n)
    {
        
        if(n==0 || m==0)
        {
            return 0;
        }
        if(t[m][n]!=-1)
        {
            return t[m][n];
        }
        if(text1[m-1]==text2[n-1])
        {
            return t[m][n]=1+helper(text1,text2,m-1,n-1);
        }
        else{
            return t[m][n]=max(helper(text1,text2,m,n-1),
                        helper(text1,text2,m-1,n));
        }
        return t[m][n];
    }
    int longestCommonSubsequence(string text1, string text2) {
       int m=text1.length();
       int n=text2.length();
       memset(t,-1,sizeof(t));
       return helper(text1,text2,m,n); 
    }
};