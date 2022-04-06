class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
    long res=0;
        unordered_map<int,long> c;
        for(int i=0;i<arr.size();i++)
        {
            c[arr[i]]++;
        }
        //Hashmap is made now we we need to iterate over the keys in the hashmap
        for(auto it1:c)
        {
            for(auto it2:c)
            {
               int i=it1.first;
                int j=it2.first;
                int k=target-i-j;
                if(!c.count(k)) continue;
                //Suppose target is 3 and we found [1,1,1]
                if(i==j && j==k)
                {
                    res+=c[i]*(c[i]-1)*(c[i]-2)/6;
                }
                //Suppose 2 elements are repeating
                else if(i==j && j!=k)
                {
                    res+=c[k]*c[i]*(c[i]-1)/2;
                }
                //none is repeating then check the condition given
                else if(i<j && j<k)
                {
                    res+=c[i]*c[j]*c[k];
                }
            }
        }
        res=res%int(1000000007);
        return res;
    }
};