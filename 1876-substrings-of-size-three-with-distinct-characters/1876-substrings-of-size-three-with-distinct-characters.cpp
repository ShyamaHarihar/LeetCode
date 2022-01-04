class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0;
        int j=0;
        int res=0;
        int n=s.length();
        while(j<n)
        {
            //sliding window
            if(j-i+1<3)
            {
                j++;
            }
            else if(j-i+1==3)
            {
                char a=s[i];
                char b=s[i+1];
                char c=s[j];
                if(a!=b && b!=c && c!=a)
                {
                    res++;
                }
                i++;
                j++;
            }
        }
        return res;
        
    
    }
};