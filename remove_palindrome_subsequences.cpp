class Solution {
public:
    int removePalindromeSub(string s) {
        if (s.size()==0)
        {
            return 0;
        }
        else {
            if (ispalindrome (s))
            {
                return 1;
            }
        }
        return 2;
    }
    bool ispalindrome (string s)
    {
        int i=0,j=s.size()-1;
        while (i<j)
        {
            if (s[i]==s[j])
            {
                i++;
                j--;
            }
            else 
                return false;
        }
        return true;
    }
};