class Solution {
public:
    int minAddToMakeValid(string s) {
    stack<char> st;
        for(auto& it:s)
        {
            if(it=='(')
            {
                st.push(it);
            }
            if(it==')')
            {
                if(!st.empty())
                {
                    char s=st.top();
                    if(s=='(')
                    {
                        st.pop();
                    }
                    else{
                        st.push(it);
                    }
                    
                }
                else{
                    st.push(it);
                }
            }
        }
        int c=0;
        while(!st.empty())
        {
            c++;
            st.pop();
        }
        return c;
    }
};