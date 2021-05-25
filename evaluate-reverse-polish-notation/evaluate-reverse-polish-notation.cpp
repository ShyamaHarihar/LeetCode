class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int> st;
        for(auto& it:tokens)
        {
            if(it== "+" || it=="-" || it=="/" || it=="*")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(it=="+")
                {
                    st.push(a+b);
                }
                if(it=="-")
                {
                    st.push(b-a);
                }
                if(it=="*")
                {
                    st.push(a*b);
                }
                if(it=="/")
                {
                    st.push(b/a);
                }
            }
            else{
                st.push(stoi(it));
            }
        }
        return st.top();
    }
};