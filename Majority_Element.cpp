class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int, int> counter;
        for (int i=0;i<nums.size();i++)
        {
            counter[nums[i]]++;
        }
       int max_count = INT_MIN;
        int result=0;
        for (auto itr : counter)
        {
            if (itr.second > max_count)
            {
                max_count = itr.second;
                result=itr.first ;
            }
        }
        return result;
    }
};