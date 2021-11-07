class Solution {
public:
    string multiply(string num1, string num2) {
       string res;//result string 
        int n=num1.size(),m=num2.size();
        //the resultant number won't be longer than n+m
        vector<int> val(n+m,0);
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                int m=(num1[i]-'0')*(num2[j]-'0');
                int s=m+val[i+j+1];//prev carry is added
                val[i+j+1]=s%10;
                val[i+j]+=s/10;
            }
        }
        //zeroes have to be ignored
        for(auto &a:val)
        {
            if(a || res.size())
                res.append(to_string(a));
        }
        if(res.size()==0)
        {
            return "0";
        }
        return res;
    }
};