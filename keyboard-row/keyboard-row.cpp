class Solution {
public:
    vector<string> findWords(vector<string>& words) {
    //First we will assign row numbers to the set of alphabets in the keyboard
    //For this we define a hashtable 
    unordered_map<char,int> map;
    vector<string> ou;
        for(char c:"qwertyuiopQWERTYUIOP")
        {
            map[c]=0;
        }
        for(char c:"asdfghjklASDFGHJKL")
        {
            map[c]=1;
        }
        for(char c:"zxcvbnmZXCVBNM")
        {
            map[c]=2;
        }
        bool flag;
        //Now iterate the vector word by word 
        //check for the row number of the first alphabet in the word 
        //traverse remaining letters in the word and break out if they belong to different row 
        //if the above did not happen the word can be typed with a single row and therefore           //add it to result
        for(string s:words)
        {
            int p=map[s[0]];
            for(char c:s)
            {
                flag=true;
                if(map[c]!=p)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                ou.push_back(s);
            }
        }
        return ou;
    }
};