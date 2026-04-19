class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int longest = 0;

        for(int i = 0; i < nums.size(); i++) {
            int current = nums[i];
            int count = 1;

            // Keep checking next consecutive numbers
            while(true) {
                bool found = false;

                for(int j = 0; j < nums.size(); j++) {
                    if(nums[j] == current + 1) {
                        current = nums[j];
                        count++;
                        found = true;
                        break;
                    }
                }

                if(!found) break;
            }

            longest = max(longest, count);
        }

        return longest;
    }
};