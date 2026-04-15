class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<(int)nums.size();i++)
        {
            for(int j=0;j<(int)nums.size();i++)
            {
              if(nums[i]+nums[j]==target && i!=j)
              {
                retun i,i+1;
              }
            }
        }
    }
};
