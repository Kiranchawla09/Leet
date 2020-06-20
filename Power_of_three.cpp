class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<=0)
            return false;
        int i=n;
        while (i>1)
        {
            if (i%3!=0)
                return false;
             i=i/3;
        }
        return true;;
    }
};