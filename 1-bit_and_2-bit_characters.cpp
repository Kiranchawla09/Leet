class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n= bits.size()-1;
        int count_1=0;
        for (int i=n-1;i>=0 && bits[i]==1;i--)
        {
            count_1++;
        }
        return (count_1%2==0);
    }
};