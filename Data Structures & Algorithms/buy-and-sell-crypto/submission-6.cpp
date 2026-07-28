class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        //choose a single day to buy and choose a future day to sell it. 
        //return the maximum profit you can achieve. 
        //you can choose not to make any transactions, in which case the profit is 0
 
        int max_profit = 0;
        size_t len = prices.size();
        int min_value = prices[0];
        int i = 1;
        while(i < len)
        {
            if(prices[i] < min_value)
            {
                min_value = prices[i];
            }
            else
            {
                max_profit = max(max_profit, prices[i] - min_value);
            }
            ++i;
        }
       

        return max_profit;
        
    }
};
