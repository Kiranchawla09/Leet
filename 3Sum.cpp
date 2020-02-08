class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort (nums.begin(),nums.end());
        int len= nums.size();
        vector <vector<int>>result;
        int target= 0;
        for (int i=0;i<len-1;i++) 
        {
            if (i>0 && nums[i]==nums[i-1]) 
                continue; //breaking this iteration only
            int left= i+1;
            int right= len-1;
            while (left<right)
            {
                int sum= nums[i]+nums[left]+nums[right];
                if (sum<target)
                {
                    left++;
                }
                else if (sum>target)
                    right--;
                else
                {
                    vector <int> check ={nums[i],nums[left],nums[right]};                    {
                    result.push_back(check);
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left-1]) left++;  // because 0-(something) will reamin same if next element is also same.
                    while (left < right && nums[right] == nums[right+1]) right--;  
                }            
        }
            }
        }
        return result;
    }
};