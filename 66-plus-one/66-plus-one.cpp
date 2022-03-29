class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    //case [9,9,9] converts to [1,0,0,0]
    for(int i=digits.size()-1;i>=0;i--)
    {
        if(digits[i]==9)
        {
            digits[i]=0;
        }
        else{
            digits[i]+=1;
            return digits;
            //[1,2,3]->[1,2,4]
        }
    }
        digits[0]=1;
        digits.push_back(0);
        return digits;
    }
};