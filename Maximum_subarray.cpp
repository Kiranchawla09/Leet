class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int loc= 0;  //local maxima
      int ans= INT_MIN;
        for (int i=0;i<nums.size();i++)
        {
            loc+=nums[i];
            ans= max(ans, loc);
            loc= max(0, loc);   // if loc<0 we need not track anymore because would be saved in ans
        }
        return ans;
    }
};