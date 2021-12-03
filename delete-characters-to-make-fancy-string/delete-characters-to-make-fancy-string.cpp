class Solution {
public:
    string makeFancyString(string s) {
        int n=s.length();
        if(n<=2)
        {
            return s;
        }
        char prevprev=s[0];
        char prev=s[1];
        char curr;
        string ans="";
        ans+=s[0];
        ans+=s[1];
        int i=2;
        while(i<n)
        {
            if(prevprev==s[i] && prev==prevprev)
            {
                i++;//skip
            }
            else{
                char c=s[i];
                ans+=s[i];
                i++;
                prevprev=prev;
                prev=c;
            }
        }
        return ans;
    
    }
};