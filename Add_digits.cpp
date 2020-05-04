class Solution {
public:
    int addDigits(int num) {
        int a= sum(num);
        if (a>=10)
        {
            return addDigits(a);
        }
        else
            return a;
    }
    int sum (int num)
    {
        int s=0;
        while (num)
        {
            s+=num%10;
            num=num/10;
        }
        return s;
    }
};