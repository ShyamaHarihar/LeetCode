class Solution {
public:
    string addStrings(string num1, string num2) {
    string res="";
        int i=num1.length()-1;
        int j=num2.length()-1;
        int a=0;
        int b=0;
        int carry=0;
        while(i>=0 || j>=0 || carry !=0)
        {
            if(i>=0)
            {
                a=num1[i--]-48;
            }
            if(j>=0)
            {
                b=num2[j--]-48;
            }
            int sum=a+b+carry;
            res=res+to_string(sum%10);
            carry=sum/10;
            a=0,b=0;
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};