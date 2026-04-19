class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for(int num : st) {
            
            // Check if it's the start of a sequence
            if(st.find(num - 1) == st.end()) {
                
                int current = num;
                int count = 1;

                // Count consecutive numbers
                while(st.find(current + 1) != st.end()) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};