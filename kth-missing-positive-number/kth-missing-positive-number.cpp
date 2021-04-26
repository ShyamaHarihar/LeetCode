class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    int n=arr.size();
        if(n==0)
        {
            return k;
        }
        vector<bool> precompute(2001,false);
        for(int i=0;i<n;i++)
        {
            precompute[arr[i]]=true;
        }
        int c=0;
        int res;
        for(int i=1;i<=2000;i++)
        {
            if(precompute[i]==false)
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