class Solution {
public:
    int longestValidParentheses(string s) {
    stack<int> st;
        st.push(-1);
        int result=0;//final ans;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
           if(s[i]=='(')
           {
               st.push(i);//opening bracket should be pushed into the stack
           }
            else{
                st.pop();
            if(!st.empty())
            {
                result=max(result,i-st.top());
            }
                else{
                    st.push(i);
                }
            }
        }
        return result;
    }
};