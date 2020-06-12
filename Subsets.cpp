class Solution {
public:
    void subset(vector<int>&nums, int j, vector<vector<int>>&result, vector<int>&sub)
    {
        result.push_back(sub);
        for (int i=j; i< nums.size();i++)
        {
            sub.push_back(nums[i]);
            subset (nums, i+1,result,sub);
            sub.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector<int>> result;
        vector <int> sub;
        subset(nums, 0, result, sub);
        return result;
    }
};