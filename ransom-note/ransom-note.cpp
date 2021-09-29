class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransom[26]={0};
        int mag[26]={0};
        for(int i=0;i<ransomNote.length();i++)
        {
            ransom[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++)
        {
            mag[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(ransom[i]!=0 && ransom[i]>mag[i])
            {
               return false;    
            }
        }
        return true;
    }
};