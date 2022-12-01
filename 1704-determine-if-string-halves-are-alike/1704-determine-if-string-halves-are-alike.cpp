class Solution {
public:
    bool halvesAreAlike(string s) {
    int n=s.length();
    int res=0;
        for(int i=0;i<n;i++)
        {
            s[i]=tolower(s[i]);
            if(i<s.size()/2)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                    res++;
                }
            }
            else{
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                    res--;
                }
            }
        }
        return (res==0);
    }
};