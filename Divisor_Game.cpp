Solution 1:

class Solution {
public:
    bool divisorGame(int N) {
        bool returnval= false;
        int i=0;
        while (N>1)
        {
            for (i=1;i<N;i++)
            {
                if (N%i==0)
                {
                    break;
                }
            } 
        
        if (N%i==0)
        {
            N-=i;
            returnval= !returnval;
        }
            else
                break;   
        }
        return returnval;
    }
};

Solution 2:

class Solution {
public: 
    bool divisorGame(int N) {
        bool dp[N+1];
        
        for (int i=0;i<=N;i++)
        {
            dp[i]= false;
        }
        dp[0] = false;
        dp[1] = false;
        for(int i=2; i <= N; i++){
            for(int j=1; j < i; j++){
                if(i % j == 0){
                    if(dp[i-j] == false){
                        dp[i] = true;
                        break;
                    }
                }
            }
        }
        return dp[N];
    }
};