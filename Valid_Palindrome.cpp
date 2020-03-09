class Solution {
public:
    bool isPalindrome(string s) {
        string ne;
        for (int i=0;i<s.size();i++)
        {
            if (isalpha(s[i]))
            {
                ne.push_back(char(tolower(s[i])));
            }
            if (isdigit (s[i]))
            {
                ne.push_back (s[i]);
            }
        }
        int a=0,b= ne.size()-1;
        while (a < b) 
        {
           if (ne[a]== ne[b])
           {
               a++;
               b--;
           }
            else
            {
                return false;
                break;
            }
        }
        return true;
    }
};