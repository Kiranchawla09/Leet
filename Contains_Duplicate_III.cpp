class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        map<long long, int> mp;
    	for (int i=0;i<nums.size();++i)
        {
            auto itr= mp.lower_bound((long long)nums[i]- (long long)t);
            while (itr!= mp.end() && i-itr->second > k)   // if greater than k
            {
                itr = mp.erase(itr);
            }
            if (itr!= mp.end() && abs (nums[i]- itr->first) <= t && abs(i-itr->second <= k))
            {
                return true;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};