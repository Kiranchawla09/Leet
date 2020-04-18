Method 1: (Recursion)

class Solution {
public:
    int minSteps(int n) {
        if (n==2)
            return 2;
       int ans=0;
        for (int i=n-1;i>=2;i--)
        {
            if(n%i==0)           //number is not prime or even
            {
               ans= (minSteps(i)+n/i);
                break;
            }
            else                 //number is prime
               ans= n;
        }        
      return ans;  
    } 
};

Method 2: (Dynamic Programming)

class Solution {
public:
    int minSteps(int n) {
        if(n==1)
            return 0;
        vector<int> array(n+1,0);
        array[2]= 2;
        for (int i=3;i<=n;i++)
        {
            for (int j=i-1;j>=2;j--)
            {
                if (i%j==0)
                {
                    array[i]=array[j]+i/j;
                    break;
                }
                else
                {
                     array[i]=i;
                }
            }
        }
        return array[n];
    } 
};