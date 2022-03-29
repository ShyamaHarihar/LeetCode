class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int n=digits.size()-1;
    if(digits[n]!=9)
    {
        digits[n]++;
        return digits;
    }
        else{
            for(int i=n;i>=0;i--)
            {
                
                if(digits[i]==9)
                {
                    digits[i]=0;
                }
                else{
                    digits[i]+=1;
                    return digits;
                }
            }
            digits[0]=1;
            digits.push_back(0);
        }
        return digits;
    }
};