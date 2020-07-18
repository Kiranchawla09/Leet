class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        
        backtrack(nums, 0, result);
        
        return result;
    }
    void backtrack (vector<int> & nums, int index, vector <vector<int>> &result)
    {
        if (index==nums.size())
        {
            result.push_back(nums);
        }
         for (int i=index;i<nums.size();i++)
        {
             swap (nums[index],nums[i]);
             backtrack(nums, index+1, result);
             swap (nums[i],nums[index]);
        }
    }
};  