class Solution {
public:
    int arrangeCoins(int n) {
        
          int i=1;
          int diff=n;
          while (diff>=i)
          {
             diff= diff-i; //4 2
              i++;//2 3
          }
            return i-1;
        
    }
};