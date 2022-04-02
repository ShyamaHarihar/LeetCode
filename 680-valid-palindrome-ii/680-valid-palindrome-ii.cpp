class Solution {
public:
    bool validPalindrome(string s) {
    //two pointers 
        //recursive approach
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
                //remove i or j and check for example in abca mismatch at i=1 and j=2 so remove either and it becomes aba or aca which is a palindrome and all calls will return true one false will break the chain
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string &s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};