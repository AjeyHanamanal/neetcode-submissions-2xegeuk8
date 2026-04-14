class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Step 1: Count frequency
        for(int num : nums) {
            freq[num]++;
        }

        // Step 2: Move into vector of pairs
        vector<pair<int, int>> vec;
        for(auto it : freq) {
            vec.push_back({it.second, it.first});
        }

        // Step 3: Sort by frequency (descending)
        sort(vec.rbegin(), vec.rend());

        // Step 4: Take top k elements
        vector<int> result;
        for(int i = 0; i < k; i++) {
            result.push_back(vec[i].second);
        }

        return result;
    }
};