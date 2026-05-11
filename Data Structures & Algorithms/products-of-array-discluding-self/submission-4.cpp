class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            int product = 1;

            for(int j = i+1; j < n; j++) {
                
                    product *= nums[j];
                
            }

            ans.push_back(product);
        }

        return ans;
    }
};