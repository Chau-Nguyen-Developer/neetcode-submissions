class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        //choose a single day to buy and choose a future day to sell it. 
        //return the maximum profit you can achieve. 
        //you can choose not to make any transactions, in which case the profit is 0
 
        // Thật ra đây chính là two pointers methdo.
        int max_profit = 0;
        size_t len = prices.size();
        int min_value = prices[0];
        int *current_value = &prices[0];
        int i = 0;
        while(i < len)
        {
            if(*current_value < min_value)
            {
                min_value = *current_value;
            }
            else
            {
                max_profit = max(max_profit, *current_value - min_value);
            }
            ++current_value;
            ++i;
        }

        return max_profit;

        
    }
};
