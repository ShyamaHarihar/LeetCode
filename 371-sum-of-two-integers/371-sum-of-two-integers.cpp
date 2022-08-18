class Solution {
public:
    int getSum(int a, int b) {
    //Here we need to xor of a and b and the carry bit will be a&b<<1   
        int sum;
        while(b!=0)
        {
            
            sum=a^b;
            b=(unsigned int)(a & b)<<1;
            a=sum;
        }
        return a;
    }
        
};