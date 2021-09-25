class Solution {
public:
    bool ismatch(char c2,char c1)
    {
        if(c1=='}' && c2=='{')
        {
            return true;
        }
        if(c1==']' && c2=='[')
        {
            return true;
        }
        if(c1==')' && c2=='(')
        {
            return true;
        }
        return false;
    }
    bool isValid(string s) {
      stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
                st.push(s[i]);
            }
            if(s[i]==']' || s[i]=='}' || s[i]==')')
            {
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    char t=st.top();
                    if(!ismatch(t,s[i]))
                    {
                        return false;
                    }
                    else{
                        st.pop();
                    }
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};