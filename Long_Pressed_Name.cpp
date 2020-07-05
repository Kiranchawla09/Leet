class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,j=0,k=0;
        int n= name.size();
        int m= typed.size();
        while (j<m||i<n)
        {
            char current=name[i];
            if (name[i]!=typed[j])
            {
                return false;
            }
            i++;
            j++;
            if (name[i]!=typed[j])
            {
                while (current==typed[j])
                    j++;
            }
        }
        return true;
    }
};