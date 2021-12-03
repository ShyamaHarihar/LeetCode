class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
    for(int i=num.size()-1;i>=0 && k>0;i--)
    {
       num[i]=num[i]+k;//how we add numbers from the end
       k=num[i]/10;//the carry part
       num[i]=num[i]%10;//the remainder part
    }
        while(k>0)
        {
            num.insert(num.begin(),k%10);
            k=k/10;
        }
        return num;
        
    }
};