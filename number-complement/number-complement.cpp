class Solution {
public:
    int findComplement(int num) {
    string s="";
        while(num>0)
        {
            if(num%2==0)
            {
                s+="1";
            }
            else{
                s+="0";
            }
            num=num/2;
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            num+=pow(2,i)*(s[i]-'0');
        }
        return num;
    }
};