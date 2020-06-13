class Solution {
public:
    bool isAnagram(string s, string t) {
        sort (t.begin(),t.end());
        sort (s.begin(),s.end());
        if (s.size()!=t.size())
            return false;
        int i=0,j=0;
        while (i<s.size() && j<t.size())
        {
            if (s[i]!=t[j])
            {
                return false;
                break;
            }
            i++;
            j++;
        }
        return true;
    }
};