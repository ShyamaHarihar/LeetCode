class Solution {
public:
    bool match(int L,string &haystack,string &needle,int lp)
    {
        for(int i=0;i<lp;i++)
        {
            if(haystack[L+i]!=needle[i])
            {
                return false;
            }
        }
        return true;
    }
    int strStr(string haystack, string needle) {
    int lt=haystack.size();
    int lp=needle.size();
    for(int L=0,R=lp-1;R<lt;L++,R++)
    {
        if(match(L,haystack,needle,lp))
        {
            return L;
        }
    }
        return -1;
    }
};