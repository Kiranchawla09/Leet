class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {        
        unordered_map<int,int> mp;
        vector<int> result;
        vector <int> ans;
        for (int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for (auto itr: mp)
            result.push_back(itr.second);
        make_heap(result.begin(),result.end());
        for (int i=0;i<k;i++)
        {
            int temp= result.front();
            for (auto itr: mp)
            {
                if (itr.second==temp)
                {
                    ans.push_back(itr.first);
                    mp.erase(itr.first);
                    break;
                }
            }
            pop_heap(result.begin(),result.end());
            result.pop_back();
        }
        return ans;
    }
};