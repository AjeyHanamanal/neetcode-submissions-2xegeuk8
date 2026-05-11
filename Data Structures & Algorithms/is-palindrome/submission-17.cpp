
class Solution {
public:
    bool isPalindrome(string s) {
        
        string clean="";

        

        string rev=clean;
        reverse(rev.begin(),rev.end());

        return rev==clean;
    }
};