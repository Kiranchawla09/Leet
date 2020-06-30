class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j= s.size()-1;
        set<char>st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        st.insert ('A');
        st.insert('E');
        st.insert('I');
        st.insert('O');
        st.insert('U');
        while (i<j)
        {
            if (st.find(s[i])!=st.end() && st.find(s[j])==st.end())
                j--;
            else if (st.find(s[j])!=st.end() && st.find(s[i])==st.end())
                i++;
            else if (st.find(s[i])!=st.end() && st.find(s[j])!=st.end())
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else
            {
                i++;
                j--;
            }
        }
         return s;   
    }
};