class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int arr[],i;
        for(int i=0;i<nums.length();i++)
        {
            arr[i]++;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<nums.length();i++)
        {
            if(i<k)
            {
                return i;
            }
        }
    }
};
