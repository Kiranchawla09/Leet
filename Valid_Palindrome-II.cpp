class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        int del=0;
        bool b= 1;
        while (i<j && j>i)
        {
            if (s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
               if (isPalindrome(s, i+1,j))
               {
                   return true;
               }
                if (isPalindrome (s, i, j-1))
                {
                    return true;
                }
                return false;
            }
             
        }
        return true;
    }
    bool isPalindrome(string s, int i, int j)
    {
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