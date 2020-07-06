class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        int n= haystack.size();
        int m= needle.size();
        if (m==0)
            return 0;
         if (m >n) {
            return -1;
        }
        while (i<n)
        {
            if (haystack[i]==needle[j])
            {
                j++;
                if (j==m)
                return i-j+1;
            }
            else
            {
                i=i-j;
                j=0;
            } 
            i++;
        }   
        return -1;
    }
};