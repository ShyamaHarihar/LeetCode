class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int s=0;
    int n=arr.size();
    int res=0;
    int a=0;
    int e=0;
    double avg=0;
    while(e<n)
    {
        a+=arr[e];
        if(e-s+1<k)
        {
            e++;//we need size k for the sliding window
        }
        else if(e-s+1==k)
        {
           avg=(double)(a/k);
           if(avg>=threshold)
           {
               res++;//checking the condition step
           }
           a-=arr[s];//sliding step
           s++;
           e++;
        }
    }
        return res;
    }
};