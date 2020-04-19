class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        if (n==1)
            return 1.0f;
        if (n==2)
            return 0.5f;
         vector<double>dp(n,0);
         dp[0]=0.0f;
         dp[1]=1.0f;
         dp[2]=0.5f;
        for (int i=3;i<n;i++)
        {
            float s= 1.0/float(n);
            float m= float(n-2)/float(n);
            float a= float(dp[i-1]);
             dp[i]=float(s+m*a);
        }
         return dp[n-1]; 
    }
};