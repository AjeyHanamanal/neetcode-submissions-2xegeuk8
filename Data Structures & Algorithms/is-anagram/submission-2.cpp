class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map<char, int> mpp1;
        unordered_map<char, int> mpp2;
        

        for(int i=0;i<s.length();i++)
        {
            mpp1[s[i]]++;
        }

        for(int j=0;j<t.length();j++)
        {
            mpp2[t[j]]++;
        }
        
            return mpp1==mpp2;
        
    }
};