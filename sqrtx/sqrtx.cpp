class Solution {
public:
    int mySqrt(int x) {
    if(x<=1)
    {
        return x;
    }
        long long start=0;
        long long end=x;
        long long ans;
        long long a;
        long long mid=0;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(mid*mid==x)
            {
                ans=mid;
                return ans;
            }
            else if(mid*mid<x)
            {
                start=mid+1;
                ans=mid;
            }
            else {
                end=mid-1;
            }
        }
        return ans;
    }
};