class Solution {
public:
    bool buddyStrings(string A, string B) {
        int size_a= A.size();
        if (A==B)
        {
            //swap same letters in both the strings
            // if the size of set < actual size then it is true e.g aab and aab
            //else there are no identical characters in the strings, e.g abc and abc
            return (set<char>(A.begin(), A.end()).size()< A.size());         
        }
        int l=0, r=size_a-1;
        while (l<size_a && A[l]==B[l])
        {
            l++;
        }
        while (r>=0 && A[r]==B[r])
        {
            r--;
        }
        
        if (l<r)
            swap(A[l], A[r]);
        
        return A==B;
    }
};