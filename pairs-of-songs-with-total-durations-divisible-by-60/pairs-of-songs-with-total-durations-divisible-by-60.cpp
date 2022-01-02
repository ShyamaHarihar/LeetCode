class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
    int arr[60]={0};
        int ans=0;
        for(int i=0;i<time.size();i++)
        {
            arr[time[i]%60]++;
        }
        for(int i=0;i<=30;i++)
        {
            if(i==0 || i==30)
            {
                int a=arr[i];
                ans+=a*(a-1)/2;
            }
            else{
                ans+=arr[i]*arr[60-i];
            }
        }
        return ans;
    }
};