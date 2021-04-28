class Solution {
public:
    bool isPowerOfFour(int n) {
    if(n==1)
    {
        return true;
    }
        if(n<=0 || (n==1 || n==2|| n==3))
        {
            return false;
        }
        int num=n;
        while(num!=0)
        {
            if(num%4!=0)
            {
                return false;
            }
            num=num/4;
            if(num==1)
            {
                return true;
            }
        }
        return true;
    }
};