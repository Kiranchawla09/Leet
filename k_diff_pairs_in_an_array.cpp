class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        if (k<0)
            return 0;
        for (int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int res=0;
        if (k!=0)
        {
            for (auto itr:mp)
            {
                if (mp.find(itr.first+k)!=mp.end())
                    res++;
            }
        }
        else 
        {
            for (auto itr:mp)
            {
                if (itr.second>1)
                    res++;
            }
        }
        return res;
    }
};