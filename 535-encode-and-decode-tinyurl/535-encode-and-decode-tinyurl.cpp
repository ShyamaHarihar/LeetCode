class Solution {
public:
    int n=0;
    unordered_map<string,string> mp;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        n++;
        string ans="http://tinyurl.com/";
        ans+=to_string(n);
        mp[ans]=longUrl;
        return ans;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
    return mp[shortUrl];    
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));