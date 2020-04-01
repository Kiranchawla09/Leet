Method 1:

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int count=0;
        int sum=0;
        mp[0]++;
        for (int i=0;i<n;i++)
        {
            sum+= nums[i];
            count+= mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};

Method 2:

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        int count=0;
        int sum;
        for (int i=0;i<n;i++)
        {
            sum=0;
            for (int j=i;j<n;j++)
            {
                sum+= nums[j];
                if (sum==k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};