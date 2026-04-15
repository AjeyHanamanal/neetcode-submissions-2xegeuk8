class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0;i<(int)nums.size()-1;i++)
        {
            if(nums[i]==i)
            {
                return true;
            }
        }
        return false;
    }
};