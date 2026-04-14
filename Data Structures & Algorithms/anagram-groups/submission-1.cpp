class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;
        
        for(string s : strs) {
            string key = s;          // Copy original string
            sort(key.begin(), key.end());  // Sort to create anagram key
            mp[key].push_back(s);    // Store original string
        }
        
        vector<vector<string>> result;
        
        for(auto &pair : mp) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};