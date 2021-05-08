class Solution {
public:
    bool isSubsequence(string s, string t) {
    if(s.length()==0)
    {
        return true;
    }
        if(t.length()==0)
        {
            return false;
        }
        if(s[0]==t[0])
        {
            return isSubsequence(s.substr(1),t.substr(1));
        }
        return isSubsequence(s,t.substr(1));
    }
};