class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while (n)
        {
            n&= (n-1); // delete one 1 from n      
            ans++;
        }
        return ans;
    }
};