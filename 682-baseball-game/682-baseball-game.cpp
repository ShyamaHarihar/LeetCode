class Solution {
public:
    int calPoints(vector<string>& ops) {
    stack<int> st;
        for(auto c:ops)
        {
            if(c=="C")
            {
                st.pop();
            }
            else if(c=="D")
            {
                int d=st.top();
                st.push(d*2);
            }
            else if(c=="+")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c=a+b;
                st.push(b);
                st.push(a);
                st.push(c);
            }
            else{
                st.push(stoi(c));
            }
        }
        int res=0;
        while(!st.empty())
        {
           res+=st.top();
           st.pop();
        }
        return res;
    }
};