class Solution {
public:
    string reverseWords(string s) {
        int i=0, j=0;
        
        while (j<s.length())
        {
            if (s[j]!= ' ' && j!= s.length()-1)
            {
                j++;
            }
            else 
            {
                int pos=j;
                if (j!= s.length()-1)
                {
                reverse(s.begin()+i, s.begin()+j);
                }
                else 
                    reverse(s.begin()+i, s.begin()+j+1);
                i=pos+1;
                j=pos;
                j++;
            }
            
        }
        return s;
    }
};