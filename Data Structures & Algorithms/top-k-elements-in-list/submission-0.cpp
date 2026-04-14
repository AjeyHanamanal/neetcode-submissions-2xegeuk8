class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;
        
        // Step 1: Count frequencies
        for(int num : nums) {
            freq[num]++;
        }
        
        // Min heap (frequency, number)
        priority_queue<
            pair<int,int>, 
            vector<pair<int,int>>, 
            greater<pair<int,int>>
        > minHeap;
        
        // Step 2: Maintain top k elements in heap
        for(auto &p : freq) {
            minHeap.push({p.second, p.first});
            
            if(minHeap.size() > k) {
                minHeap.pop();
            }
        }
        
        // Step 3: Extract results
        vector<int> result;
        
        while(!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        
        return result;
    }
};