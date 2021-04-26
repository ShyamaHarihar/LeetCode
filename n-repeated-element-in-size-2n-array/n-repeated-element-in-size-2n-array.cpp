class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int N=A.size()/2;
        unordered_map<int,int> map;
        int res;
        for(int i=0;i<A.size();i++)
        {
            map[A[i]]++;
        }
        
        for(auto c:map)
        {
            if(c.second==N)
            {
                res=c.first;
            }
        }
        return res;
    }
};