class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        //choose a single day to buy and choose a future day to sell it. 
        //return the maximum profit you can achieve. 
        //you can choose not to make any transactions, in which case the profit is 0

        //brute force: two for loops 
        int max_profit = 0;
        size_t len = prices.size();
        for(size_t i = 0; i < len - 1; ++i)
        {
            for(size_t j = i+1; j < len; ++j)
            {
                max_profit = max(max_profit, prices[j] - prices[i]);
            }
        }
        return max_profit;
        
    }
};
