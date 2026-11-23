class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minStock = prices[0];
        int sub = 0;
        int profit = 0;
        for(int i=1; i<prices.size(); i++){
            minStock = min(minStock,prices[i]);
            sub = prices[i]-minStock;
            int profit = max(profit,sub);
        }
        return profit;
        

        
    }
};