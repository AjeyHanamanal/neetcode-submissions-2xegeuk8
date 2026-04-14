class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;

        for(string s : strs)
        {
            string key = s;              // copy the word
            sort(key.begin(), key.end()); // sort letters
            
            mp[key].push_back(s);        // store original word
        }

        vector<vector<string>> result;

        for(auto it : mp)
        {
            result.push_back(it.second);
        }

        return result;
    }
};