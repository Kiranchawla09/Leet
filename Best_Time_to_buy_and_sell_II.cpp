class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int prof=0;      
        if (prices.size()==1 || prices.size()==0)
        {
            return 0;
        }
        for (int i=1;i<prices.size();i++)
        {
            prof+= max(prices[i]-prices[i-1],0);
        }
        return prof;
    }
};