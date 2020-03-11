class Solution {
public:
    int longestPalindrome(string s) {
       int arr[127]={0};
       for (char c: s)
       {
           arr[c]++;
       }
        int odd=0, total=0;
        for (int i=0;i<127;i++)
        {
            total+=arr[i];
            odd+= (arr[i]%2);
        }
        return total- max(odd-1,0);
    }
};