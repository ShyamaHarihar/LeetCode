class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    int n=arr.size();
    if(n==0)
    {
        //that means no elements so kth missing number is k LOL
        return k;
    }
    vector<bool> p(2005,false);//this is because arr.length is 1000 max and k is also 1000 max
    for(int i=0;i<n;i++)
    {
       p[arr[i]]=true; 
    }
    int c=0;
    int res=0;
    for(int i=1;i<=2005;i++)
    {
        if(p[i]==false)
        {
            c++;
            if(c==k)
            {
                res=i;
                break;
            }
        }
    }
    return res;
    }
};