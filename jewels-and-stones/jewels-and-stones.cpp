class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    unordered_set <char> j;
        for(char c:jewels)
        {
            j.insert(c);
        }
        int count=0;
        for(int i=0;i<stones.length();i++)
        {
            if(j.find(stones[i])!=j.end())
            {
                count++;
            }
        }
        return count;
    }
};