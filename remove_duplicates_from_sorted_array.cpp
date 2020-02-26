class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> mp;
        for (int i=0;i<nums.size();i++)
        {
            mp.insert(nums[i]);
        }
        nums.clear();
        set <int> :: iterator itr;
        for (itr= mp.begin();itr!=mp.end();itr++)
        {
            nums.push_back(*itr);
        }
        
        return mp.size();
    }
};