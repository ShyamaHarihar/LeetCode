class Solution {
public:
    bool isPowerOfThree(int n) {
    if(n<=0)
        return false;
     if(n==1)
         return true;
        int num=n;
        while(num!=0)
        {
            if(num%3!=0)
                return false;
            num=num/3;
            if(num==1)
            {
                return true;
            }
        }
        return true;
    }
};