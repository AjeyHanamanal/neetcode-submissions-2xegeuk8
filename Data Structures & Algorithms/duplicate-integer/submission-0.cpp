class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int arr,count;
        for(int i=0;i<nums.size-1<i++)
        {
            if(arr[i]==i)
            {
                count++;
            }
        }
        if(count>1)
        return true;
        else 
        false;
    }
};