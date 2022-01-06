class Solution {
public:
    //VARIABLE SIZE SLIDING WINDOW
    bool isvalid(vector<int> v)
    {
       if(v[0]>=1 && v[1]>=1 && v[2]>=1)
       {
           return true;
       }
        return false;
    }
    int numberOfSubstrings(string s) {
        int st=0;
        int e=0;
        int n=s.length();
        int res=0;
        vector<int> counts(3,0);
        while(e<n)
        {
            counts[s[e]-'a']++;
            if(!isvalid(counts))
            {
               e++;//increase the length of the window 
            }
            else{
                while(isvalid(counts))
                {
                    res+=(n-e);
                    //cout<<n<<e<<" "<<(n-e)<<endl;
                    counts[s[st]-'a']--;
                    st++;
                }
                e++;
            }
        }
    return res;   
    }
};