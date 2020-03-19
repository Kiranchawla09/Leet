class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int buy=0, prof=0;
        
        if (prices.size()==1 || prices.size()==0)
        {
            return 0;
        }
        for (int i=0;i<prices.size();i++)
        {
            minprice= min (minprice, prices[i]);
            prof= max(prof, prices[i]-minprice);
        }
        return prof;
    }
};