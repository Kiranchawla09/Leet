class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int j=1;
        int n= nums.size();
        int ans=0;
        while (i<n && j<n)
        {
            if (nums[i]<target && nums[j]>=target)
            {
                ans= j;
                cout<< j;
                break;
            }
            
            i++;
            j++;
            
        }
        if (ans==0 && nums[0]>=target)
        {
            ans = 0;
        }
        else if (ans==0 && j==nums.size() && nums[0]<target)
        {
            ans= nums.size();
        }
        return ans;
    }
};