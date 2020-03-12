class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();
        if (digits[n-1]!=9)
        {
            digits[n-1]+= 1;
        }
        else
        {
        int carry=1;
            for (int i= n-1; i>=0;i--)
            {
                if (digits[i]==9 && carry==1)
                {
                    digits[i]=0;
                }
               else if (digits[i]!=9 && carry==1) 
                {
                    digits[i]=digits[i]+1;
                    carry=0;
                    break;
                }
            }
            if (carry==1)
            {
                digits.insert (digits.begin(), carry);
            }
        }
        return digits;
    }
};