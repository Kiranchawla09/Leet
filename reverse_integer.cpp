class Solution {
public:
    int reverse(int x) {
        unsigned long int reversed_number=0;
        int n= abs ((long long int)x);
        while (n!=0)
        {
            int remainder = n%10;
            reversed_number= reversed_number*10+remainder;
            n=n/10;            
        }
        int r = pow(2,31);
        if(reversed_number > r)
            reversed_number = 0;
        if(x < 0)
            reversed_number = (-1 * reversed_number);
        return reversed_number;
    }
};