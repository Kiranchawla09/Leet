class Solution {
public:
    bool isPalindrome(int x) {
        bool booli=false;
        if (x<0)
        {
            booli= false;
        }
        if (x<10 && x>=0)
        {
            booli= true;
        }
        std::string s = to_string(x);
        cout<< s;
        int i=0,j=s.length()-1;
        while (i<s.length() && j>0)
        {
            if (s[i]==s[j])
            {
                i++;
                j--;
                booli= true;
            }
            else
            {
                booli= false;
                break;
            }
        }
   return booli; }
};