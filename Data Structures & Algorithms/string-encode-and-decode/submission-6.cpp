class Solution {
public:

    // Encode: vector<string> → string
    string encode(vector<string>& strs) {
        string res = "";

        for(string s : strs) {
            res += to_string(s.size()) + "#" + s;
        }

        return res;
    }

    // Decode: string → vector<string>
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;

        while(i < s.size()) {

            int j = i;

            // Find '#'
            while(s[j] != '#') {
                j++;
            }

            // Get length
            int len = stoi(s.substr(i, j - i));

            // Extract string of that length
            string word = s.substr(j + 1, len);

            res.push_back(word);

            // Move pointer to next word
            i = j + 1 + len;
        }

        return res;
    }
};