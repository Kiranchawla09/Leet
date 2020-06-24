class Solution {
public:
    map <int,int> mp;
    bool isHappy(int n) {
        int sum=0;
        int key= n;
         while (n)
         {
             int temp=n%10;
             sum+=temp*temp;
             n=n/10;
         }
        if (sum==1)
        {
            return true;
        }
        if (mp.find(sum)!= mp.end())  //to detemine the cycles
        {
            return false;
        }
        mp[key]=sum;
        return isHappy(sum);
    }
};