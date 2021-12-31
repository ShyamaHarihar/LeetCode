class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //the idea is to sort the characters in the string and use it as the key in the hash map
    //base case
        vector<vector<string>> ans;
    if(strs.size()<=1)
    {
        ans.push_back(strs);
        return ans;
    }
    map<string,vector<string>> mp;//hash map for storing key and the vector of strings
    for(int i=0;i<strs.size();i++)
    {
        string a=strs[i];
        sort(a.begin(),a.end());
        mp[a].push_back(strs[i]);
    }
        for(auto it:mp)
        {
            ans.push_back(it.second);//push back the vector of strings only key not needed
        }
        return ans;
    }
};