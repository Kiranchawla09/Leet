class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) { 
        int i=0;
        unordered_map<int,int>mp;
        
        for (int i=0;i<nums.size();i++)
        {
            int val= nums[i];
            
            if (mp.find(val)==mp.end())
                mp[val]=i;
            
            else if(i-mp[val]<=k)
                    return true;
            
            else
                mp[val]=i;
        }
        return false;
    }
};