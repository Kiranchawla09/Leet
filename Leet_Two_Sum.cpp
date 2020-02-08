class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>mp;
        vector <int>arr;
        for (int i=0;i< nums.size();i++){
            int complement= target- nums[i];
            map<int, int>::iterator it;
            it= mp.find(complement);
            if (it!= mp.end())
                {
                    arr.push_back(it->second);
                    arr.push_back(i);
                break;
                }
            else
            {
                mp.insert({nums[i],i});
            }
        }
        return (arr);
    }
};