class Solution {
public:
    bool isPalindrome(string s) {
        
        string clean = "";

        // Step 1: Keep only alphanumeric & lowercase
        for(char c : s) {
            if(isalnum(c)) {
                clean += tolower(c);
            }
        }

        // Step 2: Reverse the string
        string rev = clean;
        reverse(rev.begin(), rev.end());

        // Step 3: Compare
        return clean == rev;
    }
};